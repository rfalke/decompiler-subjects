/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x4010b0 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = .annobin_elf_init.c;
    rdi = .text;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x4010f0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = loc._end;
    if (rax != loc._end) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = loc._end;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x401120 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = loc._end;
    rsi -= loc._end;
    rsi >>= 3;
    rax = rsi;
    rax >>= 0x3f;
    rsi += rax;
    rsi >>= 1;
    if (rsi != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = loc._end;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x401160 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.7287) == 0) {
        deregister_tm_clones ();
        *(obj.completed.7287) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x401190 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x402e00 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x402e08 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x40146b */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
#define SWAP64(val) ((uint64_t) (((val & 0x00000000000000ffull) << 56) | \
                                 ((val & 0x000000000000ff00ull) << 40) | \
                                 ((val & 0x0000000000ff0000ull) << 24) | \
                                 ((val & 0x00000000ff000000ull) <<  8) | \
                                 ((val & 0x000000ff00000000ull) >>  8) | \
                                 ((val & 0x0000ff0000000000ull) >> 24) | \
                                 ((val & 0x00ff000000000000ull) >> 40) | \
                                 ((val & 0xff00000000000000ull) >> 56)))
 
int64_t log_size_7_var_001 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x32eff12b6a4c085a;
    rbx = 0xf1bc244fdfba4113;
    rcx = 0x70a0f3c4e0fecb2e;
    rdx = 0x7c04d6d66f419567;
    rsi = 0xfd679f628af570a5;
    rdi = 0x902528db3a769171;
    r8 = 0x50f0a814a31c9189;
    r9 = 0xbfcc61c0ab2f4f4e;
    r10 = 0x65b2374c894150ab;
    r11 = 0xf4a83abcf2a32b46;
    r12 = 0xfc452343998c754b;
    r13 = 0x8b3f4698e5dae8dd;
    r14 = 0x29afd6901a97ef14;
    r15 = 0xe0880b64265c77ce;
    __asm ("btc edi, 0xd5");
    __asm ("shrd r13w, di, 2");
    r10w += 0x21dd;
    edx:eax = eax * r11d;
    r8 = 0xc000000000000000;
    r11 |= r8;
    r8 = 0x3fffffffffffffff;
    rdx &= r8;
    rax = rdx:rax / r11;
    rdx = rdx:rax % r11;
    r9d++;
    __asm ("btr r8d, 0xaf");
    ax = al * ah;
    eax >>= cl;
    r11b ^= 0x40;
    bh = rotate_left8 (bh, cl);
    rbp = (int64_t) r13d;
    r9w = edi - 0x11ebdf90;
    r8b = -r8b;
    __asm ("lahf");
    if (eax <= 0) {
        ebx = edi;
    }
    __asm ("stc");
    r8 += r10;
    r11b = (r8 < 0) ? 1 : 0;
    if (r8 >= 0) {
        rdx = r11;
    }
    si = rotate_right16 (si, 1);
    cl |= ch;
    di >>= cl;
    rsi = (int64_t) esi;
    r10d -= 0x9598f679;
    __asm ("stc");
    bl += sil;
    __asm ("stc");
    dil -= sil;
    __asm ("stc");
    bp = rotate_right16 (bp, 1);
    bp <<= 1;
    __asm ("stc");
    ebx -= ebp;
    r8w = rotate_left16 (r8w, 1);
    r15w++;
    r12w = 0x7eff;
    al++;
    r15b = (al == 0) ? 1 : 0;
    __asm ("stc");
    r12d -= esi;
    rbx = rotate_left64 (rbx, cl);
    rbx -= 0xffffffffc34dd8ac;
    if (rbx >= 0) {
        cx = ax;
    }
    __asm ("xadd r14, rbx");
    r14w = rotate_right16 (r14w, 1);
    rax = rdx;
    r9 = rotate_right64 (r9, cl);
    r9 &= 0x336f7770;
    rsi = (int64_t) si;
    r8w >>= 0xab;
    __asm ("shrd rbx, rsi, 0x94");
    cx = rotate_left16 (cx, cl);
    r11 = rotate_right64 (r11, 0xc);
    __asm ("btr bp, r12w");
    r12d &= 0xa5219962;
    if (r12d == 0) {
    }
    if (r12d <= 0) {
        rcx = r11;
    }
    r12d = eax * 0xbbdbc36f;
    ax += r15w;
    esi >>= cl;
    r14 = rcx * 0xffffffffe59a5211;
    r10b = rotate_left64 (r10b, 1);
    ch += dl;
    bx ^= r10w;
    di -= cx;
    __asm ("cmpxchg bp, di");
    eax = -eax;
    r15w >>= 1;
    if (r15w >= 0) {
        rdi = rax;
    }
    r12b++;
    r8b <<= 0x5d;
    di += 0x8d8e;
    bx = rotate_right16 (bx, cl);
    r9d |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / r9d;
    edx = edx:eax % r9d;
    __asm ("btc r10d, r12d");
    bl = (edx < 0) ? 1 : 0;
    __asm ("shld ebp, r9d, 0xd9");
    __asm ("shrd rbx, rcx, 0xa5");
    r14w -= 0x9c97;
    r11d = rsi + r9*2;
    r9d = 0xd1664099;
    __asm ("stc");
    r12b += 0x4c;
    if (r12b >= 0) {
        r14w = bx;
    }
    r10d >>= 1;
    if ((r11w & ax) < 0) {
        r9d = ebx;
    }
    r14b = rotate_left64 (r14b, 1);
    ax--;
    __asm ("cmovo ebx, esi");
    eax = (int32_t) ax;
    __asm ("clc");
    r13w = rotate_right16 (r13w, 1);
    r12d = rotate_left32 (r12d, cl);
    dx:ax = ax * cx;
    r8w = rotate_right16 (r8w, 1);
    r12b += r12b;
    __asm ("xadd r8b, al");
    al |= 0xc0;
    ax &= 0x3fff;
    al = ax / al;
    ah = ax % al;
    r12b |= r10b;
    __asm ("shrd r14d, r14d, 1");
    __asm ("cmovns bp, bx");
    bl = rotate_right8 (bl, 0xc4);
    r12w = rotate_left16 (r12w, 0x32);
    rsi = SWAP64 (rsi);
    r13w = rotate_right16 (r13w, 1);
    __asm ("stc");
    rbx -= 0xffffffffa9f943d8;
    if (rbx < 0) {
        rbx = rax;
    }
    __asm ("stc");
    bp -= 0xedc1;
    rdi >>= 0x4a;
    r13 ^= rdx;
    __asm ("btr r10, 0xb");
    rax += rbx;
    rax += rcx;
    rax += rdx;
    rax += rbp;
    rax += rsi;
    rax += rdi;
    rax += r8;
    rax += r9;
    rax += r10;
    rax += r11;
    rax += r12;
    rax += r13;
    rax += r14;
    rax += r15;
    rbx = 0x421a7d13ef19875b;
    rax -= rbx;
    r14 = r15;
    r13 = r15;
    r12 = r15;
    r11 = r15;
    r10 = r15;
    r9 = r15;
    r8 = r15;
    rdi = r15;
    rsi = r15;
    rcx = r15;
    rbx = r15;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x401a12 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_7_var_003 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x11db4a87b62a009f;
    rbx = 0x4c50b66cdfa857b1;
    rcx = 0x5f9e745aced7ee0b;
    rdx = 0x975b16b095c7e2a0;
    rsi = 0xe0071bdbb0f47740;
    rdi = 0xeca4e000c3aeafac;
    r8 = 0x6cc99e8e0c59d515;
    r9 = 0xc053746a40f90f46;
    r10 = 0xae1f4052f711444c;
    r11 = 0x50e2b48cd32d3e81;
    r12 = 0x9a8c3b7e4c7bb33a;
    r13 = 0x12db7dfc0a92c054;
    r14 = 0xb8cbb0192dcda24e;
    r15 = 0x728ed4d37e6c3df3;
    __asm ("btr r13, rsi");
    __asm ("shrd rbp, rax, 0x63");
    r15b = ~r15b;
    r8b--;
    ebx = (int32_t) r8b;
    __asm ("cmpxchg r11d, edx");
    r12 *= 0xffffffffe368624a;
    __asm ("clc");
    rcx += 0x2fc2a16c;
    __asm ("clc");
    rsi += 0x35cb9fdc;
    r12--;
    tmp_0 = r12d;
    r12d = r14d;
    r14d = tmp_0;
    ebp ^= 0x8df43423;
    rax <<= 0xc4;
    rdx += r15;
    r10d = rotate_right32 (r10d, 1);
    cl = al;
    r8d >>= 1;
    al = r10b;
    ch -= 0x6e;
    ah = rotate_left8 (ah, cl);
    dx = rotate_left16 (dx, 0xbe);
    esi = rotate_left32 (esi, cl);
    __asm ("cwd");
    r13d = SWAP32 (r13d);
    __asm ("bts r11, rdi");
    r11w |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / r11w;
    dx = dx:ax % r11w;
    tmp_1 = rax;
    rax = r14;
    r14 = tmp_1;
    __asm ("shld rdx, r14, 1");
    r11w = rotate_right16 (r11w, 0xfb);
    cx = rotate_left16 (cx, cl);
    tmp_2 = rdx;
    rdx = r13;
    r13 = tmp_2;
    __asm ("clc");
    ch = rotate_left8 (ch, 1);
    r14 = rotate_right64 (r14, cl);
    si = r15w;
    rdx:rax = rax * r12b;
    __asm ("btc si, 0xf7");
    __asm ("shld r15, rdi, 0x2c");
    __asm ("shrd r9w, r13w, 1");
    r14d = 0xd3a8d0e1;
    dx >>= cl;
    al = ~al;
    rbp >>= 0x2a;
    __asm ("xadd r12d, r13d");
    r12 = rotate_left64 (r12, 1);
    bx += 0x7b72;
    r8w ^= 0xab68;
    __asm ("stc");
    ch += ch;
    rbp = (int64_t) ebx;
    ecx = rotate_left32 (ecx, 1);
    __asm ("stc");
    r9d += 0x65641dd2;
    di = rotate_left16 (di, cl);
    ax -= 0xa7c;
    r15d <<= 0x98;
    bl &= 0x6a;
    __asm ("btr r12d, 0xc2");
    __asm ("shld rsi, rsi, 0xb2");
    di = (int16_t) r8b;
    tmp_3 = bl;
    bl = ch;
    ch = tmp_3;
    if (dl < dh) {
        r10w = si;
    }
    r11d >>= cl;
    tmp_4 = dh;
    dh = ah;
    ah = tmp_4;
    ah -= 0x17;
    si >>= cl;
    r9w += 0xbc06;
    r13d -= 0x99ac92d9;
    __asm ("clc");
    dh = rotate_left8 (dh, 1);
    __asm ("clc");
    bh = rotate_right8 (bh, 1);
    edx:eax = eax * edi;
    r9w -= 0xd72b;
    ebx = (int32_t) dh;
    edi = ~edi;
    r8b <<= 0xcb;
    esi = (int32_t) bl;
    si += dx;
    ecx -= ebx;
    __asm ("bts cx, bp");
    r10d += 0x87cf1267;
    esi = -esi;
    __asm ("cmpxchg bl, cl");
    r10b = r13b;
    rcx = rotate_right64 (rcx, cl);
    __asm ("stc");
    rbp = rotate_left64 (rbp, 1);
    r11w = r8d + 0x3b7fbcb5;
    bx >>= cl;
    __asm ("btr r12d, edi");
    rcx ^= 0x2912467d;
    rbx = -rbx;
    dl -= r15b;
    bl |= 0xf2;
    __asm ("cmovs r9, r14");
    cl = (bl != 0) ? 1 : 0;
    bl -= 0xd;
    r8w |= ax;
    edx:eax = eax * eax;
    cl ^= bpl;
    ch = rotate_right8 (ch, cl);
    r12 <<= cl;
    di = (int16_t) bl;
    cx--;
    r14d = (int32_t) r8b;
    __asm ("btr ebx, ebp");
    bp = ~bp;
    __asm ("clc");
    r9 = rotate_left64 (r9, 1);
    __asm ("bsr cx, bx");
    r9d = edx;
    r12b = rotate_left64 (r12b, cl);
    r12 = (int64_t) bl;
    r15d *= 0xc5aa7533;
    ah = rotate_left8 (ah, 1);
    rax += rbx;
    rax += rcx;
    rax += rdx;
    rax += rbp;
    rax += rsi;
    rax += rdi;
    rax += r8;
    rax += r9;
    rax += r10;
    rax += r11;
    rax += r12;
    rax += r13;
    rax += r14;
    rax += r15;
    rbx = 0x7e9a80f2eb9315c;
    rax -= rbx;
    r14 = r15;
    r13 = r15;
    r12 = r15;
    r11 = r15;
    r10 = r15;
    r9 = r15;
    r8 = r15;
    rdi = r15;
    rsi = r15;
    rcx = r15;
    rbx = r15;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x402ab8 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
#define SWAP64(val) ((uint64_t) (((val & 0x00000000000000ffull) << 56) | \
                                 ((val & 0x000000000000ff00ull) << 40) | \
                                 ((val & 0x0000000000ff0000ull) << 24) | \
                                 ((val & 0x00000000ff000000ull) <<  8) | \
                                 ((val & 0x000000ff00000000ull) >>  8) | \
                                 ((val & 0x0000ff0000000000ull) >> 24) | \
                                 ((val & 0x00ff000000000000ull) >> 40) | \
                                 ((val & 0xff00000000000000ull) >> 56)))
 
int64_t log_size_7_var_009 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x826ea9c85d9384ee;
    rbx = 0xf04974320d871fb4;
    rcx = 0x63c232641a96c41c;
    rdx = 0x4aa373170f760cf;
    rsi = 0x3a7d8c8670009d0e;
    rdi = 0x64af6a6fc03e9a7;
    r8 = 0xf266a5ec07293fcb;
    r9 = 0xaa63fce6d5825674;
    r10 = 0x55df6b67f7b9e0c2;
    r11 = 0x834ce90c56285f6a;
    r12 = 0xca2468cd6df63ab0;
    r13 = 0x4a5ddec788fe9b8d;
    r14 = 0x75e42556afda219b;
    r15 = 0xce920700fc2712f1;
    r11d = (int32_t) dl;
    r14b >>= 0xe7;
    r8w &= 0x82d8;
    __asm ("clc");
    si -= di;
    r14w = (int16_t) bpl;
    __asm ("stc");
    r14b -= 0x4a;
    __asm ("stc");
    si += 0x3e08;
    __asm ("btr r13, r14");
    r8 = 0xc000000000000000;
    r15 |= r8;
    r8 = 0x3fffffffffffffff;
    rdx &= r8;
    rax = rdx:rax / r15;
    rdx = rdx:rax % r15;
    if ((r8w & 0x300f) >= 0) {
        rbx = r10;
    }
    rbx <<= cl;
    cl &= 0xf;
    __asm ("shrd si, bx, cl");
    bh += al;
    ah = (bh >= 0) ? 1 : 0;
    rsi &= 0xffffffff8ca848a2;
    __asm ("cwd");
    dh += 0x93;
    ch >>= cl;
    r11b = rotate_left64 (r11b, cl);
    __asm ("shrd r15d, ebx, cl");
    __asm ("bts r13d, 0xb7");
    tmp_0 = rsi;
    rsi = r13;
    r13 = tmp_0;
    edi = rotate_right32 (edi, 1);
    r12 *= 0xffffffffd5bcb6a7;
    __asm ("stc");
    ch -= bl;
    __asm ("cmovp dx, r10w");
    if (ch < cl) {
        dx = r14w;
    }
    r13d = (int32_t) bpl;
    r11w = rotate_right16 (r11w, 1);
    r15d -= 0xbdb0bb72;
    r15w &= 0x2e7b;
    __asm ("clc");
    rcx += r13;
    ecx = (int32_t) bl;
    if ((r14d & r13d) == 0) {
        eax = r15d;
    }
    ebp -= 0xa1cb8ab4;
    ebx = rotate_left32 (ebx, cl);
    bh += ch;
    ax = rotate_right16 (ax, cl);
    __asm ("btc si, 0xb1");
    edx = r12d * 0x805d7366;
    rcx = rotate_right64 (rcx, 1);
    cl &= 0xf;
    __asm ("shld bx, bp, cl");
    r15 = rotate_right64 (r15, 1);
    bx = rotate_left16 (bx, cl);
    r15d = rotate_left32 (r15d, 1);
    __asm ("clc");
    r10b -= r12b;
    r9d = r10d * 0x671a931c;
    __asm ("shld r14, rsi, cl");
    bl = rotate_right8 (bl, 1);
    rax = (int64_t) r12w;
    r13 = rotate_right64 (r13, cl);
    r12 = SWAP64 (r12);
    edx:eax = eax * eax;
    ebp = ~ebp;
    r9b >>= 1;
    eax = (int32_t) ax;
    __asm ("stc");
    eax += r14d;
    eax ^= 0xcb61ba;
    ebx |= 0xb3cded8a;
    __asm ("xadd esi, r15d");
    __asm ("cmovnp r13, rcx");
    r10 = -r10;
    __asm ("clc");
    r10b += r15b;
    __asm ("shrd r11d, r15d, 0xe5");
    __asm ("shld r9d, r15d, cl");
    __asm ("cwd");
    al += al;
    __asm ("stc");
    r13d += 0x351c7aa5;
    edx -= esi;
    r15d = (int32_t) al;
    __asm ("shld r10d, r9d, cl");
    esi = ~esi;
    edx:eax = (int64_t) eax;
    dx:ax = ax * si;
    r10 = rbx + rbp*8 + 0x55;
    r9d += 0x5152cf49;
    r12d = rotate_left32 (r12d, 0xe1);
    cx++;
    rdi = (int64_t) dl;
    r15w = rotate_right16 (r15w, 1);
    rdx += r11;
    __asm ("setns sil");
    if (rdx >= 0) {
        eax = r11d;
    }
    __asm ("cmovs eax, r8d");
    __asm ("shld r12, rbp, cl");
    tmp_1 = r13;
    r13 = rdx;
    rdx = tmp_1;
    __asm ("clc");
    rax >>= 1;
    __asm ("stc");
    rdi -= 0x438adb9c;
    r8d = 0xd99df28d;
    ax >>= cl;
    __asm ("shrd di, si, 1");
    r12w -= r10w;
    __asm ("bsf r10, rax");
    edx:eax = (int64_t) eax;
    r12w = rotate_left16 (r12w, cl);
    dh &= 0xed;
    al = ((r13w & r8w) >= 0) ? 1 : 0;
    __asm ("stc");
    edx -= 0x3fbe4bd8;
    rax += rbx;
    rax += rcx;
    rax += rdx;
    rax += rbp;
    rax += rsi;
    rax += rdi;
    rax += r8;
    rax += r9;
    rax += r10;
    rax += r11;
    rax += r12;
    rax += r13;
    rax += r14;
    rax += r15;
    rbx = 0x75e4255c5e517f21;
    rax -= rbx;
    r14 = r15;
    r13 = r15;
    r12 = r15;
    r11 = r15;
    r10 = r15;
    r9 = r15;
    r8 = r15;
    rdi = r15;
    rsi = r15;
    rcx = r15;
    rbx = r15;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x402524 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_7_var_007 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xdd8ef55cd6e3e3d1;
    rbx = 0xf974075b59b87139;
    rcx = 0x65392657bad7fdc8;
    rdx = 0xa36ac5e0b2a59a21;
    rsi = 0x4912aca8fef647c9;
    rdi = 0xece25e889d8a3b72;
    r8 = 0x3ef0b44826191be0;
    r9 = 0xa0cef136d121b358;
    r10 = 0xc7227f3105e6494d;
    r11 = 0xb83aa94c034e7845;
    r12 = 0x1226daad5ac8b2bc;
    r13 = 0x4a06b06d7deefcab;
    r14 = 0x61c3392959312ff8;
    r15 = 0x94150429a144235c;
    r15 &= r15;
    __asm ("stc");
    cl += al;
    r15w ^= r14w;
    __asm ("stc");
    r9b = rotate_left64 (r9b, 1);
    __asm ("shrd r14w, cx, 1");
    ecx = r13d;
    r11 *= 0xffffffffcadff720;
    r10d = rotate_right32 (r10d, cl);
    r15d = rotate_right32 (r15d, cl);
    __asm ("cmpxchg r9, r11");
    __asm ("clc");
    rbp += r8;
    if (rbp >= 0) {
        r9w = cx;
    }
    __asm ("clc");
    r10w -= 0x5ba;
    bh |= bh;
    bx >>= cl;
    dil |= sil;
    __asm ("shrd r8, rsi, 1");
    cl &= 0xf;
    __asm ("shld ax, cx, cl");
    __asm ("xadd dx, bx");
    __asm ("shld di, r8w, 1");
    r11 = rotate_right64 (r11, 1);
    r14 = rotate_left64 (r14, cl);
    r8 = rbp + r8 + 0x2614569f;
    r10w >>= cl;
    __asm ("shrd r9, rsi, cl");
    __asm ("shld r15, r9, 1");
    esi |= esi;
    __asm ("clc");
    r14w += r12w;
    dx:ax = ax * dx;
    r14w = rotate_right16 (r14w, 0xe6);
    r10 |= rdx;
    tmp_0 = bl;
    bl = al;
    al = tmp_0;
    __asm ("shrd rcx, r12, cl");
    r8w >>= 1;
    rax = (int64_t) eax;
    rax |= 0xffffffff8e4d0d5d;
    bl |= al;
    cx = rotate_right16 (cx, 1);
    __asm ("shld r12w, cx, 0xc");
    ch >>= 1;
    rcx = rotate_right64 (rcx, cl);
    dil &= r14b;
    bl = dl;
    dil = rotate_right8 (dil, 1);
    __asm ("bts di, 0x21");
    dx -= dx;
    __asm ("btr r8w, cx");
    ecx = r8d;
    __asm ("cmc");
    if (dx >= 0) {
    }
    edx = -edx;
    __asm ("cmpxchg cl, cl");
    if (dx >= 0) {
        edx = edi;
    }
    ch <<= cl;
    r10w -= r11w;
    r13b -= al;
    if (r13b < 0) {
        r14d = r12d;
    }
    r10b = rotate_right64 (r10b, 0x61);
    __asm ("shld r15, rdx, cl");
    r15 |= r9;
    cx &= cx;
    dl ^= al;
    __asm ("btr r14, 0xcb");
    __asm ("clc");
    r15d -= r10d;
    edx = rotate_right32 (edx, cl);
    ebx >>= 1;
    rsi = -rsi;
    rbx++;
    __asm ("clc");
    dil += r9b;
    r8w -= di;
    __asm ("cmpxchg cl, cl");
    if (r8w < 0) {
        r14d = ebx;
    }
    r8b &= r12b;
    rax >>= 0x65;
    __asm ("btr eax, r12d");
    bp = rotate_left16 (bp, 1);
    dx:ax = ax * r9w;
    __asm ("btr r8d, 0x91");
    __asm ("shrd r14, r12, 1");
    __asm ("bsr r10w, si");
    r14d <<= 0x50;
    r10w -= 0xd8f;
    __asm ("btr r9d, 0xc4");
    bl >>= 0x78;
    edx:eax = eax * r10d;
    __asm ("cmovo r10w, r8w");
    __asm ("stc");
    r10d += esi;
    __asm ("shld r10d, ebp, 0xbd");
    __asm ("btc ebp, r8d");
    ecx = (int32_t) dl;
    __asm ("clc");
    rax -= r8;
    __asm ("stc");
    r8w += dx;
    ecx -= 0x65e1a1bf;
    r10w++;
    __asm ("shld r11, r9, 1");
    rbx = edi + esi + 0xb5;
    __asm ("shrd r9d, ebx, cl");
    bx -= 0xf09f;
    r15w = ~r15w;
    if (bx < 0) {
        ebx = edx;
    }
    __asm ("btc di, r14w");
    __asm ("clc");
    cl -= 0x22;
    ax = (int16_t) al;
    ecx = rotate_left32 (ecx, 0x87);
    __asm ("xadd r9b, r12b");
    __asm ("cmovns r10w, r10w");
    edx = (int32_t) r11w;
    dx:ax = ax * r8w;
    __asm ("shld r9w, di, 0xa");
    rax += rbx;
    rax += rcx;
    rax += rdx;
    rax += rbp;
    rax += rsi;
    rax += rdi;
    rax += r8;
    rax += r9;
    rax += r10;
    rax += r11;
    rax += r12;
    rax += r13;
    rax += r14;
    rax += r15;
    rbx = 0x5a41be5174259b33;
    rax -= rbx;
    r14 = r15;
    r13 = r15;
    r12 = r15;
    r11 = r15;
    r10 = r15;
    r9 = r15;
    r8 = r15;
    rdi = r15;
    rsi = r15;
    rcx = r15;
    rbx = r15;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x401f97 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_7_var_005 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xbd62ac0396eea82b;
    rbx = 0xe4279a2b6b852a4a;
    rcx = 0xed445c05fc3b3ce5;
    rdx = 0xebf2ac2c32df30bf;
    rsi = 0x2e5cb0439bf72f40;
    rdi = 0xcb2a9444f5f0a957;
    r8 = 0x48fa0fffb085a9ca;
    r9 = 0xe92c6cd1e8020738;
    r10 = 0x2f2d6e589b414e85;
    r11 = 0x69b0b67106cf5eb3;
    r12 = 0xf168c8af45f1e00d;
    r13 = 0x36f34dd94205abcd;
    r14 = 0xc1bd8bcbe5a983b;
    r15 = 0x281f49a15450bc86;
    __asm ("bts rbx, 0x45");
    dh &= dh;
    __asm ("cmovns di, dx");
    __asm ("bsf r11w, dx");
    cl >>= 1;
    ch += dl;
    r11d++;
    __asm ("shrd r11w, bp, 1");
    bh += ch;
    __asm ("bsr ecx, ecx");
    r15d = rotate_left32 (r15d, 1);
    __asm ("stc");
    r13 += r15;
    __asm ("shld r12, rdx, 0xee");
    rsi = (int64_t) r9w;
    edi = rotate_right32 (edi, 1);
    __asm ("cmovo r14, r11");
    r12b <<= cl;
    __asm ("btc r13d, 0x62");
    eax = (int32_t) bh;
    __asm ("clc");
    dx += cx;
    ah -= 0xb3;
    rdx:rax = rax * r10;
    __asm ("shld rax, r12, cl");
    r13w = 0xc6f4;
    dx <<= 1;
    __asm ("seto al");
    bx = (int16_t) al;
    r13w = di * 0x263c;
    r12 >>= 0x70;
    al &= r14b;
    ecx = SWAP32 (ecx);
    r15b -= r13b;
    ebx = rotate_left32 (ebx, cl);
    edx = rotate_right32 (edx, cl);
    r14d ^= r8d;
    dl -= al;
    __asm ("bts rax, 0x1f");
    r13d = rotate_left32 (r13d, cl);
    r8b <<= 0x94;
    bh |= 0xc0;
    ax &= 0x3fff;
    al = ax / bh;
    ah = ax % bh;
    __asm ("btr r9w, 0x8f");
    ax -= r10w;
    ax = (int16_t) al;
    r12d = r15d + ebp*8;
    r8d -= 0x3f8beb8e;
    al = (r8d >= 0) ? 1 : 0;
    rbp = (int64_t) r11d;
    dl ^= cl;
    r9 = (int64_t) al;
    r8d *= 0x1016e26e;
    __asm ("stc");
    r13 -= 0xffffffff986008fa;
    r11 += rcx;
    __asm ("sahf");
    __asm ("stc");
    r9 -= 0x7acc1f22;
    bx = rotate_left16 (bx, cl);
    bl <<= 0xec;
    dil = -dil;
    __asm ("cmpxchg al, ch");
    __asm ("clc");
    r8 += rcx;
    dx:ax = ax * r11w;
    __asm ("cmovno cx, r13w");
    __asm ("stc");
    r8w += dx;
    r10 = (int64_t) r11b;
    r12w |= 0x4ef2;
    if (r12w >= 0) {
        eax = r13d;
    }
    cl |= 0xc0;
    ax &= 0x3fff;
    al = ax / cl;
    ah = ax % cl;
    rdx = 0x8ce5fc6983495974;
    rcx = -rcx;
    r14w = r11w * 0x5406;
    __asm ("stc");
    r8 += r15;
    rcx -= 0xffffffffa5347351;
    __asm ("clc");
    r14w = rotate_left16 (r14w, 1);
    edx:eax = eax * esi;
    edx:eax = eax * eax;
    ch -= dl;
    esi = (int32_t) bp;
    __asm ("clc");
    rax -= r15;
    __asm ("stc");
    bp -= r9w;
    __asm ("cmovnp ebp, r10d");
    __asm ("shld r9, r14, 1");
    si = rotate_right16 (si, 0xa4);
    esi = (int32_t) si;
    ebx = (int32_t) al;
    dx = (int16_t) dl;
    dil >>= 1;
    r10b >>= cl;
    dl <<= 1;
    bx = rotate_left16 (bx, cl);
    r13w >>= cl;
    __asm ("xadd dh, ch");
    bx -= 0xf4a8;
    __asm ("stc");
    r11d = rotate_right32 (r11d, 1);
    __asm ("stc");
    r9w = rotate_right16 (r9w, 1);
    ebx &= edx;
    bx = rotate_right16 (bx, cl);
    bh = ~bh;
    r8b += 0x32;
    r9 -= rbp;
    r15b = (r9 < 0) ? 1 : 0;
    if (r9 >= 0) {
        r15 = rbp;
    }
    dl += 0x5e;
    tmp_0 = dl;
    dl = al;
    al = tmp_0;
    bx ^= 0xe331;
    rax += rbx;
    rax += rcx;
    rax += rdx;
    rax += rbp;
    rax += rsi;
    rax += rdi;
    rax += r8;
    rax += r9;
    rax += r10;
    rax += r11;
    rax += r12;
    rax += r13;
    rax += r14;
    rax += r15;
    rbx = 0x4e50a8ed9;
    rax -= rbx;
    r14 = r15;
    r13 = r15;
    r12 = r15;
    r11 = r15;
    r10 = r15;
    r9 = r15;
    r8 = r15;
    rdi = r15;
    rsi = r15;
    rcx = r15;
    rbx = r15;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x402d90 */
#include <stdint.h>
 
uint64_t loc_annobin_elf_init_c (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15 = rdx;
    r14 = rsi;
    r13d = edi;
    r12 = obj___frame_dummy_init_array_entry;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    rbp -= r12;
    rax = _init ();
    rbp >>= 3;
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r15;
        rsi = r14;
        edi = r13d;
        uint64_t (*r12 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x4010e0 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x401040 */
#include <stdint.h>
 
int32_t main (int64_t arg5, int64_t arg4, char ** envp, char ** argv, int32_t argc) {
    r8 = arg5;
    rcx = arg4;
    rdx = envp;
    rsi = argv;
    rdi = argc;
    /* [13] -r-x section size 7621 named .text */
    rax = log_size_7_var_000 ();
    rbx = rax;
    rax = log_size_7_var_001 ();
    rbx += rax;
    rax = log_size_7_var_002 ();
    rbx += rax;
    rax = log_size_7_var_003 ();
    rbx += rax;
    rax = log_size_7_var_004 ();
    rbx += rax;
    rax = log_size_7_var_005 ();
    rbx += rax;
    rax = log_size_7_var_006 ();
    rbx += rax;
    rax = log_size_7_var_007 ();
    rbx += rax;
    rax = log_size_7_var_008 ();
    rbx += rax;
    rax = log_size_7_var_009 ();
    rbx += rax;
    if (rbx == 0) {
        eax = 0;
        return rax;
    }
    return assert_fail ("sum==0", "source_complex_with_base_10_funcs_of_size_128.c", 0x1f, "main");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x401196 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_7_var_000 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x1b388a415ac4f2d5;
    rbx = 0x96417bd5fd865c05;
    rcx = 0x23856a4e9d270a3a;
    rdx = 0x900e02c3908089ef;
    rsi = 0x702ba42011898690;
    rdi = 0x375db4cccb1ffd45;
    r8 = 0x27f3423ade127613;
    r9 = 0x960d87bdede22b89;
    r10 = 0xee62f8fb1636ad64;
    r11 = 0x729c58b9a0e71d99;
    r12 = 0x374496dc950242bd;
    r13 = 0x2a8db6f624626c62;
    r14 = 0xce877bd21745190a;
    r15 = 0x3809ddc6059d31cd;
    rcx--;
    __asm ("shrd r10, r13, 1");
    ebp = rotate_right32 (ebp, 0xa8);
    ebp = (int32_t) si;
    dx &= 0x5d19;
    di = ebx + edx*8 + 0x38;
    di >>= 1;
    __asm ("cmpxchg r8d, ecx");
    r12w >>= 0x13;
    rcx ^= r9;
    __asm ("clc");
    r9 = rotate_left64 (r9, 1);
    __asm ("clc");
    ax -= r8w;
    r10w = (int16_t) r13b;
    ah = rotate_left8 (ah, 1);
    if (((r14d >> 0x6c) & 1) >= 0) {
        r8d = edi;
    }
    __asm ("xadd r14w, r13w");
    __asm ("clc");
    ecx -= ebp;
    r8d = (int32_t) cl;
    r15 = rotate_left64 (r15, cl);
    r14d <<= cl;
    __asm ("cmpxchg r12, r9");
    __asm ("stc");
    rbx += 0x1fdfd03f;
    r10w = rotate_right16 (r10w, 0x42);
    si = rotate_right16 (si, 0xe4);
    eax = rotate_left32 (eax, 1);
    r12d >>= 0xfe;
    r14d |= 0x62374692;
    esi = SWAP32 (esi);
    r14b -= r10b;
    r13b = cl;
    si = rotate_right16 (si, cl);
    r9d = r13d;
    __asm ("btc r9w, 0x3c");
    r10w <<= 0x47;
    __asm ("shld rax, r9, cl");
    ax = rotate_left16 (ax, 1);
    tmp_0 = ax;
    ax = r13w;
    r13w = tmp_0;
    ebx = rotate_right32 (ebx, cl);
    __asm ("bsf r12w, dx");
    r15 = -r15;
    ebp = rotate_right32 (ebp, 1);
    r13d |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / r13d;
    edx = edx:eax % r13d;
    rdi = -rdi;
    rdx -= 0x189e6cfc;
    r14d++;
    __asm ("xadd ebx, ebx");
    r15d |= esi;
    __asm ("clc");
    cl -= ah;
    edx:eax = eax * ebx;
    r13d -= r14d;
    rdi <<= cl;
    __asm ("shrd r9, r11, 0x97");
    __asm ("xadd dil, al");
    r14d = rotate_right32 (r14d, cl);
    __asm ("btr bx, r12w");
    __asm ("shld di, r10w, 1");
    r8 = 0x14345f14dee7ebe2;
    r9 >>= 0x10;
    rbp <<= 0xeb;
    r14b = ~r14b;
    r10d = rotate_right32 (r10d, cl);
    eax = (int32_t) ax;
    r9w = 0xb701;
    __asm ("shld r9d, ebp, 1");
    __asm ("cmovp rbx, r11");
    cl = rotate_left8 (cl, cl);
    r8d = rdx + rcx*4 + 0x28;
    ch &= cl;
    dl >>= 0xdd;
    r8w = -r8w;
    if (dl < 0) {
        r14d = edx;
    }
    if (dl > 0) {
        ecx = r9d;
    }
    __asm ("clc");
    cl += 0xa2;
    ah = (cl == 0) ? 1 : 0;
    dx:ax = ax * r9w;
    r9d = rotate_right32 (r9d, cl);
    ax = al * bl;
    __asm ("cmovo rdi, r15");
    rdi ^= r10;
    rcx -= 0xffffffffcfe2202f;
    ah &= bh;
    al |= bl;
    __asm ("setnp dl");
    bpl &= al;
    r8w = si;
    if (bpl > 0) {
        r13d = eax;
    }
    edx = rotate_right32 (edx, 0x41);
    cl &= 0xf;
    __asm ("shrd dx, r15w, cl");
    r8b = 0x1b;
    rdi >>= 0xfd;
    if (al < bl) {
        r8w = r12w;
    }
    dx:ax = ax * r13w;
    edx <<= 0x4c;
    r14b |= 0xc1;
    ax = (int16_t) al;
    r8 = 0xc000000000000000;
    r11 |= r8;
    r8 = 0x3fffffffffffffff;
    rdx &= r8;
    rax = rdx:rax / r11;
    rdx = rdx:rax % r11;
    r10d ^= 0x6b775405;
    r14 >>= 0x24;
    __asm ("shld r11d, eax, 0x95");
    si = rotate_left16 (si, 1);
    r9b = r11b;
    ax &= 0x9b0e;
    __asm ("stc");
    r12d += 0x586a8153;
    r10 >>= 1;
    r10 = (int64_t) r11d;
    rax += rbx;
    rax += rcx;
    rax += rdx;
    rax += rbp;
    rax += rsi;
    rax += rdi;
    rax += r8;
    rax += r9;
    rax += r10;
    rax += r11;
    rax += r12;
    rax += r13;
    rax += r14;
    rax += r15;
    rbx = 0x20f04e1f894437a;
    rax -= rbx;
    r14 = r15;
    r13 = r15;
    r12 = r15;
    r11 = r15;
    r10 = r15;
    r9 = r15;
    r8 = r15;
    rdi = r15;
    rsi = r15;
    rcx = r15;
    rbx = r15;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x401740 */
#include <stdint.h>
 
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_7_var_002 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x595ebc08b87c2fcb;
    rbx = 0x45dfaf240b7ede31;
    rcx = 0x8da8492c704b0937;
    rdx = 0x4289882b67ec4310;
    rsi = 0x7ac2a1fe9b5a945d;
    rdi = 0x725c644ae1a2391f;
    r8 = 0xc60bdfd60b9c1d1e;
    r9 = 0x96fddc04566b5e51;
    r10 = 0x4651582a26653d54;
    r11 = 0x17d23cabafe69c16;
    r12 = 0xf01244fd5dc40b6d;
    r13 = 0x9fe0f05bfefd5a19;
    r14 = 0x42df0f549b077da6;
    r15 = 0xb1d207537aa6ad05;
    di |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / di;
    dx = dx:ax % di;
    edi |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / edi;
    edx = edx:eax % edi;
    bh -= al;
    si += r8w;
    __asm ("stc");
    rbp = rotate_right64 (rbp, 1);
    r14b -= 0x67;
    __asm ("stc");
    bpl -= 0x18;
    __asm ("bts bp, r15w");
    __asm ("clc");
    r10d = rotate_left32 (r10d, 1);
    di = (int16_t) bl;
    __asm ("clc");
    cx += bp;
    r13d ^= r15d;
    cl >>= cl;
    r11d = (int32_t) si;
    r11w = (int16_t) al;
    tmp_0 = bl;
    bl = al;
    al = tmp_0;
    __asm ("clc");
    edx -= 0x652c2915;
    __asm ("shrd r12, rbp, 0x3c");
    r15d ^= edx;
    ebp |= 0x442470a;
    bx--;
    __asm ("clc");
    r15w = rotate_left16 (r15w, 1);
    esi = -esi;
    ebp = rotate_right32 (ebp, 1);
    __asm ("clc");
    esi -= 0x6b5ec641;
    __asm ("cmovnp r9w, ax");
    r14b <<= 0x82;
    r14b = rotate_left64 (r14b, 0xd9);
    cl = ((bl & r8b) >= 0) ? 1 : 0;
    rdi ^= 0xffffffffc62ad293;
    r15w++;
    r14d = rotate_left32 (r14d, 0x66);
    dl ^= al;
    __asm ("btc dx, 0x15");
    __asm ("bsr r10, r14");
    r9 = (int64_t) edx;
    __asm ("xadd r14d, r13d");
    r10w <<= 1;
    __asm ("shrd edx, edi, 1");
    ch = rotate_left8 (ch, 1);
    rdx = rotate_left64 (rdx, cl);
    sil = rotate_right8 (sil, 1);
    __asm ("cmovno r15, rbx");
    __asm ("bts r9w, 0x55");
    dil -= 0xe9;
    edx = rotate_left32 (edx, 0xaf);
    rax = (int64_t) bpl;
    __asm ("sahf");
    rbx >>= cl;
    r8d ^= 0xce308b98;
    __asm ("clc");
    bl += al;
    r13 |= 0x5eef81e;
    r11w = rotate_right16 (r11w, 0x79);
    r9d = (int32_t) r13b;
    bx *= 0x4c52;
    eax &= r15d;
    r15 = (int64_t) r8w;
    r15b |= 0x29;
    ebx = eax;
    __asm ("stc");
    r9 += 0x301fcc2e;
    if (r9 > 0) {
        rcx = rdi;
    }
    __asm ("stc");
    rbp -= 0xffffffffe2866e0d;
    __asm ("setns r8b");
    ax = 0xdb00;
    r13w = rotate_left16 (r13w, cl);
    __asm ("btc ebx, r14d");
    if (rbp >= 0) {
        r12d = esi;
    }
    r12w--;
    bpl++;
    __asm ("stc");
    ah -= al;
    __asm ("clc");
    rbp -= r13;
    __asm ("cmovo r14w, cx");
    __asm ("clc");
    ebx -= 0x451a7213;
    tmp_1 = rbp;
    ;
    rbp = tmp_1;
    __asm ("cmovns r14w, bx");
    __asm ("clc");
    r14d = rotate_left32 (r14d, 1);
    rdx = rotate_left64 (rdx, 1);
    bp -= 0x1518;
    bp &= r13w;
    if (bp <= 0) {
        r11d = eax;
    }
    __asm ("clc");
    ebp += 0x4e8eaa62;
    r9 &= 0xffffffff9197f1b9;
    __asm ("shld rdi, r9, cl");
    r8 = 0xc000000000000000;
    r10 |= r8;
    r8 = 0x3fffffffffffffff;
    rdx &= r8;
    rax = rdx:rax / r10;
    rdx = rdx:rax % r10;
    __asm ("btc r10d, r15d");
    __asm ("btc r14w, 0x61");
    __asm ("clc");
    dh += bh;
    __asm ("bsf r14, r11");
    ah ^= al;
    dh |= al;
    ebp = rotate_left32 (ebp, 0xa7);
    r15w--;
    bpl += r8b;
    cx = (int16_t) r8b;
    r11 = -r11;
    __asm ("xadd di, r10w");
    r14 *= 0xffffffffa67dce3b;
    r9d = rotate_left32 (r9d, 1);
    rax += rbx;
    rax += rcx;
    rax += rdx;
    rax += rbp;
    rax += rsi;
    rax += rdi;
    rax += r8;
    rax += r9;
    rax += r10;
    rax += r11;
    rax += r12;
    rax += r13;
    rax += r14;
    rax += r15;
    rbx = 0xf1ffff70320f7f04;
    rax -= rbx;
    r14 = r15;
    r13 = r15;
    r12 = r15;
    r11 = r15;
    r10 = r15;
    r9 = r15;
    r8 = r15;
    rdi = r15;
    rsi = r15;
    rcx = r15;
    rbx = r15;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x401cce */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_7_var_004 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x3e6c63b8b788bb46;
    rbx = 0x7ff0df562947ceab;
    rcx = 0x535de0d78a4cbf4a;
    rdx = 0xa50c23bd273adad3;
    rsi = 0xfe1b9cbef46c5eac;
    rdi = 0x45dbe124f8387a8b;
    r8 = 0xadf0872201891b6c;
    r9 = 0x6e8847b0725ec549;
    r10 = 0x1f7ad0a43f8d8310;
    r11 = 0x85a8e59393cb6ea3;
    r12 = 0x84c7c67fe7c8fb09;
    r13 = 0x4a3ecdba378ab69c;
    r14 = 0x24e1eeb0cbfa1f9b;
    r15 = 0x8385bb2c76b5a9c7;
    bh--;
    rsi = (int64_t) r14w;
    cx = rotate_right16 (cx, 1);
    r10b >>= 0x3e;
    __asm ("shrd r9w, r12w, 7");
    r14b--;
    bx += r13w;
    __asm ("clc");
    r14b = rotate_left64 (r14b, 1);
    bh = rotate_left8 (bh, 1);
    __asm ("stc");
    r14 += 0xffffffff9b736993;
    __asm ("shld si, r8w, 0xf");
    r14d >>= cl;
    __asm ("btr r10d, 0x9c");
    cl &= 0xf;
    __asm ("shld r10w, ax, cl");
    __asm ("xadd r12w, r9w");
    __asm ("cmpxchg bl, sil");
    dl -= ch;
    rax = (int64_t) eax;
    rbp ^= 0xffffffffee79b82c;
    __asm ("stc");
    edx = rotate_right32 (edx, 1);
    r14b = rotate_left64 (r14b, cl);
    __asm ("btr r10w, ax");
    __asm ("cmc");
    rcx >>= 1;
    __asm ("stc");
    r14 = rotate_left64 (r14, 1);
    if (rcx < 0) {
    }
    __asm ("shrd ecx, r9d, cl");
    r10 = (int64_t) r14w;
    si = ~si;
    rax = rotate_left64 (rax, 0x63);
    dh = rotate_left8 (dh, 0x35);
    dh -= dl;
    edi = r8 + rdi*2 + 0x5c;
    r15b = (dh <= 0) ? 1 : 0;
    rax >>= 1;
    cx = r9w * 0x9818;
    ah = rotate_left8 (ah, 0x9e);
    __asm ("shrd rdx, rbx, cl");
    rdx:rax = rax * rsi;
    __asm ("btc r13w, 0xf4");
    tmp_0 = sil;
    sil = r12b;
    r12b = tmp_0;
    r10w *= 0x8ad9;
    __asm ("shrd r9w, r14w, 9");
    r12b <<= 1;
    r9w = rotate_right16 (r9w, 1);
    r8 = rotate_right64 (r8, 0x9d);
    bl += dh;
    dl = ((dx & cx) <= 0) ? 1 : 0;
    r12 = -r12;
    r14w *= 0xb7e0;
    __asm ("seto r8b");
    __asm ("stc");
    al -= ch;
    r10b = rotate_right64 (r10b, 0x36);
    esi >>= 1;
    __asm ("stc");
    cl -= cl;
    r8w++;
    r13d &= r9d;
    __asm ("setns r8b");
    bx += 0x4ba0;
    tmp_1 = di;
    di = r12w;
    r12w = tmp_1;
    r14d = rotate_left32 (r14d, cl);
    rbx ^= r10;
    __asm ("setno dh");
    __asm ("stc");
    r15w += bx;
    __asm ("clc");
    rax = rotate_left64 (rax, 1);
    r15b >>= cl;
    ax = r10 + 0x2d;
    dl |= r15b;
    __asm ("bsr r12, rbx");
    r11 >>= 0x8a;
    __asm ("sahf");
    __asm ("bts r9w, di");
    r14b >>= 1;
    __asm ("btr r10, rbp");
    __asm ("clc");
    cl += bl;
    __asm ("stc");
    r10d += 0xf63081be;
    ebx ^= 0xa4efdb37;
    __asm ("bts ebp, 0xa0");
    if (r10d == 0) {
        rdi = r12;
    }
    r8b >>= 0x30;
    __asm ("btc esi, ecx");
    __asm ("shrd ax, r10w, 1");
    rax = (int64_t) eax;
    sil += r8b;
    edx:eax = (int64_t) eax;
    dl |= 0xc0;
    ax &= 0x3fff;
    al = ax / dl;
    ah = ax % dl;
    r11d >>= 1;
    r14b -= cl;
    r9d |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / r9d;
    edx = edx:eax % r9d;
    ax = al * ah;
    __asm ("clc");
    r13d = rotate_left32 (r13d, 1);
    r13 >>= cl;
    __asm ("bts si, 0x8b");
    r12d += r8d;
    r13w = 0x90f0;
    r9b <<= 0x99;
    esi = (int32_t) bl;
    rax += rbx;
    rax += rcx;
    rax += rdx;
    rax += rbp;
    rax += rsi;
    rax += rdi;
    rax += r8;
    rax += r9;
    rax += r10;
    rax += r11;
    rax += r12;
    rax += r13;
    rax += r14;
    rax += r15;
    rbx = 0x9c1772011714de7a;
    rax -= rbx;
    r14 = r15;
    r13 = r15;
    r12 = r15;
    r11 = r15;
    r10 = r15;
    r9 = r15;
    r8 = r15;
    rdi = r15;
    rsi = r15;
    rcx = r15;
    rbx = r15;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x402245 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_7_var_006 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x9566171b2c8caf04;
    rbx = 0x80c64ee124f53ef5;
    rcx = 0xa4d0d637ab844093;
    rdx = 0x21b789c70969bb5b;
    rsi = 0x54c786df9447239c;
    rdi = 0x591cdb415928e9f9;
    r8 = 0x14a8e4db31de808;
    r9 = 0xf08496d70a35dafa;
    r10 = 0x2c8ef810ead8a16a;
    r11 = 0x6c58cc3ec98ac359;
    r12 = 0xc3fe67696f28cea8;
    r13 = 0xd0179c4d5afe1008;
    r14 = 0x5817c06b4a88ca31;
    r15 = 0xa07bd92ce9079b05;
    r11 = rotate_left64 (r11, 1);
    r15 >>= 0xd8;
    __asm ("shrd r15w, r12w, 0");
    __asm ("shld rbx, r11, 1");
    dx:ax = ax * si;
    __asm ("stc");
    r15d += eax;
    al |= r9b;
    __asm ("clc");
    r8w += 0xd7af;
    __asm ("cmpxchg rbp, r14");
    dl += bh;
    __asm ("cmovs r10, r12");
    r8w = (int16_t) dl;
    __asm ("cmovp r11d, r11d");
    r15 += rsi;
    __asm ("clc");
    esi += edx;
    r15b -= 0x87;
    __asm ("setnp r8b");
    __asm ("setnp sil");
    __asm ("cmpxchg bl, cl");
    rcx++;
    __asm ("cmovnp r15w, r11w");
    edx = rotate_left32 (edx, 0x28);
    r11d >>= cl;
    dx:ax = ax * si;
    __asm ("clc");
    rsi += 0x455c94c5;
    r11 = 0xe945b1894f0b8907;
    di >>= 1;
    r12d &= r15d;
    if (r12d >= 0) {
        r9 = r11;
    }
    ch = 0xf9;
    rdi = rotate_right64 (rdi, cl);
    r8b >>= 1;
    r9w *= 0x6562;
    __asm ("stc");
    r12d -= 0x4c83eb00;
    r9d >>= 0x71;
    r10b += r15b;
    __asm ("stc");
    edx -= 0xf3a55e9e;
    r8b >>= 1;
    __asm ("stc");
    rcx = rotate_right64 (rcx, 1);
    __asm ("xadd r15w, dx");
    __asm ("cwd");
    __asm ("xadd r10w, r8w");
    r13w = 0x8239;
    if (r8b != 0) {
        ecx = edx;
    }
    __asm ("setp dh");
    __asm ("stc");
    rbx -= r13;
    __asm ("stc");
    r12d += r8d;
    al = (r12d <= 0) ? 1 : 0;
    r8w ^= r14w;
    __asm ("shrd ebp, r9d, cl");
    r12w = rotate_right16 (r12w, 0xa6);
    esi = (int32_t) ah;
    dx = edx + r15d*8 - 0x5cbd4935;
    al |= cl;
    r11w <<= 0x61;
    r14w <<= 0x10;
    r8w |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / r8w;
    dx = dx:ax % r8w;
    __asm ("shld r15w, r14w, 0xc");
    r11 &= 0xffffffff9ebd6e2f;
    ebx = (int32_t) ch;
    __asm ("shrd r9d, r11d, 0xc4");
    ebx = -ebx;
    __asm ("shrd r13d, r11d, 1");
    r13w >>= cl;
    __asm ("stc");
    r11d = rotate_right32 (r11d, 1);
    bl = 0;
    ecx = r13 + r9*8 + 0x539d055d;
    __asm ("clc");
    edx += 0x535a96cb;
    ebp = rotate_left32 (ebp, 0x67);
    __asm ("cwd");
    dl |= 0xc0;
    ax &= 0x3fff;
    al = ax / dl;
    ah = ax % dl;
    if (ebp > 0x27fdec15) {
        r13 = rdx;
    }
    r15w += r12w;
    __asm ("cmovo r9d, ebp");
    if (r15w != 0) {
        r15w = cx;
    }
    edx:eax = (int64_t) eax;
    al >>= cl;
    bl <<= cl;
    r8d |= eax;
    ebx = rotate_right32 (ebx, cl);
    dil |= sil;
    bl = rotate_left8 (bl, cl);
    __asm ("cmpxchg r10d, r9d");
    rdi = r12;
    __asm ("clc");
    r12 += 0xffffffff8aabb1ea;
    __asm ("cmpxchg r12b, dil");
    r13d += 0xfa221152;
    r15 <<= cl;
    r9d >>= cl;
    __asm ("shld r8w, r10w, 1");
    rdx:rax = rax * r13;
    cl &= 0xf;
    __asm ("shld si, r8w, cl");
    if ((rsi & r13) <= 0) {
        di = r11w;
    }
    __asm ("btc rax, 0xf3");
    r9d >>= cl;
    __asm ("shrd r14w, ax, 2");
    r10w = r13d + edi*2 - 0x53f35039;
    rbp = rotate_left64 (rbp, 0x85);
    __asm ("shld esi, r15d, 0xe0");
    sil = rotate_left8 (sil, 1);
    r10 >>= 0x94;
    rax += rbx;
    rax += rcx;
    rax += rdx;
    rax += rbp;
    rax += rsi;
    rax += rdi;
    rax += r8;
    rax += r9;
    rax += r10;
    rax += r11;
    rax += r12;
    rax += r13;
    rax += r14;
    rax += r15;
    rbx = 0x7cf42993da43b506;
    rax -= rbx;
    r14 = r15;
    r13 = r15;
    r12 = r15;
    r11 = r15;
    r10 = r15;
    r9 = r15;
    r8 = r15;
    rdi = r15;
    rsi = r15;
    rcx = r15;
    rbx = r15;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x4027e5 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
#define SWAP64(val) ((uint64_t) (((val & 0x00000000000000ffull) << 56) | \
                                 ((val & 0x000000000000ff00ull) << 40) | \
                                 ((val & 0x0000000000ff0000ull) << 24) | \
                                 ((val & 0x00000000ff000000ull) <<  8) | \
                                 ((val & 0x000000ff00000000ull) >>  8) | \
                                 ((val & 0x0000ff0000000000ull) >> 24) | \
                                 ((val & 0x00ff000000000000ull) >> 40) | \
                                 ((val & 0xff00000000000000ull) >> 56)))
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_7_var_008 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x7293b9a64af05981;
    rbx = 0xc3af0792aa230abc;
    rcx = 0x73ac7526112c2d92;
    rdx = 0x4702a7fce89b51c6;
    rsi = 0x67195191f2c1a618;
    rdi = 0x92d23206785226dc;
    r8 = 0x1cf776b0ecbd720c;
    r9 = 0xa349eac14be76eb7;
    r10 = 0x5a7aa87faaad7544;
    r11 = 0x7e727bec74a270da;
    r12 = 0x99963c3504d369d6;
    r13 = 0x17a769f2396cf2fc;
    r14 = 0xe5817aa177c9c3b;
    r15 = 0xad6f05e164cac0b1;
    ch = -ch;
    edi = (int32_t) al;
    r10d = ecx;
    r11d >>= cl;
    r12d <<= 1;
    dh = (r12d < 0) ? 1 : 0;
    __asm ("stc");
    rbp -= r13;
    rbp = rotate_left64 (rbp, 0x79);
    r15b = ~r15b;
    ebx = (int32_t) r10w;
    edi = -edi;
    r13w = rotate_left16 (r13w, cl);
    r10b -= 0x52;
    rax = (int64_t) eax;
    r11b -= 0x8d;
    __asm ("shld ebp, edx, 1");
    r12w = ~r12w;
    rcx = 0x6f9f9b1064d3ee13;
    __asm ("clc");
    edi += ebp;
    dx &= 0x83f5;
    __asm ("cmovs edx, ebp");
    __asm ("btr r14w, 0x61");
    __asm ("clc");
    r15 -= 0xfffffffff1f7680e;
    rdx:rax = rax * rbp;
    __asm ("cmpxchg rdx, rax");
    r13w += si;
    r8 += rbp;
    rdx = r11 * 0xffffffffa5e1bb8f;
    bl &= al;
    rcx = r10 + rbp*8 + 0xd3;
    __asm ("bts r9, rcx");
    __asm ("bts ax, r13w");
    __asm ("clc");
    dh -= bh;
    if (dh != 0) {
    }
    edx:eax = eax * r11d;
    r14b |= 0xf4;
    __asm ("stc");
    ah += dh;
    __asm ("cmpxchg cl, bpl");
    __asm ("shrd dx, bp, 7");
    cl &= 0xf;
    __asm ("shld dx, r13w, cl");
    __asm ("bts bx, 0xb4");
    al <<= cl;
    rcx = SWAP64 (rcx);
    rdx <<= 1;
    r12 >>= 0xde;
    dx = (int16_t) r11b;
    r9d = (int32_t) r9b;
    rdx:rax = rax * r13b;
    ebx = (int32_t) ah;
    r15w = rotate_right16 (r15w, cl);
    r15 = rotate_left64 (r15, 0x93);
    al = rotate_right8 (al, 1);
    ebp = rotate_left32 (ebp, 0x59);
    __asm ("bsr rsi, r13");
    cx = ~cx;
    esi++;
    r8b = rotate_left64 (r8b, cl);
    __asm ("bsf r10w, r14w");
    r12b >>= 0xc0;
    r14w = si * 0xb425;
    __asm ("btr ax, 0x15");
    __asm ("clc");
    r14d = rotate_left32 (r14d, 1);
    eax = rotate_right32 (eax, 1);
    __asm ("shld r14d, eax, cl");
    ax ^= bp;
    __asm ("clc");
    r8b = rotate_left64 (r8b, 1);
    r12d *= 0x57fbf719;
    __asm ("shld r14d, r10d, 0xdb");
    rdi = rotate_right64 (rdi, 0x39);
    if (r13w > 0x39) {
        r12w = dx;
    }
    if (r13w >= 0x39) {
        r8w = r10w;
    }
    r8 = r11 + r10*8 + 0x6f;
    r12b = rotate_right64 (r12b, 1);
    tmp_0 = edi;
    edi = r11d;
    r11d = tmp_0;
    di ^= 0x3aaf;
    r11b |= dl;
    if (eax >= r15d) {
        edx = r15d;
    }
    __asm ("shld ecx, r12d, 1");
    __asm ("btc r10w, 0x33");
    if (eax > r15d) {
        r9d = edx;
    }
    __asm ("stc");
    r11 -= 0xfffffffff1a5a107;
    r13d <<= cl;
    r9w = rotate_right16 (r9w, 0x38);
    dx = rax + rcx*4 + 0xc3;
    r9 <<= 0x55;
    __asm ("shld r9d, edi, 0xb4");
    al += 0xe1;
    al |= 0xc0;
    ax &= 0x3fff;
    al = ax / al;
    ah = ax % al;
    bp = (int16_t) cl;
    rcx = rotate_right64 (rcx, 1);
    bpl ^= r8b;
    r14b ^= 2;
    __asm ("cmovnp rax, rbp");
    if (ax <= 0) {
        r13 = r11;
    }
    ebp >>= 1;
    __asm ("cmovs ebx, ebp");
    rax = r15 * 0x2208b72d;
    bx >>= 0xb3;
    __asm ("bsr esi, r8d");
    tmp_1 = al;
    al = dl;
    dl = tmp_1;
    esi = (int32_t) cl;
    dil >>= 1;
    ax = (int16_t) al;
    rdi |= r13;
    r10w = (int16_t) r12b;
    __asm ("cmovs di, si");
    if ((dl & r12b) >= 0) {
        rdx = rsi;
    }
    tmp_2 = r15d;
    r15d = edx;
    edx = tmp_2;
    ax ^= 0x61ff;
    bh = rotate_left8 (bh, 1);
    rax += rbx;
    rax += rcx;
    rax += rdx;
    rax += rbp;
    rax += rsi;
    rax += rdi;
    rax += r8;
    rax += r9;
    rax += r10;
    rax += r11;
    rax += r12;
    rax += r13;
    rax += r14;
    rax += r15;
    rbx = 0xd04ce25b34719c13;
    rax -= rbx;
    r14 = r15;
    r13 = r15;
    r12 = r15;
    r11 = r15;
    r10 = r15;
    r9 = r15;
    r8 = r15;
    rdi = r15;
    rsi = r15;
    rcx = r15;
    rbx = r15;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x401030 */
#include <stdint.h>
 
void assert_fail (void) {
    assert_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] -r-x section size 27 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
