import random
import sys
import os

VERBOSE_PASS2=0
REG_B_NOT_AH = "al bl bh cl ch dl dh".split(" ")
REG_B="al ah bl bh cl ch dl dh r8b r9b r10b r11b r12b r13b r14b r15b sil dil bpl".split(" ")
REG_BO="al ah bl bh cl ch dl dh".split(" ")
REG_BE="al bl cl dl r8b r9b r10b r11b r12b r13b r14b r15b sil dil bpl".split(" ")

REG_W_NOT_DX = "ax bx cx di si bp r8w r9w r10w r11w r12w r13w r14w r15w".split(" ")
REG_W =        "ax bx cx dx di si bp r8w r9w r10w r11w r12w r13w r14w r15w".split(" ")
REG_WO =       "ax bx cx dx di si bp".split(" ")
REG_WE =       "ax bx cx dx di si bp r8w r9w r10w r11w r12w r13w r14w r15w".split(" ")

REG_L_NOT_EDX = "eax ebx ecx edi esi ebp r8d r9d r10d r11d r12d r13d r14d r15d".split(" ")
REG_L =         "eax ebx ecx edx edi esi ebp r8d r9d r10d r11d r12d r13d r14d r15d".split(" ")
REG_LO =        "eax ebx ecx edi esi ebp".split(" ")
REG_LE =        "eax ebx ecx edi esi ebp r8d r9d r10d r11d r12d r13d r14d r15d".split(" ")

REG_Q_NOT_RDX_R8 = "rax rbx rcx rdi rsi rbp r9 r10 r11 r12 r13 r14 r15".split(" ")
REG_Q = "rax rbx rcx rdx rdi rsi rbp r8 r9 r10 r11 r12 r13 r14 r15".split(" ")

PLAIN_BITSHIFT = "rol ror sar shl shr".split(" ")
BITSHIFT_WITH_CARRY = "rcl rcr".split(" ")
BITTEST="bt btc btr bts".split(" ")
KNOWN_GROUPS = "base packedBcd bmi1 bmi2 adx sse42 lzcnt".split(" ")

REGS_WITHOUT_RAX="rbx rcx rdx rbp rsi rdi r8 r9 r10 r11 r12 r13 r14 r15".split(" ")
REGS_WITHOUT_RAX_AND_RDX="rbx rcx rbp rsi rdi r8 r9 r10 r11 r12 r13 r14 r15".split(" ")

inputfn = sys.argv[1]
outputasmfn = sys.argv[2]
outputcfn = sys.argv[3]
logsize = int(sys.argv[4])
numfunctions = int(sys.argv[5])
seed = int(sys.argv[6])
outputfn = sys.argv[7]
groups = sys.argv[8].split(",")
numvariantsperinst = int(sys.argv[9])

for i in groups:
    assert i in KNOWN_GROUPS, "Unknown group %r" % i

ignore_adjustflag = "packedBcd" not in groups


random.seed(seed)

expected = None
if os.path.isfile(outputfn):
    expected = [x.split(" ")[0] for x in open(outputfn).readlines()]

lines = [x for x in open(inputfn).readlines() if x.strip() and x[0] != "#"]
cblock = None
instructions = []
for i in lines:
    if i[0] == " " or i[0] == "\t":
        assert cblock != None
        assert cblock["group"], "No group for %r" % i
        assert cblock["group"] in KNOWN_GROUPS, "Unknown group %r for %r" % (
            cblock["group"], i)
        i = i.strip()
        to_add = []
        if "PLAIN_BITSHIFT" in i:
            for j in PLAIN_BITSHIFT:
                i2 = i.replace("PLAIN_BITSHIFT", j)
                to_add.append(i2)
        elif "BITSHIFT_WITH_CARRY" in i:
            for j in BITSHIFT_WITH_CARRY:
                i2 = i.replace("BITSHIFT_WITH_CARRY", j)
                to_add.append(i2)
        elif "BITTEST" in i:
            for j in BITTEST:
                i2 = i.replace("BITTEST", j)
                to_add.append(i2)
        else:
            to_add.append(i)

        for j in to_add:
            if cblock["group"] in groups:
                x = cblock.copy()
                x["inst"] = j.strip()
                instructions.append(x)
    else:
        cblock = {}
        cblock["def"] = ""
        cblock["undef"] = ""
        cblock["use"] = ""
        cblock["counter"] = 0
        cblock["group"] = ""
        i = i.strip()
        for x in i.split(" "):
            k, v = x.split("=")
            if k != "group":
                v = sorted(v)
                if "a" in v and ignore_adjustflag:
                    v.remove("a")
            cblock[k] = v


def expand0(str):
    if "0x4bit" in str:
        str = str.replace("0x4bit", "0x%x" % random.randint(0, 2**4-1))
    if "0x8bitNotZero" in str:
        str = str.replace("0x8bitNotZero", "0x%x" % random.randint(1, 2**8-1))
    if "0x8bit" in str:
        str = str.replace("0x8bit", "0x%x" % random.randint(0, 2**8-1))
    if "0x16bit" in str:
        str = str.replace("0x16bit", "0x%x" % random.randint(0, 2**16-1))
    if "ext0x32bit" in str:
        n=random.randint(0, 2**32-1)
        p=""
        if n>=2**31:
            p="ffffffff"            
        str = str.replace("ext0x32bit", "0x%s%x" % (p,n))
    if "0x32bit" in str:
        str = str.replace("0x32bit", "0x%x" % random.randint(0, 2**32-1))
    if "0x64bit" in str:
        str = str.replace("0x64bit", "0x%x" % random.randint(0, 2**64-1))

    str = str.replace("reg1bNotAh", random.choice(REG_B_NOT_AH))
    str = str.replace("reg1wNotDx", random.choice(REG_W_NOT_DX))
    str = str.replace("reg1lNotEdx", random.choice(REG_L_NOT_EDX))
    str = str.replace("reg1qNotRdxR8", random.choice(REG_Q_NOT_RDX_R8))

    str = str.replace("reg1bo", random.choice(REG_BO))
    str = str.replace("reg2bo", random.choice(REG_BO))
    str = str.replace("reg3bo", random.choice(REG_BO))

    str = str.replace("reg1be", random.choice(REG_BE))
    str = str.replace("reg2be", random.choice(REG_BE))
    str = str.replace("reg3be", random.choice(REG_BE))

    str = str.replace("reg1b", random.choice(REG_B))
    str = str.replace("reg2b", random.choice(REG_B))
    str = str.replace("reg3b", random.choice(REG_B))

    str = str.replace("reg1wo", random.choice(REG_WO))
    str = str.replace("reg2wo", random.choice(REG_WO))
    str = str.replace("reg3wo", random.choice(REG_WO))
    
    str = str.replace("reg1we", random.choice(REG_WE))
    str = str.replace("reg2we", random.choice(REG_WE))
    str = str.replace("reg3we", random.choice(REG_WE))
    
    str = str.replace("reg1w", random.choice(REG_W))
    str = str.replace("reg2w", random.choice(REG_W))
    str = str.replace("reg3w", random.choice(REG_W))

    str = str.replace("reg1lo", random.choice(REG_LO))
    str = str.replace("reg2lo", random.choice(REG_LO))
    str = str.replace("reg3lo", random.choice(REG_LO))

    str = str.replace("reg1le", random.choice(REG_LE))
    str = str.replace("reg2le", random.choice(REG_LE))
    str = str.replace("reg3le", random.choice(REG_LE))

    str = str.replace("reg1l", random.choice(REG_L))
    str = str.replace("reg2l", random.choice(REG_L))
    str = str.replace("reg3l", random.choice(REG_L))

    str = str.replace("reg1q", random.choice(REG_Q))
    str = str.replace("reg2q", random.choice(REG_Q))
    str = str.replace("reg3q", random.choice(REG_Q))
    return str


def expand(str):
    str = expand0(str)
    if "ADDR32" in str:
        vars = ["reg1l", "reg1l+0x8bit", "reg1l+ext0x32bit",
                "reg1l+reg2l*1", "reg1l+reg2l*2", "reg1l+reg2l*4", "reg1l+reg2l*8",
                "reg1l+reg2l*1+0x8bit", "reg1l+reg2l*2+0x8bit", "reg1l+reg2l*4+0x8bit", "reg1l+reg2l*8+0x8bit",
                "reg1l+reg2l*1+ext0x32bit", "reg1l+reg2l*2+ext0x32bit", "reg1l+reg2l*4+ext0x32bit", "reg1l+reg2l*8+ext0x32bit"
                ]
        var = random.choice(vars)
        var = expand0(var)
        str = str.replace("ADDR32", "["+var+"]")
    elif "ADDR64" in str:
        vars = ["reg1q", "reg1q+0x8bit", "reg1q+ext0x32bit",
                "reg1q+reg2q*1", "reg1q+reg2q*2", "reg1q+reg2q*4", "reg1q+reg2q*8",
                "reg1q+reg2q*1+0x8bit", "reg1q+reg2q*2+0x8bit", "reg1q+reg2q*4+0x8bit", "reg1q+reg2q*8+0x8bit",
                "reg1q+reg2q*1+ext0x32bit", "reg1q+reg2q*2+ext0x32bit", "reg1q+reg2q*4+ext0x32bit", "reg1q+reg2q*8+ext0x32bit"
                ]
        var = random.choice(vars)
        var = expand0(var)
        str = str.replace("ADDR64", "["+var+"]")

    return str


def generate_list(howMany):
    defined = {}
    result = []
    while len(result) < howMany:
        while 1:
            template = random.choice(instructions)
            ok = True
            for i in template["use"]:
                if i not in defined:
                    ok = False
                    break
            if ok:
                break
        template["counter"] += 1
        for i in template["def"]:
            defined[i] = 1
        for i in template["undef"]:
            if i in defined:
                del defined[i]
        exp = expand(template["inst"])
        for j in exp.split(";"):
            result.append(j.strip())
    return result


out = open(outputasmfn, "w")
out.write("""
        .file   "a.c"
        .text
.intel_syntax noprefix

""")

names = []



def write_function(name, lines):
    names.append(name)
    out.write("""
.globl a_method
         .type   a_method, @function
a_method:
""".replace("a_method", name))
    for reg in REGS_WITHOUT_RAX_AND_RDX:
        out.write(" push "+reg+"\n")
    for reg in ["rax"]+REGS_WITHOUT_RAX:
        out.write("  mov %s,0x%x\n" % (reg, random.randint(0, 2**64-1)))

    for line in lines:
        out.write("   "+line+"\n")

    if expected != None:
        tmp = expected[0]
        del expected[0]
        out.write(" mov rbx,"+tmp+"\n")
        out.write(" sub rax,rbx\n")

    for reg in reversed(REGS_WITHOUT_RAX_AND_RDX):
       out.write(" pop "+reg+"\n")
    out.write("""
 ret
         .size   a_method, .-a_method
""".replace("a_method", name))


if 1:
    for idx, inst in enumerate(instructions):
        for i in range(numvariantsperinst):
            name = "inst_%d_values_var_%d" % (idx, i)
            lines = ["neg rax", expand(inst["inst"])]
            for reg in REGS_WITHOUT_RAX:
              lines.append(" add rax,"+reg)
            write_function(name, lines)

            name = "inst_%d_flags_var_%d" % (idx, i)
            lines = ["neg rax", expand(inst["inst"])]

            lines.append("mov ebp,0")
            if "c" in inst["def"]:
                lines.append("mov eax,0x1")
                lines.append("cmovc ebp,eax")

            lines.append("mov edi,0")
            if "o" in inst["def"]:
                lines.append("mov eax,0x2")
                lines.append("cmovo edi,eax")

            lines.append("mov esi,0")
            if "p" in inst["def"]:
                lines.append("mov eax,0x4")
                lines.append("cmovpe esi,eax")

            lines.append("mov edx,0")
            if "s" in inst["def"]:
                lines.append("mov eax,0x8")
                lines.append("cmovs edx,eax")

            lines.append("mov ecx,0")
            if "a" in inst["def"] and not ignore_adjustflag:
                lines.append("mov al,0")
                lines.append("aaa")
                lines.append("mov eax,0x10")
                lines.append("cmovc ecx,eax")

            lines += ("""
 xor rax,rax
 add rax,rbp
 add rax,rdi
 add rax,rsi
 add rax,rdx
 add rax,rcx
""").split("\n")
            write_function(name, lines)

    for var in range(numfunctions):
        name = "log_size_%d_var_%03d" % (logsize, var)
        lines = generate_list(2**logsize)
        for reg in REGS_WITHOUT_RAX:
          lines.append(" add rax,"+reg)
        write_function(name, lines)
out.close()

out = open(outputcfn, "w")

for i in names:
    out.write("extern long %s(void);\n" % i)
out.write("""

#include <stdio.h>
#include <assert.h>

""")
if expected == None or VERBOSE_PASS2:
    out.write(r"""
static void report(char *name, long res) {
  printf("0x%016lx = %s0x%016lx = %30ld = %30lu %s\n", res, res<0?"-":" ", res<0?-(unsigned)res:res, res, res, name);
}
""")
out.write("""
int main(int argc, char *argv[])
{
  long sum=0;
""")
for i in names:
    if expected == None:
        out.write('  report("%s", %s());\n' % (i, i))
    else:
     if not VERBOSE_PASS2:
        out.write('  {long x=%s(); sum+=x;}\n' % (i))
     else:
        out.write('  {long x=%s(); report("%s", x); assert(x==0); sum+=x;}\n' % (i,i))
out.write("""
  assert(sum==0);
  return 0;
}
""")

if 0:
    instructions.sort(lambda x, y: cmp(y["counter"], x["counter"]))
    for i in instructions:
        print "numUsed=%3d inst=%s" % (i["counter"], i["inst"])
