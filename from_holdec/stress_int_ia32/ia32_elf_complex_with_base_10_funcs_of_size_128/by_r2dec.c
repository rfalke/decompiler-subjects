/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x80490e0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049117 ();
    ebx += 0x3f0c;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2cc0, ebx - 0x2c60);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049117 */
#include <stdint.h>
 
void fcn_08049117 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049140 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.completed.6844;
    if (eax != obj.completed.6844) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6844);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049180 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6844;
    eax -= obj.completed.6844;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.completed.6844, eax);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x80491c0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    __asm ("endbr32");
    if (*(obj.completed.6844) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6844) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x80491f0 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x804a3a0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049130 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x804a3a8 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2c4b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x80493d3 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
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
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t log_size_7_var_001 (void) {
    eax = 0xbafe11f;
    ebx = 0x490593a0;
    ecx = 0x9e95511c;
    edx = 0xcec4096d;
    esi = 0x30d61055;
    edi = 0xa2265ad5;
    di = 0xdaba;
    __asm ("btc di, 0x6f");
    dx -= 0x2371;
    ax = rotate_right16 (ax, cl);
    cl = rotate_left8 (cl, cl);
    __asm ("shld si, dx, 0xd");
    ch = 0xbc;
    edi ^= ebp;
    __asm ("stc");
    eax = rotate_right32 (eax, 1);
    __asm ("stc");
    dx -= si;
    __asm ("lahf");
    __asm ("cmovnp ax, ax");
    cx = ~cx;
    __asm ("clc");
    esi -= 0xaab9f60c;
    ax -= 0x2501;
    ebx += 0xeae44266;
    bl ^= al;
    dh = rotate_right8 (dh, 0x3d);
    ecx = rotate_right32 (ecx, 0xd6);
    __asm ("btr ax, ax");
    ebx = ~ebx;
    edi = ~edi;
    bp <<= 1;
    __asm ("clc");
    edx = rotate_left32 (edx, 1);
    ecx -= esi;
    if (ecx <= 0) {
        ebx = eax;
    }
    if (ecx != 0) {
    }
    dx |= 0x258f;
    dl = rotate_right8 (dl, 1);
    tmp_0 = edi;
    edi = edx;
    edx = tmp_0;
    bx = rotate_left16 (bx, 0xce);
    ch -= dl;
    __asm ("setnp ah");
    __asm ("setnp dh");
    bh = (ch <= 0) ? 1 : 0;
    bx -= 0x2e0b;
    eax += 0x7527d74a;
    __asm ("shld ax, ax, 1");
    ebp = rotate_left32 (ebp, cl);
    ebx >>= 0x6c;
    dl = rotate_right8 (dl, 0x39);
    bp ^= 0x515f;
    dx <<= 0xc6;
    ebp <<= 1;
    __asm ("cmovno ebp, esi");
    tmp_1 = dx;
    dx = bx;
    bx = tmp_1;
    __asm ("clc");
    edi += edi;
    cl += ch;
    di >>= cl;
    ecx = (int32_t) ax;
    eax -= 0x808dda03;
    if (eax != 0) {
    }
    if (eax <= 0) {
        ax = di;
    }
    edx = rotate_left32 (edx, cl);
    bh = 0;
    __asm ("clc");
    dx += bx;
    if (dx <= 0) {
        ecx = ebx;
    }
    esi &= eax;
    __asm ("clc");
    ebp += 0x7065966e;
    cx += bp;
    bl = rotate_left8 (bl, 0x9e);
    __asm ("cmpxchg cx, si");
    __asm ("btc bp, di");
    bp >>= cl;
    al += ah;
    ch = 0;
    __asm ("cmpxchg si, di");
    di = -di;
    __asm ("bts cx, bx");
    ax = (int16_t) al;
    eax *= 0xce1ae27d;
    ebp <<= cl;
    __asm ("bsr ebx, ecx");
    __asm ("bts esi, 0x5d");
    if (ebp <= 0) {
        ecx = ebp;
    }
    cl &= 0xc3;
    edx = rotate_right32 (edx, 0x8e);
    al = rotate_right8 (al, 1);
    edx:eax = (int64_t) eax;
    cl &= 0xf;
    __asm ("shrd cx, si, cl");
    ebx |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    __asm ("bsf edx, edx");
    edi = eax;
    __asm ("xadd esi, edi");
    __asm ("cmovnp bx, bp");
    __asm ("stc");
    bl += 0x1e;
    bh = (ax >= 0x355a) ? 1 : 0;
    __asm ("sahf");
    cl = rotate_left8 (cl, 1);
    __asm ("sahf");
    eax <<= 1;
    tmp_2 = cl;
    cl = dl;
    dl = tmp_2;
    edx &= 0x5a28e0bd;
    __asm ("stc");
    ebp += ecx;
    ch = (ebp > 0) ? 1 : 0;
    edx = -edx;
    __asm ("stc");
    dx += di;
    ecx <<= 1;
    ebx |= ebp;
    __asm ("clc");
    di += cx;
    __asm ("clc");
    esi -= edx;
    ch -= ch;
    __asm ("clc");
    ah -= dl;
    ecx = SWAP32 (ecx);
    ax = al * bh;
    edi |= ebp;
    bp = rotate_left16 (bp, cl);
    dl &= dl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xbe116d2d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x804974e */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
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
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_7_var_003 (void) {
    eax = 0x17df2ca8;
    ebx = 0xa53aba3a;
    ecx = 0xc7d5ace1;
    edx = 0xfc76bcb9;
    esi = 0x749950f;
    edi = 0x732dc8b5;
    dh <<= 0xc7;
    dh &= ah;
    if (dh == 0) {
        si = ax;
    }
    ch += dl;
    ebx = eax + ebp*2 + 0x4a81d55c;
    __asm ("stc");
    cx += bx;
    __asm ("shld di, dx, 0xd");
    di &= cx;
    __asm ("sets ch");
    dh++;
    ah += dh;
    al = rotate_right8 (al, 1);
    bl += cl;
    dh >>= 3;
    bh &= dl;
    if (bp >= dx) {
        bx = di;
    }
    __asm ("clc");
    edx = rotate_right32 (edx, 1);
    bp &= cx;
    si = rotate_right16 (si, 0x32);
    __asm ("bsf edi, ecx");
    dx -= 0x68e2;
    ax = al * dl;
    eax = (int32_t) ax;
    dx = 0x8531;
    __asm ("clc");
    edi -= 0xf53397b5;
    __asm ("setnp ah");
    cl--;
    __asm ("clc");
    bh += al;
    __asm ("cmovns si, dx");
    di >>= cl;
    bh |= cl;
    __asm ("clc");
    edi += 0x63cf8685;
    esi = rotate_right32 (esi, 0xe);
    ebx <<= 1;
    __asm ("stc");
    cl += 0xfc;
    ebx -= 0x53bedde5;
    dl = (ebx >= 0) ? 1 : 0;
    ecx ^= ebp;
    __asm ("bts dx, 0x3d");
    si ^= 0x86d8;
    __asm ("setp cl");
    __asm ("btr dx, 0x2c");
    dx:ax = ax * cx;
    __asm ("clc");
    eax = rotate_left32 (eax, 1);
    if ((al & bh) >= 0) {
        dx = ax;
    }
    ax--;
    bh >>= 0x44;
    edx <<= 1;
    __asm ("clc");
    ah = rotate_left8 (ah, 1);
    dh = rotate_left8 (dh, 1);
    edi &= 0x2c85416c;
    __asm ("stc");
    ebp = rotate_left32 (ebp, 1);
    si -= 0x74f4;
    bp = rotate_right16 (bp, cl);
    __asm ("btc cx, 0xac");
    bp--;
    eax >>= 1;
    __asm ("setnp ch");
    di = rotate_right16 (di, cl);
    dx |= bx;
    __asm ("stc");
    esi += eax;
    cl = rotate_right8 (cl, 1);
    __asm ("stc");
    cx += 0x75da;
    __asm ("btc esi, ecx");
    al -= 0x69;
    ebx <<= cl;
    cl = rotate_left8 (cl, 0xf9);
    tmp_0 = cl;
    cl = dl;
    dl = tmp_0;
    ax <<= 0x6e;
    bp = ax * 0xaba1;
    if (ax < 0) {
        cx = si;
    }
    __asm ("bts ebx, edx");
    bx = -bx;
    dx = -dx;
    __asm ("setnp bl");
    if ((dl & 0x72) < 0) {
        bx = cx;
    }
    ax = al * bh;
    cx >>= cl;
    edx ^= esi;
    if (cx == 0) {
        ecx = esi;
    }
    dh += cl;
    ebx >>= 0x64;
    ah <<= cl;
    cl--;
    tmp_1 = eax;
    eax = esi;
    esi = tmp_1;
    __asm ("shrd esi, esi, 1");
    bl = (cl >= 0) ? 1 : 0;
    __asm ("setns ch");
    if (cl >= 0) {
        eax = ebp;
    }
    ch = rotate_left8 (ch, 1);
    if (cl < 0) {
        esi = edi;
    }
    dh = rotate_left8 (dh, 0x62);
    eax &= 0x74f38578;
    dl = rotate_left8 (dl, 1);
    dx &= ax;
    dx += bx;
    __asm ("bsf edx, ecx");
    ecx = 0xd0d92a4a;
    eax += 0x39c48794;
    __asm ("cmovnp edi, eax");
    __asm ("xadd ebp, ebp");
    ebx = rotate_left32 (ebx, 0xf6);
    bp *= 0xae0f;
    edi = ecx;
    __asm ("stc");
    edi -= eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x82e34596;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x804a196 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
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
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_7_var_009 (void) {
    eax = 0x3ebe947a;
    ebx = 0x2f1b1400;
    ecx = 0x1580cc78;
    edx = 0x83ff3d5e;
    esi = 0x1345542d;
    edi = 0xcc4d08be;
    al <<= 1;
    esi = SWAP32 (esi);
    ax |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / ax;
    dx = dx:ax % ax;
    edi >>= cl;
    cl--;
    edi >>= cl;
    edx:eax = (int64_t) eax;
    ecx <<= cl;
    esi = (int32_t) ah;
    __asm ("btc eax, edx");
    __asm ("sahf");
    dx = rotate_right16 (dx, 0x1c);
    dl &= 0xe2;
    dl = 0x57;
    ah = (dl != 0) ? 1 : 0;
    eax = rotate_right32 (eax, 0xd7);
    dl >>= 0xdb;
    __asm ("cmpxchg al, ah");
    cx = (int16_t) dl;
    tmp_0 = ax;
    ax = di;
    di = tmp_0;
    dh = (dl == 0) ? 1 : 0;
    bl = rotate_left8 (bl, cl);
    edx:eax = eax * ebp;
    eax >>= 0x81;
    edx:eax = eax * ecx;
    edx = (int32_t) dl;
    ebp++;
    __asm ("clc");
    __asm ("cmovno edx, ecx");
    ecx = rotate_right32 (ecx, cl);
    __asm ("setns ch");
    cl &= ah;
    __asm ("btc bx, 0xf6");
    si <<= 1;
    __asm ("seto ch");
    ebx = rotate_left32 (ebx, 1);
    bh = rotate_right8 (bh, 1);
    __asm ("lahf");
    ebp += 0x5177e99a;
    ebx = rotate_right32 (ebx, 1);
    esi ^= 0xd4fa899;
    if ((al & dh) != 0) {
        ebx = ebp;
    }
    ebp >>= cl;
    ebp = (int32_t) ch;
    __asm ("bsr eax, edi");
    if (ebp == 0) {
        dx = cx;
    }
    __asm ("bsr esi, eax");
    ax >>= cl;
    ax = al * dl;
    __asm ("stc");
    bp -= 0x6712;
    ebp = rotate_left32 (ebp, 0x1d);
    eax = (int32_t) bp;
    cl = rotate_right8 (cl, 1);
    si <<= 1;
    bp -= 0x6c49;
    __asm ("cmpxchg dx, cx");
    __asm ("stc");
    bx += si;
    __asm ("stc");
    cx += 0xe7c;
    edi >>= 0x79;
    __asm ("stc");
    eax = rotate_right32 (eax, 1);
    __asm ("xadd bx, di");
    edi <<= 0x41;
    __asm ("clc");
    bh >>= 1;
    edx -= edi;
    __asm ("stc");
    si += 0x77d9;
    dx = rotate_right16 (dx, 1);
    __asm ("stc");
    dx = rotate_left16 (dx, 1);
    __asm ("stc");
    ch += 0x91;
    cl = rotate_right8 (cl, cl);
    bl = -bl;
    ch = 0xda;
    ax ^= 0x4609;
    bh ^= 0xf3;
    if ((ax & 0xfd29) == 0) {
        edx = eax;
    }
    edi = (int32_t) cx;
    cl = ((ax & 0xfd29) < 0) ? 1 : 0;
    al = rotate_left8 (al, cl);
    __asm ("shld ecx, esi, 1");
    cx &= 0x345f;
    ch = ~ch;
    ax = si;
    __asm ("clc");
    ebp &= 0xddc09ccc;
    si |= bx;
    al++;
    __asm ("stc");
    cl += 0xd;
    __asm ("bts ebx, 0x2e");
    al ^= 0x1d;
    ax = rotate_right16 (ax, cl);
    cl &= ah;
    __asm ("stc");
    ch += 0x6f;
    si = rotate_left16 (si, 1);
    __asm ("clc");
    bl -= 0x9b;
    dx = 0xd1e9;
    ch = rotate_right8 (ch, 0x8a);
    __asm ("cmpxchg edx, eax");
    __asm ("cmovns bx, ax");
    __asm ("cmpxchg cl, bh");
    bl += al;
    __asm ("clc");
    si += 0x7df7;
    __asm ("clc");
    ch = rotate_left8 (ch, 1);
    if (((edx >> edx) & 1) >= 0) {
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1d70f597;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049e1f */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
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
 
int32_t log_size_7_var_007 (void) {
    eax = 0x54c484a1;
    ebx = 0xcfc38870;
    ecx = 0x5715509a;
    edx = 0x7312ed3c;
    esi = 0x9b044267;
    edi = 0xcde3b50c;
    cl &= 0xf;
    __asm ("shld dx, di, cl");
    ax = al * dh;
    __asm ("stc");
    bh -= dl;
    ah++;
    esi *= 0x21a467a5;
    si--;
    edx = ecx;
    __asm ("shrd si, cx, 1");
    cx = rotate_left16 (cx, 1);
    ax = al * bl;
    dl -= 0x6c;
    cx |= 0xe147;
    __asm ("clc");
    cl = rotate_left8 (cl, 1);
    __asm ("clc");
    bx += 0x5284;
    if (bx == 0) {
        eax = ebp;
    }
    di += 0xe16d;
    bl |= cl;
    edx = -edx;
    si ^= di;
    __asm ("clc");
    ebx = rotate_left32 (ebx, 1);
    ecx = rotate_left32 (ecx, cl);
    ax -= 0xb0da;
    dl = rotate_right8 (dl, cl);
    __asm ("bts bp, 0x79");
    ax += bp;
    __asm ("btc bx, bp");
    si += si;
    edi = esi;
    al &= 0xef;
    cl &= 0xf;
    __asm ("shrd ax, si, cl");
    bp ^= di;
    if (cl <= 0) {
    }
    __asm ("cmovp esi, edx");
    __asm ("cmovp ax, ax");
    tmp_0 = edi;
    edi = ecx;
    ecx = tmp_0;
    ecx = rotate_right32 (ecx, 1);
    bp = rotate_left16 (bp, cl);
    cx -= si;
    esi += edi;
    __asm ("shrd dx, si, 1");
    dh = 0xd0;
    __asm ("stc");
    bp = rotate_left16 (bp, 1);
    __asm ("btc esi, 0xab");
    al <<= 1;
    edx = rotate_right32 (edx, 1);
    cl >>= 1;
    di = (int16_t) dl;
    di &= 0x4882;
    eax = (int32_t) bp;
    __asm ("shld ebx, esi, 0xa2");
    di = (int16_t) al;
    esi++;
    __asm ("stc");
    si = rotate_left16 (si, 1);
    cl = rotate_right8 (cl, 0xbf);
    edx = rotate_right32 (edx, 0x92);
    eax >>= 0x3f;
    dl = rotate_right8 (dl, 0xb4);
    si = edx + ebp*4 + 0x73;
    ebx >>= 1;
    __asm ("stc");
    al += 0xda;
    ch -= al;
    __asm ("cmovp bx, cx");
    di = rotate_left16 (di, 0xb5);
    dl |= 0xc0;
    ax &= 0x3fff;
    al = ax / dl;
    ah = ax % dl;
    __asm ("cmpxchg dx, si");
    if (ax > 0) {
    }
    __asm ("setnp dl");
    __asm ("stc");
    esi = rotate_left32 (esi, 1);
    cl = (ax < 0) ? 1 : 0;
    __asm ("sahf");
    si = rotate_right16 (si, cl);
    __asm ("shld eax, esi, 0x34");
    ebx ^= 0x34265ab8;
    if (ax > 0) {
        ebx = ebp;
    }
    ax >>= cl;
    bh <<= 1;
    __asm ("stc");
    dl -= bh;
    __asm ("stc");
    bl -= 0xe4;
    dh = rotate_right8 (dh, cl);
    bl = rotate_left8 (bl, 1);
    si++;
    __asm ("sets ch");
    esi -= ecx;
    __asm ("setno bl");
    __asm ("stc");
    bl += 0xdd;
    bx = rotate_right16 (bx, 1);
    dx:ax = ax * ax;
    __asm ("shld ebx, edx, cl");
    ebx = (int32_t) bl;
    tmp_1 = ebx;
    ebx = edx;
    edx = tmp_1;
    ah = rotate_left8 (ah, 0x7f);
    esi *= 0x4aa711b;
    eax |= 0xa00413c6;
    ebp++;
    __asm ("bts eax, ebp");
    ebx = ebp + eax;
    tmp_2 = bx;
    bx = si;
    si = tmp_2;
    __asm ("stc");
    dl += al;
    ecx = ebx;
    edx = edi;
    bh <<= cl;
    al = ~al;
    al >>= cl;
    __asm ("shld esi, edi, 0xd2");
    al = rotate_right8 (al, cl);
    si = rotate_left16 (si, cl);
    esi <<= 0x8f;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x718466bd;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049aaa */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
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
 
int32_t log_size_7_var_005 (void) {
    eax = 0x1043dfa;
    ebx = 0x55f74aa8;
    ecx = 0x54b0aa80;
    edx = 0x53350eea;
    esi = 0x3e87249c;
    edi = 0x2c367251;
    __asm ("clc");
    ecx = rotate_right32 (ecx, 1);
    cx = -cx;
    __asm ("stc");
    cl = rotate_right8 (cl, 1);
    __asm ("bts esi, 0x8f");
    dl = rotate_right8 (dl, cl);
    dh <<= cl;
    edx:eax = eax * edx;
    ecx = (int32_t) bl;
    cl = rotate_right8 (cl, cl);
    bp = rotate_left16 (bp, 0x49);
    al = rotate_left8 (al, cl);
    bh = rotate_left8 (bh, cl);
    __asm ("cmpxchg si, bp");
    ebx += 0x31d0c8da;
    edx >>= cl;
    ax += dx;
    edx = rotate_right32 (edx, 0x5e);
    __asm ("xadd cx, bp");
    __asm ("stc");
    bp -= 0xdafd;
    __asm ("bsf edx, ecx");
    edx:eax = eax * esi;
    __asm ("clc");
    dx += si;
    __asm ("xadd edi, ebp");
    __asm ("shrd ax, bx, 1");
    ch = (dx >= 0) ? 1 : 0;
    cx = rotate_right16 (cx, 0xa3);
    ax -= 0x540f;
    ebx -= edi;
    esi = rotate_left32 (esi, 0x41);
    ch += bh;
    ah += 0x6a;
    __asm ("shrd eax, ebx, 1");
    __asm ("stc");
    ebp += 0x86dbdfeb;
    al = rotate_right8 (al, cl);
    ch ^= cl;
    bp = rotate_left16 (bp, 1);
    ecx >>= 1;
    cx |= bp;
    __asm ("stc");
    edi += edx;
    ecx = rotate_left32 (ecx, 1);
    esi |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    ebx = SWAP32 (ebx);
    esi = SWAP32 (esi);
    edi *= 0xcb25e734;
    dx:ax = ax * cx;
    edx >>= 0x2a;
    cx &= 0x9c7b;
    __asm ("bts bp, 0x20");
    __asm ("cmpxchg al, dl");
    bl = (cx < 0) ? 1 : 0;
    __asm ("stc");
    si += 0xf420;
    si <<= 1;
    __asm ("clc");
    bp >>= 1;
    di = rotate_left16 (di, 1);
    ah -= cl;
    __asm ("xadd dx, bx");
    esi = (int32_t) bx;
    __asm ("cmpxchg bx, bx");
    eax -= eax;
    edx = -edx;
    dx &= dx;
    __asm ("stc");
    dh = rotate_left8 (dh, 1);
    ecx ^= esi;
    __asm ("shld ecx, edx, 0x60");
    ax = al * ah;
    ax >>= 0xa;
    eax = (int32_t) ax;
    dx <<= 0x64;
    eax = (int32_t) ax;
    bl <<= cl;
    ecx &= 0x4b09527c;
    if (ecx != 0) {
    }
    __asm ("clc");
    ax -= 0x47fb;
    ecx -= eax;
    edx &= eax;
    si = 0x82d9;
    dx *= 0x3728;
    if (edx >= 0) {
        si = cx;
    }
    ax >>= 0x24;
    __asm ("clc");
    ax = al * bl;
    ax >>= 0xe8;
    bp &= di;
    cl = (bp >= 0) ? 1 : 0;
    ebp = rotate_left32 (ebp, 1);
    bl = rotate_right8 (bl, 0xb9);
    bx++;
    if (bx <= 0) {
        edx = eax;
    }
    __asm ("shld bx, bp, 1");
    bl = rotate_right8 (bl, 0xd8);
    bl = rotate_right8 (bl, 0x82);
    ecx &= 0xab284dd1;
    __asm ("clc");
    dx = rotate_left16 (dx, 1);
    __asm ("btc ax, 0xcb");
    di >>= cl;
    edx--;
    ebp = SWAP32 (ebp);
    esi = rotate_left32 (esi, 1);
    ax += 0xc349;
    __asm ("stc");
    bp += 0xd376;
    ebx >>= 1;
    di++;
    dx -= 0x58c4;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x847be94;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x804a340 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2cb3;
    ebp = *((esp + 0x28));
    _init ();
    esi = ebx - 0xf0;
    eax = ebx - 0xf4;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf4)(uint32_t*, uint32_t*) (*((esp + 0x2c)), *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049120 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049060 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_8h;
    /* [13] -r-x section size 4933 named .text */
    ecx = esp + 4;
    eax = log_size_7_var_000 (ecx, ebx, ebp);
    ebx = eax;
    eax = log_size_7_var_001 ();
    ebx += eax;
    eax = log_size_7_var_002 ();
    ebx += eax;
    eax = log_size_7_var_003 ();
    ebx += eax;
    eax = log_size_7_var_004 ();
    ebx += eax;
    eax = log_size_7_var_005 ();
    ebx += eax;
    eax = log_size_7_var_006 ();
    ebx += eax;
    eax = log_size_7_var_007 ();
    ebx += eax;
    eax = log_size_7_var_008 ();
    ebx += eax;
    eax = log_size_7_var_009 ();
    ebx += eax;
    if (ebx == 0) {
        esp = ebp - 8;
        eax = 0;
        esp = ecx - 4;
        return eax;
    }
    return assert_fail ("sum==0", "source_complex_with_base_10_funcs_of_size_128.c", 0x1f, "main");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x80491f6 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
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
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
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
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_7_var_000 (void) {
    eax = 0x5b22a830;
    ebx = 0xcad5df8a;
    ecx = 0x94144314;
    edx = 0x6236f153;
    esi = 0xeec67077;
    edi = 0x1661159d;
    ecx = SWAP32 (ecx);
    edi >>= cl;
    ebx &= 0xd2625ad0;
    di >>= 1;
    cx = rotate_left16 (cx, cl);
    bx <<= cl;
    ax <<= 1;
    edx = rotate_left32 (edx, cl);
    esi |= 0x30538506;
    eax = (int32_t) bp;
    dl = rotate_right8 (dl, 1);
    ecx >>= 0x9e;
    bx <<= 0x8d;
    __asm ("btr si, 0x3c");
    ch--;
    __asm ("cwd");
    if (ch < 0) {
        ax = dx;
    }
    __asm ("clc");
    edi -= 0x7aa22cc5;
    esi = rotate_right32 (esi, 1);
    bh -= dh;
    dl >>= 0xd7;
    bx += bp;
    cx = ax * 0x32e3;
    ax ^= si;
    edx = 0x8cb73ed;
    cl = (bx < 0) ? 1 : 0;
    eax >>= cl;
    esi -= esi;
    __asm ("btr si, 0xd");
    bh = (esi <= 0) ? 1 : 0;
    si &= 0x7fb;
    ax = rotate_left16 (ax, 6);
    __asm ("xadd bp, di");
    __asm ("cmovs dx, ax");
    ax += 0xae48;
    __asm ("stc");
    bp = rotate_right16 (bp, 1);
    __asm ("stc");
    dx -= dx;
    __asm ("setnp ah");
    __asm ("stc");
    edi += edx;
    bl = rotate_left8 (bl, 0xd1);
    esi = rotate_left32 (esi, cl);
    ah ^= 0xf0;
    bh = rotate_left8 (bh, 0xb8);
    bp >>= 0xe4;
    bx = (int16_t) ah;
    di = rotate_left16 (di, 0x11);
    __asm ("shld ebx, ebx, cl");
    ch |= 0xc0;
    ax &= 0x3fff;
    al = ax / ch;
    ah = ax % ch;
    ch = ~ch;
    dh = rotate_right8 (dh, cl);
    __asm ("shrd ebp, eax, 1");
    eax = SWAP32 (eax);
    ebp = ~ebp;
    __asm ("shld ecx, ecx, cl");
    ecx = rotate_left32 (ecx, 1);
    if (edi >= 0xfb50677c) {
    }
    di += bx;
    __asm ("cmovnp esi, ebp");
    bl += 0x3b;
    if (bl <= 0) {
        cx = ax;
    }
    if (bl >= 0) {
        ax = bp;
    }
    cx = (int16_t) al;
    di = si * 0x4539;
    __asm ("clc");
    dh -= bl;
    cl = rotate_left8 (cl, 1);
    __asm ("cmpxchg cx, cx");
    ebx <<= cl;
    ecx++;
    if (ecx != 0) {
    }
    ecx = 0xba9cd0f;
    bl |= 0xc0;
    ax &= 0x3fff;
    al = ax / bl;
    ah = ax % bl;
    esi += 0xf6b9ab60;
    __asm ("shld ebx, edx, 0x51");
    bp >>= 1;
    __asm ("clc");
    ax += bx;
    bx = rotate_right16 (bx, 0xec);
    esi++;
    cx += 0xd361;
    dl <<= cl;
    ch |= 0xc0;
    ax &= 0x3fff;
    al = ax / ch;
    ah = ax % ch;
    ax >>= 0x76;
    __asm ("clc");
    ax -= 0x2ad8;
    cx <<= cl;
    __asm ("btc si, di");
    ebp -= 0xf984999c;
    ecx *= 0x3144e97b;
    __asm ("clc");
    dl -= 0x73;
    dh >>= 1;
    __asm ("btr edx, esi");
    bl &= dl;
    ah -= bl;
    cl = rotate_right8 (cl, 0xee);
    __asm ("shld edx, eax, 1");
    ax = al * bl;
    edx >>= 1;
    if (edx < 0) {
        si = ax;
    }
    __asm ("btr eax, 0xe8");
    bl |= ah;
    al++;
    __asm ("bsr eax, ebx");
    esi &= 0xadfa054a;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7e1abf95;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049582 */
#include <stdint.h>
 
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
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
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
 
int32_t log_size_7_var_002 (void) {
    eax = 0x7729d23a;
    ebx = 0x70c75bf;
    ecx = 0x80e4ee83;
    edx = 0x2cade637;
    esi = 0xfb166e47;
    edi = 0x7fdec289;
    ebx <<= cl;
    esi >>= 1;
    ebx += eax;
    __asm ("cmovo ecx, edi");
    __asm ("setno bl");
    __asm ("stc");
    bp = rotate_right16 (bp, 1);
    bx = rotate_right16 (bx, 1);
    __asm ("stc");
    ecx = rotate_right32 (ecx, 1);
    eax = edi + edx - 0x1a67192c;
    dh >>= 1;
    bl |= dh;
    al += 0x25;
    __asm ("shld ebp, edx, cl");
    __asm ("btr edx, 0xe");
    ecx += ebx;
    bh -= bl;
    ah >>= 1;
    dh = rotate_right8 (dh, 1);
    __asm ("cwd");
    ebp <<= 0x16;
    bp |= 0x7793;
    ebp >>= 1;
    ch ^= 0x91;
    __asm ("stc");
    esi = rotate_right32 (esi, 1);
    edx = rotate_right32 (edx, 1);
    ah >>= 1;
    __asm ("bts edi, ebp");
    di = esi + edx - 0x3f3af878;
    edi &= 0xaec3d084;
    ch = (edi >= 0) ? 1 : 0;
    al = rotate_right8 (al, cl);
    ecx = -ecx;
    if (edi < 0) {
    }
    __asm ("stc");
    esi -= ebp;
    ebx = eax * 0x30f78b46;
    __asm ("btc dx, 0xc4");
    eax |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / eax;
    edx = edx:eax % eax;
    ecx |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    bx |= 0x9576;
    ch <<= cl;
    ebp = SWAP32 (ebp);
    __asm ("cwd");
    ah += cl;
    bh >>= cl;
    __asm ("clc");
    cl += ah;
    ax = al * al;
    dl = (cl < 0) ? 1 : 0;
    __asm ("btc ecx, 0xd2");
    eax ^= 0x7dffe825;
    di = rotate_right16 (di, 1);
    edi += 0xd4c52889;
    __asm ("btr bp, 0xd6");
    __asm ("cmovp cx, si");
    __asm ("clc");
    bh -= 0x41;
    ax >>= 1;
    cl &= 0xf;
    __asm ("shld di, di, cl");
    __asm ("cmpxchg cl, bl");
    ax = al * bh;
    __asm ("sahf");
    __asm ("cmovnp si, si");
    eax += 0xea8009;
    ebx |= ebp;
    bp >>= 1;
    bx -= 0x98d9;
    __asm ("btc ebp, edi");
    bx += 0x476d;
    ch += 4;
    esi >>= 1;
    __asm ("stc");
    ch = rotate_left8 (ch, 1);
    esi *= 0xd87f5da7;
    __asm ("cmc");
    edi = 0xfe6765e9;
    bx = rotate_left16 (bx, 0x95);
    tmp_0 = bp;
    ;
    bp = tmp_0;
    cx >>= cl;
    bh <<= 1;
    edx:eax = eax * ecx;
    __asm ("bts dx, 0xb4");
    edx = ~edx;
    ebx -= 0x6689038c;
    si = rotate_right16 (si, cl);
    __asm ("sahf");
    bx = rotate_left16 (bx, cl);
    ch = ~ch;
    ax = al * ah;
    edx += esi;
    si -= 0x2c62;
    __asm ("shld bp, ax, 1");
    edx = rotate_left32 (edx, 1);
    cl &= 0xf;
    __asm ("shld cx, si, cl");
    if (((edx >> ebx) & 1) >= 0) {
        edx = ebx;
    }
    edi = -edi;
    __asm ("shrd eax, eax, 0xc2");
    ebx ^= 0x6a36b9;
    di += 0x6b8;
    __asm ("bts ecx, ebp");
    __asm ("stc");
    di += cx;
    al--;
    ebx >>= 0x5c;
    bp >>= 0xd6;
    __asm ("btc edx, eax");
    __asm ("clc");
    eax = rotate_left32 (eax, 1);
    bp += 0x6374;
    bx = -bx;
    al = rotate_left8 (al, 0x50);
    __asm ("shld esi, edi, cl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x5b9d037e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049907 */
#include <stdint.h>
 
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
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
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
 
int32_t log_size_7_var_004 (void) {
    eax = 0xc81d6060;
    ebx = 0xeb54990d;
    ecx = 0x77a23c16;
    edx = 0xd741b9c9;
    esi = 0xc007f591;
    edi = 0x4a2ca4a;
    cx = rotate_left16 (cx, cl);
    bp *= 0xfc31;
    __asm ("stc");
    bx += 0x7b42;
    __asm ("stc");
    bx = rotate_right16 (bx, 1);
    ebx <<= 1;
    bh = (ebx < 0) ? 1 : 0;
    __asm ("clc");
    ch -= bh;
    __asm ("stc");
    esi += edx;
    __asm ("shrd bp, si, 1");
    bl += bh;
    edi >>= cl;
    bx = (int16_t) bh;
    ecx = SWAP32 (ecx);
    cl = -cl;
    __asm ("stc");
    ecx -= 0x1de64fc7;
    ebp = ~ebp;
    ah = (ecx > 0) ? 1 : 0;
    cx = rotate_right16 (cx, 0xb7);
    ebp -= 0xdd051c5;
    __asm ("clc");
    ah -= dl;
    ax = al * ah;
    cl &= ah;
    dl = rotate_left8 (dl, 0x47);
    ebp >>= 0x93;
    al >>= cl;
    __asm ("xadd dh, ah");
    __asm ("cmovp esi, ebp");
    tmp_0 = ebx;
    ebx = edi;
    edi = tmp_0;
    __asm ("setno bl");
    edx |= 0x13d1a13f;
    al = (edx <= 0) ? 1 : 0;
    ebx = eax;
    esi >>= 0xcd;
    dh = al;
    __asm ("shrd si, dx, 6");
    si |= 0xf76f;
    dx:ax = ax * ax;
    eax = 0x3f46b888;
    dx:ax = ax * bx;
    ecx *= 0x9ddb8c25;
    bp = rotate_right16 (bp, cl);
    __asm ("shld edx, eax, cl");
    dx:ax = ax * cx;
    cl = rotate_right8 (cl, cl);
    dh = -dh;
    cx >>= 0x13;
    ah -= dh;
    bx >>= 1;
    dx = rotate_left16 (dx, 1);
    cx <<= 1;
    __asm ("clc");
    bp += 0xc3ff;
    __asm ("cmovno edx, ecx");
    si ^= bx;
    __asm ("setp ah");
    __asm ("stc");
    bp = rotate_left16 (bp, 1);
    dl <<= 1;
    __asm ("bts cx, 0xd8");
    __asm ("stc");
    bp = rotate_left16 (bp, 1);
    __asm ("clc");
    edx = rotate_left32 (edx, 1);
    __asm ("clc");
    bx = rotate_right16 (bx, 1);
    dx += 0xe6c1;
    edx = (int32_t) cl;
    ax--;
    al = rotate_right8 (al, 1);
    ax = rotate_left16 (ax, cl);
    bx++;
    __asm ("shld edx, edi, cl");
    dl = ~dl;
    ebp >>= cl;
    ebp >>= 0x33;
    __asm ("shld ebx, edi, 1");
    __asm ("clc");
    ah -= ah;
    __asm ("btc edx, edx");
    __asm ("stc");
    eax = rotate_right32 (eax, 1);
    ch -= 0x79;
    edi -= 0x545a22bc;
    ebx -= 0x105abf8d;
    __asm ("sahf");
    ebp = (int32_t) ax;
    cl = (ebx >= 0) ? 1 : 0;
    esi |= ecx;
    __asm ("stc");
    cl -= bl;
    bl |= 0xa5;
    __asm ("shld esi, eax, 1");
    __asm ("cmovnp edx, ecx");
    __asm ("stc");
    ebp -= ecx;
    bp = -bp;
    __asm ("clc");
    edx = 0x36bcd9c5;
    cx |= di;
    eax >>= cl;
    ebp = -ebp;
    esi = -esi;
    __asm ("clc");
    dx = rotate_left16 (dx, 1);
    ax = rotate_left16 (ax, cl);
    dh = rotate_left8 (dh, 0x8d);
    ebx >>= 0xa4;
    dx:ax = ax * di;
    __asm ("stc");
    cx = rotate_right16 (cx, 1);
    __asm ("clc");
    edx += 0xdffb19d3;
    ebp &= ebp;
    edi -= ebx;
    ax >>= 1;
    cl &= 0xf;
    __asm ("shrd cx, dx, cl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc7443e4f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049c61 */
#include <stdint.h>
 
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
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
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
 
int32_t log_size_7_var_006 (void) {
    eax = 0x9f8565e3;
    ebx = 0x5602bf48;
    ecx = 0x199e2668;
    edx = 0x1efea9ca;
    esi = 0xad923fee;
    edi = 0xe5968004;
    dx = rotate_left16 (dx, 1);
    edx <<= 0x3b;
    __asm ("stc");
    edx -= 0x12145afe;
    cx -= 0xd47c;
    di |= ax;
    bl >>= cl;
    cx = (int16_t) dl;
    ebx += ecx;
    ebx = rotate_right32 (ebx, 0xb1);
    ah >>= cl;
    cl |= al;
    dh = rotate_left8 (dh, cl);
    esi = SWAP32 (esi);
    dx = rotate_right16 (dx, 0x3b);
    eax <<= cl;
    dl = al;
    __asm ("cmpxchg esi, esi");
    dx <<= 0x26;
    esi--;
    __asm ("cwd");
    ah = (bx <= 0xfd94) ? 1 : 0;
    if (bx >= 0xfd94) {
        esi = ebx;
    }
    ecx >>= 1;
    __asm ("clc");
    esi = rotate_left32 (esi, 1);
    __asm ("shrd esi, eax, cl");
    eax = ~eax;
    cl <<= 0xa4;
    dl &= al;
    __asm ("stc");
    si -= dx;
    bp ^= 0x1f82;
    edx = ~edx;
    __asm ("sahf");
    dh &= bh;
    dl &= ah;
    dx *= 0x2c58;
    __asm ("shld edi, eax, 0xe6");
    ch ^= dl;
    if (dl != 0) {
    }
    __asm ("cmovno bx, bx");
    __asm ("clc");
    dl += 0x71;
    __asm ("stc");
    ebx -= 0x5696332d;
    __asm ("bts ebp, 0x19");
    __asm ("clc");
    cl += al;
    di -= 0xf94c;
    __asm ("stc");
    al -= 0x7e;
    __asm ("stc");
    edx += eax;
    ah = rotate_right8 (ah, cl);
    bx = rotate_left16 (bx, 1);
    dh = rotate_right8 (dh, cl);
    cx = (int16_t) ch;
    __asm ("bsf eax, edi");
    bx &= 0x2911;
    __asm ("lahf");
    __asm ("stc");
    si = rotate_right16 (si, 1);
    __asm ("stc");
    si -= 0x39aa;
    ebp = rotate_right32 (ebp, 1);
    eax = rotate_left32 (eax, 1);
    ax &= 0x4856;
    __asm ("clc");
    edi = rotate_left32 (edi, 1);
    edi = rotate_right32 (edi, 0x41);
    tmp_0 = cx;
    cx = si;
    si = tmp_0;
    dx:ax = ax * di;
    dh = (ax >= 0) ? 1 : 0;
    __asm ("cmpxchg edi, eax");
    cx <<= 0x3d;
    ax = al * bh;
    __asm ("clc");
    si += dx;
    if (si <= 0) {
        si = ax;
    }
    if (si > 0) {
        dx = di;
    }
    eax += esi;
    bx >>= cl;
    edi++;
    eax = 0x1c3a753f;
    bx += cx;
    __asm ("shld ecx, esi, 0x62");
    ebx >>= cl;
    ecx <<= cl;
    cx |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / cx;
    dx = dx:ax % cx;
    __asm ("shrd esi, ebp, 0x84");
    ch = rotate_left8 (ch, cl);
    __asm ("bsf edx, eax");
    ax = al * ah;
    al |= 0xc0;
    ax &= 0x3fff;
    al = ax / al;
    ah = ax % al;
    __asm ("shld di, dx, 1");
    bp >>= 0xd3;
    cx = rotate_right16 (cx, 0x61);
    bh = rotate_right8 (bh, 1);
    __asm ("xadd si, bp");
    __asm ("clc");
    cl += 0x10;
    bp *= 0x84b2;
    eax &= edi;
    __asm ("btr dx, 0x1a");
    bp -= si;
    if ((ebp & 0x6883be94) <= 0) {
        ax = cx;
    }
    __asm ("clc");
    ax += bp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x228a2400;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049fd0 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
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
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_7_var_008 (void) {
    eax = 0xae264605;
    ebx = 0x7440890a;
    ecx = 0xa1da0933;
    edx = 0x66ca8fdd;
    esi = 0x68265549;
    edi = 0xe980a1d5;
    cl &= 0xf;
    __asm ("shld bx, si, cl");
    ah <<= 1;
    edi = -edi;
    ecx += ebp;
    __asm ("btr si, 0xf8");
    esi = rotate_right32 (esi, cl);
    bx <<= 0x39;
    eax <<= 0x17;
    __asm ("cmpxchg ax, dx");
    __asm ("bts bx, 0x95");
    __asm ("stc");
    esi += 0x660dec8c;
    __asm ("cmovno esi, edi");
    bx = eax + eax + 0x19d22b1a;
    cl -= 0x99;
    ebx = (int32_t) bx;
    al |= ah;
    if (al >= 0) {
        ebx = esi;
    }
    __asm ("clc");
    bh -= bl;
    di = rotate_left16 (di, 0x92);
    bl ^= ch;
    ax = al * dl;
    __asm ("setno dl");
    bh &= 0x6b;
    di = rotate_right16 (di, 0x54);
    __asm ("btr cx, 0xc9");
    cl = ~cl;
    edx = rotate_left32 (edx, cl);
    dx:ax = ax * bp;
    si = rotate_left16 (si, 0xcd);
    al &= 0xce;
    dh = rotate_left8 (dh, cl);
    dx:ax = ax * dx;
    __asm ("shrd ebx, ecx, 0x6d");
    edx += ebx;
    __asm ("stc");
    bl += bh;
    di = (int16_t) ch;
    if (bl > 0) {
        dx = cx;
    }
    if (bl <= 0) {
        esi = ebx;
    }
    cl = ((si & di) > 0) ? 1 : 0;
    __asm ("cmovs si, di");
    cx <<= cl;
    __asm ("shld esi, ecx, cl");
    bp = rotate_left16 (bp, 1);
    __asm ("shrd si, cx, 1");
    __asm ("stc");
    ebx = rotate_left32 (ebx, 1);
    __asm ("xadd cx, bx");
    bl = (cx != 0) ? 1 : 0;
    __asm ("shld edx, eax, 1");
    __asm ("bts edx, 0xe7");
    __asm ("shrd si, cx, 0xd");
    ax = -ax;
    edx = -edx;
    edx = esi + edi*4;
    cl = (cx >= 0) ? 1 : 0;
    esi = rotate_left32 (esi, 1);
    edx:eax = eax * ecx;
    eax = rotate_left32 (eax, 0x5e);
    ebx--;
    __asm ("bsr ebp, edx");
    edx = rotate_left32 (edx, 1);
    __asm ("stc");
    si = rotate_left16 (si, 1);
    __asm ("cmovno eax, ebx");
    dh = rotate_left8 (dh, 0x17);
    ax ^= di;
    __asm ("btc dx, 0xc5");
    ecx += esi;
    __asm ("stc");
    ebp = rotate_left32 (ebp, 1);
    __asm ("shrd esi, edx, 0x32");
    __asm ("shrd esi, ebp, 1");
    __asm ("clc");
    ax = rotate_right16 (ax, 1);
    dl |= 0xc0;
    ax &= 0x3fff;
    al = ax / dl;
    ah = ax % dl;
    bx |= cx;
    __asm ("setp ah");
    edx *= 0x4c370c16;
    tmp_0 = ebp;
    ebp = ebx;
    ebx = tmp_0;
    edx++;
    __asm ("cmovno ax, ax");
    __asm ("clc");
    si = rotate_right16 (si, 1);
    cl--;
    __asm ("seto dl");
    __asm ("clc");
    edi -= 0x95a71a4a;
    __asm ("clc");
    ecx -= ebx;
    eax = rotate_left32 (eax, 0xde);
    esi &= 0x49a95b55;
    __asm ("bts si, bp");
    ax = rotate_left16 (ax, 0x9e);
    tmp_1 = dl;
    dl = bl;
    bl = tmp_1;
    cx += dx;
    if (cx > 0) {
        edx = ebx;
    }
    bp += 0xd07b;
    edi ^= 0xc078881a;
    __asm ("stc");
    ebx -= ebx;
    ebp -= eax;
    ax++;
    ax = 0xb17a;
    al >>= 1;
    __asm ("shld ebx, edi, 1");
    bh <<= cl;
    ebx <<= 0xe7;
    __asm ("shrd esi, eax, 1");
    di = rotate_right16 (di, 0x83);
    bl >>= cl;
    cx >>= 1;
    ah &= 0x72;
    if (ah <= 0) {
    }
    ebp = rotate_right32 (ebp, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xffb08043;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void assert_fail (void) {
    assert_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_10_funcs_of_size_128/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x3ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
