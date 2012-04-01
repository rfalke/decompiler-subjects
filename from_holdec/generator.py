import sys,re

if len(sys.argv)!=3:
    print "Usage: generator.py input output"
    sys.exit(1)

INPUT=sys.argv[1]
OUTPUT=sys.argv[2]

out=open(OUTPUT, "w")
out.write("""
        .file   "a.c"
        .text
""")

names=[]
counter=0

def generateFunction(funcname, content):
    names.append(funcname)
    
    out.write("""
    
.globl %s
         .type   %s, @function
%s:
    %s
    ret
         .size   %s, .-%s
"""%(funcname, funcname, funcname, content, funcname, funcname))

def generateInputMoves(regs):
    r=[]
    filtered=[x for x in regs if x!="flags"]
    for i in range(len(filtered)):
        reg=filtered[i]
        r.append("  mov %d,%%%s"%(0x1000+4*i,reg))
    return "\n".join(r)+"\n"

def generateConstantInputMoves(regs):
    r=[]
    filtered=[x for x in regs if x!="flags"]
    for i in range(len(filtered)):
        reg=filtered[i]
        r.append("  mov $%d,%%%s"%(i+1,reg))
    return "\n".join(r)+"\n"

def generateOutputMoves(regs):
    global counter
    r=[]
    filtered=[x for x in regs if x!="flags"]
    for i in range(len(filtered)):
        reg=filtered[i]
        r.append("  mov %%%s,%d"%(reg, 0x2000+4*i))
    if "flags" in regs:
        flags="czspo"
        for i in range(len(flags)):
            f=flags[i]
            labelname=".L%d_%s$"%(counter,f)
            r.append("  jn%s %s"%(f,labelname))
            r.append("  movb $0x%d,%d"%(1+i, 0x2100+i))
            r.append("%s: nop"%(labelname))
        counter+=1
    return "\n".join(r)+"\n"

def generateFlags(type):
    if type=="flags_set1":
        r=["  movl $0x0,%eax",
           "  negl %eax"]
    elif type=="flags_set2":
        r=["  movl $0x2,%eax",
           "  negl %eax"]
    elif type=="flags_clear":
        r=["  movl $0x2,%eax",
           "  decl %eax"]
    elif type=="flags_cmp":
        r=["  mov 0x1100,%eax",
           "  mov 0x1104,%ebx",
           "  cmp %eax,%ebx"]
    elif type=="":
        r=[]
    else:
        assert 0, repr(type)
    return "\n".join(r)+"\n"

for line in [x.strip() for x in open(INPUT).readlines()]:
    if not line or line[0]=="#": continue
    mo=re.match(r"^([a-zA-Z][a-zA-Z0-9_]+)(?:\[(.*)\])?:(.*)$",line)
    assert mo
    funcname,options,body=mo.groups()
    if options:
        parts=[x.split("=") for x in options.split(",")]
        assert parts[0][0]=="in"
        assert parts[1][0]=="out"
        inputRegs=[x.strip() for x in parts[0][1].split(" ") if x.strip()]
        outputRegs=[x.strip() for x in parts[1][1].split(" ") if x.strip()]
        if "noflags" in outputRegs:
            outputRegs.remove("noflags")
        else:
            outputRegs.append("flags")
    else:
        inputRegs=[]
        outputRegs=[]

    
    rest=body.strip()
    if rest.startswith("hex "):
        rest=rest.replace("hex ", "")
        bytes=rest.split(" ")
        content=".byte "+(",".join(["0x"+x for x in bytes]))
    else:
        content=rest
    content="  "+content+"\n"

    dirvalues=[""]
    if "df" in inputRegs:
        dirvalues=["cld", "std", ""]
        inputRegs.remove("df")

    flagvalues=[""]
    if "flags" in inputRegs:
        flagvalues=["flags_clear", "flags_set1", "flags_set2", "flags_cmp"]
        inputRegs.remove("flags")

    allRegs=["eax", "ebx", "ecx", "edx", "ebp", "esi", "edi","esp"]
    for flag in flagvalues:
        for df in dirvalues:
            dfLine="  "+df+"\n"
            tmp=(dfLine+
                 generateFlags(flag) +
                 generateInputMoves(inputRegs) +
                 content +
                 generateOutputMoves(outputRegs))
            parts = [funcname,flag,df]
            name = "_".join([x for x in parts if x])
            generateFunction(name, tmp)

            tmp=(dfLine+
                 generateFlags(flag) +
                 generateConstantInputMoves(inputRegs) +
                 content +
                 generateOutputMoves(outputRegs))
            parts = [funcname,flag,df,"constant"]
            name = "_".join([x for x in parts if x])
            generateFunction(name, tmp)

            tmp=(dfLine+
                 generateFlags(flag) +
                 generateInputMoves(allRegs) +
                 content +
                 generateOutputMoves(allRegs))
            parts = [funcname,flag,df,"allregs"]
            name = "_".join([x for x in parts if x])
            generateFunction(name, tmp)


out.write("""
.globl main
         .type   main, @function
main:
          %s
         .size   main, .-main
"""%("\n          ".join(["call "+x for x in names])))

out.close()
