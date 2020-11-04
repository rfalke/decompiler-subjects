import random
import sys
import os

REG_B = "al ah bl bh cl ch dl dh".split(" ")
REG_B_NOT_AH = "al bl bh cl ch dl dh".split(" ")
REG_W = "ax bx cx dx di si bp".split(" ")
REG_W_NOT_DX = "ax bx cx di si bp".split(" ")
REG_L = "eax ebx ecx edx edi esi ebp".split(" ")
REG_L_NOT_EDX = "eax ebx ecx edi esi ebp".split(" ")
PLAIN_BITSHIFT = "rol ror sar shl shr".split(" ")
BITSHIFT_WITH_CARRY = "rcl rcr".split(" ")
KNOWN_GROUPS = "base packedBcd bmi1 bmi2 adx sse42 lzcnt".split(" ")

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
    if "0x32bit" in str:
        str = str.replace("0x32bit", "0x%x" % random.randint(0, 2**32-1))

    str = str.replace("reg1bNotAh", random.choice(REG_B_NOT_AH))
    str = str.replace("reg1wNotDx", random.choice(REG_W_NOT_DX))
    str = str.replace("reg1lNotEdx", random.choice(REG_L_NOT_EDX))

    str = str.replace("reg1b", random.choice(REG_B))
    str = str.replace("reg2b", random.choice(REG_B))
    str = str.replace("reg3b", random.choice(REG_B))
    str = str.replace("reg1w", random.choice(REG_W))
    str = str.replace("reg2w", random.choice(REG_W))
    str = str.replace("reg3w", random.choice(REG_W))
    str = str.replace("reg1l", random.choice(REG_L))
    str = str.replace("reg2l", random.choice(REG_L))
    str = str.replace("reg3l", random.choice(REG_L))
    return str


def expand(str):
    str = expand0(str)
    if "ADDR" in str:
        vars = ["reg1l", "reg1l+0x8bit", "reg1l+0x32bit",
                "reg1l+reg2l*1", "reg1l+reg2l*2", "reg1l+reg2l*4", "reg1l+reg2l*8",
                "reg1l+reg2l*1+0x8bit", "reg1l+reg2l*2+0x8bit", "reg1l+reg2l*4+0x8bit", "reg1l+reg2l*8+0x8bit",
                "reg1l+reg2l*1+0x32bit", "reg1l+reg2l*2+0x32bit", "reg1l+reg2l*4+0x32bit", "reg1l+reg2l*8+0x32bit"
                ]
        var = random.choice(vars)
        var = expand0(var)
        str = str.replace("ADDR", "["+var+"]")
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
 push ebx
 push ebp
 push esi
 push edi
 push gs
""".replace("a_method", name))
    for reg in "eax ebx ecx edx ebp esi edi".split(" "):
        out.write("  mov %s,0x%x\n" % (reg, random.randint(0, 2**32-1)))

    for line in lines:
        out.write("   "+line+"\n")

    if expected != None:
        tmp = expected[0]
        del expected[0]
        out.write(" sub eax,"+tmp+"\n")

    out.write("""
 pop gs
 pop edi
 pop esi
 pop ebp
 pop ebx
 ret
         .size   a_method, .-a_method
""".replace("a_method", name))


if 1:
    for idx, inst in enumerate(instructions):
        for i in range(numvariantsperinst):
            name = "inst_%d_values_var_%d" % (idx, i)
            lines = ["neg eax", expand(inst["inst"])]+("""
 add eax,ebx
 add eax,ecx
 add eax,edx
 add eax,ebp
 add eax,esi
 add eax,edi
""").split("\n")
            write_function(name, lines)

            name = "inst_%d_flags_var_%d" % (idx, i)
            lines = ["neg eax", expand(inst["inst"])]

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
 xor eax,eax
 add eax,ebp
 add eax,edi
 add eax,esi
 add eax,edx
 add eax,ecx
""").split("\n")
            write_function(name, lines)

    for var in range(numfunctions):
        name = "log_size_%d_var_%03d" % (logsize, var)
        lines = generate_list(2**logsize)
        lines += ("""
 add eax,ebx
 add eax,ecx
 add eax,edx
 add eax,ebp
 add eax,esi
 add eax,edi
""").split("\n")
        write_function(name, lines)
out.close()

out = open(outputcfn, "w")

for i in names:
    out.write("extern int %s(void);\n" % i)
out.write("""

#include <stdio.h>
#include <assert.h>

""")
if expected == None:
    out.write(r"""
static void report(char *name, int res) {
  printf("0x%08x = %s0x%08x = %15d = %15u %s\n", res, res<0?"-":" ", res<0?-(unsigned)res:res, res, res, name);
}
""")
out.write("""
int main(int argc, char *argv[])
{
  int sum=0;
""")
for i in names:
    if expected == None:
        out.write('  report("%s", %s());\n' % (i, i))
    else:
        out.write('  {int x=%s(); sum+=x;}\n' % (i))
out.write("""
  assert(sum==0);
  return 0;
}
""")

if 0:
    instructions.sort(lambda x, y: cmp(y["counter"], x["counter"]))
    for i in instructions:
        print "numUsed=%3d inst=%s" % (i["counter"], i["inst"])
