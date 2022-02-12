import os
import random
import re
import sys

# x0 - scratch
# x1 - scratch
# x2 - scratch
# x3 - scratch
REG_V_LIST_START = 10
REG_V_NUMBERS = [0, 1, 10, 11, 12, 13, 17, 30, 31]
REG_GP_NUMBERS = [4, 5, 6]
REG_V = ["v%d" % x for x in REG_V_NUMBERS]
REG_B = ["b%d" % x for x in REG_V_NUMBERS]
REG_H = ["h%d" % x for x in REG_V_NUMBERS]
REG_S = ["s%d" % x for x in REG_V_NUMBERS]
REG_D = ["d%d" % x for x in REG_V_NUMBERS]
REG_W = ["w%d" % x for x in REG_GP_NUMBERS]
REG_X = ["x%d" % x for x in REG_GP_NUMBERS]
KNOWN_GROUPS = "simdInt simdFloat sha3 dotprod sm4".split(" ")
ARR_NAME_TO_LIST = {}
ARR_NAME_TO_LIST["all"] = "8B 16B 4H 8H 2S 4S 1D 2D".split(" ")
ARR_NAME_TO_LIST["not1d"] = "8B 16B 4H 8H 2S 4S 2D".split(" ")
ARR_NAME_TO_LIST["not1dOrB"] = "4H 8H 2S 4S 2D".split(" ")
ARR_NAME_TO_LIST["notD"] = "8B 16B 4H 8H 2S 4S".split(" ")
ARR_NAME_TO_LIST["onlyB"] = "8B 16B".split(" ")
ARR_NAME_TO_LIST["onlyH"] = "4H 8H".split(" ")
ARR_NAME_TO_LIST["onlyS"] = "2S 4S".split(" ")
ARR_NAME_TO_LIST["onlyBandH"] = "8B 16B 4H 8H".split(" ")
ARR_NAME_TO_LIST["onlyHandS"] = "4H 8H 2S 4S".split(" ")

ARR_NAME_TO_LIST["twoVar1"] = [("8h", "8b", "", 8, None), ("8h", "16b", "2", 8, None),
                               ("1q", "1d", "", 64, None), ("1q", "2d", "2", 64, None)]
ARR_NAME_TO_LIST["twoVar2"] = [("8h", "8b", "", 8, None), ("8h", "16b", "2", 8, None),
                               ("4s", "4h", "", 16, None), ("4s", "8h", "2", 16, None),
                               ("2d", "2s", "", 32, None), ("2d", "4s", "2", 32, None)]
ARR_NAME_TO_LIST["twoVar3Indexed"] = [("4s", "4h", "", 16, "regLowerV3.h[index_upto_7]"),
                                      ("4s", "8h", "2", 16, "regLowerV3.h[index_upto_7]"),
                                      ("2d", "2s", "", 32, "regV3.s[index_upto_3]"),
                                      ("2d", "4s", "2", 32, "regV3.s[index_upto_3]")]
ARR_NAME_TO_LIST["twoVar4"] = [("4s", "4h", "", 16, None), ("4s", "8h", "2", 16, None),
                               ("2d", "2s", "", 32, None), ("2d", "4s", "2", 32, None)]

ARR_SIZES = {"B": 8, "H": 16, "S": 32, "D": 64}

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

random.seed(seed)

expected = None
if os.path.isfile(outputfn):
    partial_parsed = [x.split("=")[1].strip().split(" ") for x in open(outputfn).readlines()]
    expected = [(x[0], x[2], x[4], x[6]) for x in partial_parsed]

lines = [x for x in open(inputfn).readlines() if x.strip() and x.strip()[0] != "#"]
cblock = None
instructions = []


def maybe_expand(str):
    if "[su]" in str:
        return [str.replace("[su]", "s"),
                str.replace("[su]", "u")]
    return [str]


for i in lines:
    if i[0] == " " or i[0] == "\t":
        assert cblock != None
        assert cblock["group"], "No group for %r" % i
        assert cblock["group"] in KNOWN_GROUPS, "Unknown group %r for %r" % (
            cblock["group"], i)
        i = i.strip()
        if i.startswith("#"):
            continue
        to_add = []
        arrName = cblock["arr"]
        for expanded in maybe_expand(i):
            if arrName and arrName.startswith("two"):
                for const, dyn, emptyOrTwo, dynSize, reg3 in ARR_NAME_TO_LIST[arrName]:
                    line = expanded
                    if "reg3" in line:
                        line = line.replace("reg3", reg3)

                    to_add.append(line.
                                  replace("shift_upto_arrD", "shift_upto_%d" % dynSize).
                                  replace("0_upto_arrD", "0_to_%d" % (dynSize - 1)).
                                  replace("const_arrD_size", "%d" % dynSize).
                                  replace("arrC", const).
                                  replace("arrD", dyn).
                                  replace("{2}", emptyOrTwo))
            elif arrName:
                for j in ARR_NAME_TO_LIST[arrName]:
                    arr_size = ARR_SIZES[j[-1]]
                    to_add.append(expanded.
                                  replace("0_to_arr_size_exc", "0_to_" + str(arr_size - 1)).
                                  replace("1_to_arr_size_inc", "1_to_" + str(arr_size)).
                                  replace("arr", j))
            else:
                to_add.append(expanded)

        for j in to_add:
            if cblock["group"] in groups:
                x = cblock.copy()
                x["inst"] = j.strip()
                instructions.append(x)
    else:
        cblock = {}
        cblock["arr"] = ""
        cblock["counter"] = 0
        cblock["group"] = ""
        cblock["satur"] = ""
        i = i.strip()
        for x in i.split(" "):
            k, v = x.split("=")
            cblock[k] = v

instructions.sort(lambda x, y: cmp(x["inst"], y["inst"]))


def expand0(str):
    if "0x4bit" in str:
        str = str.replace("0x4bit", "0x%x" % random.randint(0, 2 ** 4 - 1))
    if "0x8bitNotZero" in str:
        str = str.replace("0x8bitNotZero", "0x%x" % random.randint(1, 2 ** 8 - 1))
    if "0x8bitStrechedTo64bit" in str:
        str = str.replace("0x8bitStrechedTo64bit", "0x%s" % ("".join([random.choice(["00", "ff"]) for x in range(8)])))
    if "0x8bit" in str:
        str = str.replace("0x8bit", "0x%x" % random.randint(0, 2 ** 8 - 1))
    if "0x16bit" in str:
        str = str.replace("0x16bit", "0x%x" % random.randint(0, 2 ** 16 - 1))
    if "0x32bit" in str:
        str = str.replace("0x32bit", "0x%x" % random.randint(0, 2 ** 32 - 1))

    str = str.replace("step8_upto_8", "0x%x" % random.choice([0, 8]))
    str = str.replace("step8_upto_24", "0x%x" % random.choice([0, 8, 16, 24]))
    str = str.replace("8_or_16", "0x%x" % random.choice([8, 16]))

    str = str.replace("index_upto_15", "%d" % random.randint(0, 15))
    str = str.replace("index_upto_7", "%d" % random.randint(0, 7))
    str = str.replace("index_upto_3", "%d" % random.randint(0, 3))
    str = str.replace("index_upto_1", "%d" % random.randint(0, 1))

    str = str.replace("index2_upto_15", "%d" % random.randint(0, 15))
    str = str.replace("index2_upto_7", "%d" % random.randint(0, 7))
    str = str.replace("index2_upto_3", "%d" % random.randint(0, 3))
    str = str.replace("index2_upto_1", "%d" % random.randint(0, 1))

    str = str.replace("shift_upto_8", "%d" % random.randint(1, 8))
    str = str.replace("shift_upto_16", "%d" % random.randint(1, 16))
    str = str.replace("shift_upto_32", "%d" % random.randint(1, 32))
    str = str.replace("shift_upto_64", "%d" % random.randint(1, 64))

    str = str.replace("0_to_7", "%d" % random.randint(0, 7))
    str = str.replace("0_to_15", "%d" % random.randint(0, 15))
    str = str.replace("0_to_31", "%d" % random.randint(0, 31))
    str = str.replace("0_to_63", "%d" % random.randint(0, 63))

    str = str.replace("0_to_8", "%d" % random.randint(0, 8))
    str = str.replace("0_to_16", "%d" % random.randint(0, 16))
    str = str.replace("0_to_32", "%d" % random.randint(0, 32))
    str = str.replace("0_to_64", "%d" % random.randint(0, 64))

    str = str.replace("1_to_8", "%d" % random.randint(1, 8))
    str = str.replace("1_to_16", "%d" % random.randint(1, 16))
    str = str.replace("1_to_32", "%d" % random.randint(1, 32))
    str = str.replace("1_to_64", "%d" % random.randint(1, 64))

    str = str.replace("1_to_7", "%d" % random.randint(1, 7))
    str = str.replace("1_to_15", "%d" % random.randint(1, 15))
    str = str.replace("1_to_31", "%d" % random.randint(1, 31))
    str = str.replace("1_to_63", "%d" % random.randint(1, 63))

    str = str.replace("regV2_b16_List1", "{V%d.16b}" % REG_V_LIST_START)
    str = str.replace("regV2_b16_List2", "{V%d.16b,V%d.16b}" % (REG_V_LIST_START, REG_V_LIST_START + 1))
    str = str.replace("regV2_b16_List3",
                      "{V%d.16b,V%d.16b,V%d.16b}" % (REG_V_LIST_START, REG_V_LIST_START + 1, REG_V_LIST_START + 2))
    str = str.replace("regV2_b16_List4", "{V%d.16b,V%d.16b,V%d.16b,V%d.16b}" % (
        REG_V_LIST_START, REG_V_LIST_START + 1, REG_V_LIST_START + 2, REG_V_LIST_START + 3))

    str = str.replace("regV1", random.choice(REG_V))
    str = str.replace("regV2", random.choice(REG_V))
    str = str.replace("regV3", random.choice(REG_V))
    str = str.replace("regV4", random.choice(REG_V))
    str = str.replace("regLowerV3", random.choice(["v%d" % x for x in REG_V_NUMBERS if x < 16]))

    str = str.replace("regB1", random.choice(REG_B))
    str = str.replace("regH1", random.choice(REG_H))
    str = str.replace("regS1", random.choice(REG_S))
    str = str.replace("regD1", random.choice(REG_D))
    str = str.replace("regW1", random.choice(REG_W))
    str = str.replace("regX1", random.choice(REG_X))

    str = str.replace("regB2", random.choice(REG_B))
    str = str.replace("regH2", random.choice(REG_H))
    str = str.replace("regS2", random.choice(REG_S))
    str = str.replace("regD2", random.choice(REG_D))
    str = str.replace("regW2", random.choice(REG_W))
    str = str.replace("regX2", random.choice(REG_X))

    return str


def expand(str):
    str = expand0(str)
    return str


def generate_list(howMany):
    result = []
    while len(result) < howMany:
        template = random.choice(instructions)
        template["counter"] += 1
        exp = expand(template["inst"])
        for j in exp.split(";"):
            result.append(j.strip())
    return result


out = open(outputasmfn, "w")
out.write("""
    .section    __TEXT,__text,regular,pure_instructions

""")

names = []


def load64Imm(hexValue, targetReg):
    assert hexValue.startswith("0x")
    hexValue = hexValue[2:]
    assert len(hexValue) == 16, [hexValue]
    res = [
        "movz %s, #0x%s" % (targetReg, hexValue[12:16]),
        "movk %s, #0x%s, lsl #16" % (targetReg, hexValue[8:12]),
        "movk %s, #0x%s, lsl #32" % (targetReg, hexValue[4:8]),
        "movk %s, #0x%s, lsl #48" % (targetReg, hexValue[0:4])]
    return "\n".join(["    " + x for x in res if "#0x0000, lsl" not in x]) + "\n"


def write_function(name, lines, isSatur):
    formatching = "".join(lines).lower().replace(",", " , ").replace("{", " { ")
    formatching = formatching.strip().split(" ")
    formatching = " ".join(formatching[1:])
    formatching = " " + formatching
    vector_regs_used = sorted(list(set(map(int, re.findall("[ -][bhsdv]([0-9]+)", formatching)))))
    gp_regs_used = sorted(list(set(map(int, re.findall("[ -][wx]([0-9]+)", formatching)))))
    uses_gp = len(gp_regs_used) > 0
    names.append(name)
    out.write("""
    .globl    _a_method
    .p2align    2
_a_method:

""".replace("a_method", name))
    out.write("; Setup vector registers %s\n" % vector_regs_used)
    for reg in vector_regs_used:
        out.write(load64Imm("0x%016x" % random.randint(0, 2 ** 64 - 1), "x0"))
        out.write("    fmov    d%d,x0\n" % reg)
        out.write(load64Imm("0x%016x" % random.randint(0, 2 ** 64 - 1), "x0"))
        out.write("    fmov    v%d.d[1],x0\n" % reg)
    if uses_gp:
        out.write("; Setup GP registers %s\n" % gp_regs_used)
        for reg in gp_regs_used:
            out.write(load64Imm("0x%016x" % random.randint(0, 2 ** 64 - 1), "x%d" % reg))
    if isSatur:
        out.write("""
; Clear FPSR.QC bit
    mrs x0, FPSR
    bic x0, x0, #(1<<27)
    msr FPSR, x0
    """)

    out.write("\n")
    for line in lines:
        out.write("    " + line.strip() + "\n")
    out.write("\n")

    firstVec = vector_regs_used[0]
    for reg in vector_regs_used:
        if reg != firstVec:
            out.write("    eor V%s.16b, V%s.16b, V%d.16b\n" % (firstVec, firstVec, reg))
    out.write("""
    fmov    x0, v%d.d[1]
    fmov    x1, d%d
""" % (firstVec, firstVec))

    if uses_gp:
        firstGp = gp_regs_used[0]
        # Setup gp registers
        for reg in gp_regs_used:
            if reg != firstGp:
                out.write("    eor x%d, x%d, x%d\n" % (firstGp, firstGp, reg))
    else:
        firstGp = REG_GP_NUMBERS[0]
        out.write("    mov x%d, xzr\n" % (firstGp))

    if isSatur:
        out.write("""
; Get FPSR.QC bit into x3
    mrs x3, FPSR
    and x3, x3, #(1<<27)
    asr x3, x3, #27

""")
    else:
        out.write("    mov x3, xzr\n")

    if expected != None:
        high, low, gp, flags = expected[0]
        del expected[0]
        out.write(load64Imm(high, "x2"))
        out.write("    sub x0, x0, x2\n")
        out.write(load64Imm(low, "x2"))
        out.write("    sub x1, x1, x2\n")
        if uses_gp:
            out.write(load64Imm(gp, "x2"))
            out.write("    sub x%d, x%d, x2\n" % (firstGp, firstGp))
        else:
            assert gp == "0x0000000000000000"
        if isSatur:
            out.write(load64Imm(flags, "x2"))
            out.write("    sub x%d, x%d, x2\n" % (3, 3))
        else:
            assert flags == "0x0000000000000000"

    out.write("""
    adrp    x2, _dest_high@GOTPAGE
    ldr     x2, [x2, _dest_high@GOTPAGEOFF]
    str     x0, [x2]

    adrp    x2, _dest_low@GOTPAGE
    ldr     x2, [x2, _dest_low@GOTPAGEOFF]
    str     x1, [x2]

    adrp    x2, _dest_gp@GOTPAGE
    ldr     x2, [x2, _dest_gp@GOTPAGEOFF]
    str     x%d, [x2]

    adrp    x2, _dest_flags@GOTPAGE
    ldr     x2, [x2, _dest_flags@GOTPAGEOFF]
    str     x3, [x2]

    mov     w0, wzr
    ret
""" % firstGp)


if 1:
    for idx, inst in enumerate(instructions):
        for i in range(numvariantsperinst):
            name = "inst_%d_var_%d" % (idx, i)
            lines = [expand(inst["inst"]) + (" ; %s MARKER FOR GREP" % name)]
            write_function(name, lines, inst["satur"] != "")

    for var in range(numfunctions):
        name = "log_size_%d_var_%03d" % (logsize, var)
        lines = generate_list(2 ** logsize)
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
    out.write("extern void %s();\n" % i)
out.write("""

#include <stdio.h>
#include <assert.h>

long dest_high;
long dest_low;
long dest_gp;
long dest_flags;
""")
if expected == None:
    out.write(r"""
static void report(char *name) {
  printf("h / l / gp / flags = 0x%016lx / 0x%016lx / 0x%016lx / 0x%016lx = %15ld / %15ld / %15ld / %15ld = %15lu / %15lu / %15lu  / %15lu %s\n", 
    dest_high, dest_low, dest_gp, dest_flags,
    dest_high, dest_low, dest_gp, dest_flags,
    dest_high, dest_low, dest_gp, dest_flags,
    name);
}
""")
out.write("""
int main(int argc, char *argv[])
{
  long sum=0;
  if(argc==2) {
    puts("seed is %d");
  }
""" % seed)
for i in names:
    if expected == None:
        out.write('  %s(); report("%s");\n' % (i, i))
    else:
        out.write('  {%s(); sum+=dest_high; sum+=dest_low; sum+=dest_gp; sum+=dest_flags;}\n' % (i))
out.write("""
  assert(sum==0);
  return 0;
}
""")

if 0:
    instructions.sort(lambda x, y: cmp(y["counter"], x["counter"]))
    for i in instructions:
        print
        "numUsed=%3d inst=%s" % (i["counter"], i["inst"])
