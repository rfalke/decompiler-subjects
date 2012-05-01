
import sys,re

def usage():
    print "Usage: generator.py input output.s"
    print "                    -evaluator input output.s output.c"
    sys.exit(1)

if len(sys.argv) not in [3,5]:
    usage()

forEvaluator=0
if sys.argv[1]=="-evaluator":
    if len(sys.argv) != 5: usage()
    forEvaluator=1
    del sys.argv[1]
    INPUT=sys.argv[1]
    OUTPUT=sys.argv[2]
    OUTPUT_C=sys.argv[3]
else:
    if len(sys.argv) != 3: usage()
    INPUT=sys.argv[1]
    OUTPUT=sys.argv[2]

out=open(OUTPUT, "w")
out.write("""
        .file   "a.c"
        .text
""")

names=[]
doNotEvalNames=[]
counter=0

allRegs=["eax", "ebx", "ecx", "edx", "ebp", "esi", "edi","esp"]

ccs="o no c nc z nz be a s ns p np l nl le g".split(" ")
assert len(ccs)==16

constantSets=[]
constantSets.append({})
constantSets[0]["flags"]="0"
constantSets[0]["eax"]="2"
constantSets[0]["ebx"]="3"
constantSets[0]["ecx"]="4"
constantSets[0]["edx"]="5"
constantSets[0]["ebp"]="6"
constantSets[0]["esi"]="7"
constantSets[0]["edi"]="8"
constantSets[0]["esp"]="9"

# Generated using
#   random.seed(42);["0x%08x"%random.randint(0,2**32) for x in range(8)]
constantSets.append({})
constantSets[1]["flags"]="0"
constantSets[1]["eax"]='0xa3b17984'
constantSets[1]["ebx"]='0x06671ad7'
constantSets[1]["ecx"]='0x46685248'
constantSets[1]["edx"]='0x392456c4'
constantSets[1]["ebp"]='0xbc8960a4'
constantSets[1]["esi"]='0xad3c2d78'
constantSets[1]["edi"]='0xe465e152'
constantSets[1]["esp"]='0x16419f92'

# Generated using
#   random.seed(314159);["0x%08x"%random.randint(0,2**32) for x in range(8)]
constantSets.append({})
constantSets[2]["flags"]="0xfeff"
constantSets[2]["eax"]='0x313ec0e8'
constantSets[2]["ebx"]='0x496e81c3'
constantSets[2]["ecx"]='0x1e3f6cb2'
constantSets[2]["edx"]='0x4e6925b3'
constantSets[2]["ebp"]='0x4f312610'
constantSets[2]["esi"]='0x2f37a4a5'
constantSets[2]["edi"]='0x91a917b4'
constantSets[2]["esp"]='0xbc56d261'

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
    r.append("  nop")
    if forEvaluator:
        r.append("  push %ebp")
        r.append("  pushfw")
        r.append("  push %es")
        r.append("  push %fs")
        r.append("  push %gs")

    r.append("  mov %d,%%ax"%(0x1100))
    r.append("  push %ax")
    r.append("  popfw")
    for i in range(len(regs)):
        reg=regs[i]
        if reg=="esp": continue
        r.append("  mov %d,%%%s"%(0x1000+4*i,reg))
    r.append("  mov %%esp,%s"%(getRegDest(0x2050, "esp_start")))
    return "\n".join(r)+"\n"

def generateConstantInputMoves(setNo, constantOverwrites, flagOverwrite=None):
    matched=[]
    set=constantSets[setNo]
    if flagOverwrite==None:
        f=set["flags"]
    else:
        f=flagOverwrite
    r=[]
    r.append("  nop")
    if forEvaluator:
        r.append("  push %ebp")
        r.append("  pushfw")
        r.append("  push %es")
        r.append("  push %fs")
        r.append("  push %gs")
    r.append("  pushw $%s"%f)
    r.append("  popfw")
    for reg in allRegs:
        if reg=="esp": continue
        if constantOverwrites.has_key((setNo, reg)):
            matched.append(reg)
        value=constantOverwrites.get((setNo, reg), set[reg])
        r.append("  mov $%s,%%%s"%(value,reg))
    r.append("  mov %%esp,%s"%(getRegDest(0x2050, "esp_start")))
    available=[]
    for s,reg in constantOverwrites.keys():
        if s==setNo: available.append(reg)
    assert matched==available
    return "\n".join(r)+"\n"

def getRegDest(addr, regName):
    if forEvaluator:
        s="dest_"+regName
        return s
    else:
        return "%d"%addr
    
def generateOutputMoves(regs):
    r=[]
    for i in range(len(regs)):
        reg=regs[i]
        if reg=="esp": continue
        r.append("  mov %%%s,%s"%(reg, getRegDest(0x2000+4*i,reg)))
    
    for c in range(16):
        r.append("  set%s %s"%(ccs[c], getRegDest(0x2200+c, "cc_"+ccs[c])))
         
    #r.append("  movw -2(%esp),%bx")
    r.append("  pushfw")
    r.append("  pop %ax")
    #r.append("  movw %bx,-2(%esp)")
    r.append("  mov %%ax,%s"%(getRegDest(0x2100, "flags")))

    r.append("  mov %s,%%eax"%(getRegDest(0x2050, "esp_start")))
    r.append("  sub %esp,%eax")
    r.append("  mov %%eax,%s"%(getRegDest(0x2020, "esp_diff")))
    r.append("  mov $0x0,%eax")
    if forEvaluator:
        r.append("  pop %gs")
        r.append("  pop %fs")
        r.append("  pop %es")
        r.append("  popfw")
        r.append("  pop %ebp")
    return "\n".join(r)+"\n"

vars=[]
for line in [x.strip() for x in open(INPUT).readlines()]:
    if not line or line[0]=="#": continue
    if line.startswith("array:"):
        vars.append(line.strip().split(":")[1:3])
        continue
    mo=re.match(r"^([a-zA-Z][a-zA-Z0-9_]+)(?:\[(.*)\])?:(.*)$",line)
    assert mo,line
    funcname,options,body=mo.groups()
    inputRegs=[]
    outputRegs=[]
    constantOverwrites={}
    if options:
        parts=[x for x in options.split(",")]        
        for part in parts:
            if part=="doNotEval":
                doNotEvalNames.append(funcname)
            elif part.startswith("in="):
                remain=part.split("=",1)[1]
                inputRegs=[x.strip() for x in remain.split(" ") if x.strip()]
            elif part.startswith("out="):
                remain=part.split("=",1)[1]
                outputRegs=[x.strip() for x in remain.split(" ") if x.strip()]
            elif part.startswith("overwrite:"):
                tmp,setNo,reg,value=part.split(":")
                constantOverwrites[(int(setNo),reg)]=value
            else:
                assert 0, ["Unknown option",part]
    rest=body.strip()
    if rest.startswith("hex "):
        rest=rest.replace("hex ", "")
        bytes=rest.split(" ")
        content=".byte "+(",".join(["0x"+x for x in bytes]))
    else:
        content=rest
    content="  "+content+"\n"

    ### 1) just the plain opcode
    tmp=content+"  mov $0x0,%eax\n"
    parts = [funcname,"plain"]
    name = "_".join([x for x in parts if x])
    generateFunction(name, tmp)

    ### 2) with full regs
    tmp=(generateInputMoves(allRegs) +
         content +
         generateOutputMoves(allRegs))
    parts = [funcname,"allregs"]
    name = "_".join([x for x in parts if x])
    generateFunction(name, tmp)

    if "flags" in inputRegs:
        # 3a) constant with cleared flags
        tmp=(generateConstantInputMoves(0, constantOverwrites, "0x0") + content + generateOutputMoves(allRegs))
        parts = [funcname,"constant_simple_clear"]
        name = "_".join([x for x in parts if x])
        generateFunction(name, tmp)

        # 3b) constant with set flags
        tmp=(generateConstantInputMoves(0, constantOverwrites, "0xfeff") + content + generateOutputMoves(allRegs))
        parts = [funcname,"constant_simple_set"]
        name = "_".join([x for x in parts if x])
        generateFunction(name, tmp)
    else:
        # 3c) constant with unset flags
        tmp=(generateConstantInputMoves(0, constantOverwrites) +  content + generateOutputMoves(allRegs))
        parts = [funcname,"constant_simple"]
        name = "_".join([x for x in parts if x])
        generateFunction(name, tmp)

    # 4) complex constant cases
    for i in [1,2]:
        tmp=(generateConstantInputMoves(i, constantOverwrites) +  content + generateOutputMoves(allRegs))
        parts = [funcname,"constant_complex%d"%i]
        name = "_".join([x for x in parts if x])
        generateFunction(name, tmp)

out.write("  .data\n")
for name,data in vars:
    out.write(".globl %s\n"%name)
    out.write("%s: %s\n"%(name,data))
out.write("  .text\n")

if forEvaluator:
    for i in allRegs+["esp_start", "esp_diff"]:
        out.write("  .comm   dest_%s,4,4\n"%i)
    for i in ["flags"]:
        out.write("  .comm   dest_%s,2,4\n"%i)
    for i in ["cc_"+x for x in ccs]:
        out.write("  .comm   dest_%s,1,4\n"%i)

    outc=open(OUTPUT_C, "w")
    for x in names:
        if "constant" not in x: continue
        stem=x.split("_constant_")[0]
        if stem in doNotEvalNames: continue
        outc.write('''
    {
	extern void %s();
        printf("=== %%s\\n", "%s");
        fflush(stdout);
        %s();
	printInfo();
    }
        '''%(x,x,x))
    outc.close()

out.write("""
.globl callAll
         .type   callAll, @function
callAll:
          %s
         .size   callAll, .-callAll
"""%("\n          ".join(["call "+x for x in names])))

out.close()
