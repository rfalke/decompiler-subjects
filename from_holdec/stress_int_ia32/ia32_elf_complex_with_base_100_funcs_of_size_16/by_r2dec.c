/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049360 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049397 ();
    ebx += 0x5c8c;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2f60, ebx - 0x2f00);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049397 */
#include <stdint.h>
 
void fcn_08049397 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x80493c0 */
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
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049400 */
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
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049440 */
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
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049470 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804c100 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804955d */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_002 (void) {
    eax = 0x5cf11f05;
    ebx = 0x7d434b8b;
    ecx = 0x529aa9c2;
    edx = 0xb48c8792;
    esi = 0xb59bcc2;
    edi = 0x3fae0aa4;
    si = -si;
    __asm ("shrd dx, dx, 9");
    ax <<= 1;
    di |= ax;
    ch += dl;
    ebp -= 0xada1b751;
    al = dh;
    __asm ("clc");
    si = rotate_left16 (si, 1);
    if (((bp >> 0xa) & 1) < 0) {
        di = si;
    }
    ecx >>= cl;
    di -= 0xe362;
    cl >>= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa09852c8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049476 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_000 (void) {
    eax = 0x3baca595;
    ebx = 0x2879483c;
    ecx = 0x4c53054a;
    edx = 0x3b1f59e5;
    esi = 0xefec61ab;
    edi = 0xfb1a7af8;
    __asm ("btc bx, bx");
    dl <<= 0x17;
    ebx -= 0x4f068b73;
    bp = edx + ebp + 0x82;
    dh >>= 1;
    __asm ("stc");
    al = rotate_left8 (al, 1);
    si = dx;
    edi = (int32_t) ch;
    ecx |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    si = ~si;
    __asm ("btc edi, 0x4f");
    ecx = -ecx;
    __asm ("setns dh");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc789f1c6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x80493b0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a4c6 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t log_size_4_var_037 (void) {
    eax = 0xc31ef3c3;
    ebx = 0xf52964be;
    ecx = 0x79ccde87;
    edx = 0xf05ec66e;
    esi = 0xeef1abd;
    edi = 0x4549cd38;
    bl ^= 0xb9;
    bl = rotate_right8 (bl, 1);
    __asm ("shrd esi, edi, 0xa9");
    dx = 0x5489;
    ecx++;
    __asm ("btr si, ax");
    edi >>= 1;
    cl &= 0xf;
    __asm ("shld ax, dx, cl");
    __asm ("bsr esi, esi");
    bp &= 0x6032;
    if (bp != 0) {
        esi = eax;
    }
    __asm ("shld bp, di, 1");
    __asm ("seto al");
    dx:ax = ax * ax;
    ecx = SWAP32 (ecx);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb0feefb6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a3e5 */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_035 (void) {
    eax = 0xc4128b7a;
    ebx = 0x18667e15;
    ecx = 0xa334cc9f;
    edx = 0x96751fe8;
    esi = 0xc15be244;
    edi = 0xd74dcd91;
    cl >>= 3;
    ch >>= 0x80;
    __asm ("btc ax, 0xec");
    __asm ("btc ebp, eax");
    ecx -= 0x11488427;
    ch = rotate_right8 (ch, 1);
    __asm ("shrd edx, edx, 1");
    ecx = rotate_left32 (ecx, cl);
    __asm ("shrd eax, eax, 0x1b");
    __asm ("shrd edx, esi, 0x93");
    edx:eax = (int64_t) eax;
    ax = al * bh;
    if (cl < 0x7e) {
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x98076fbf;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b5e3 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_076 (void) {
    eax = 0x1ed09abe;
    ebx = 0x23412d;
    ecx = 0xf93afaec;
    edx = 0x522b1abe;
    esi = 0xabcd6355;
    edi = 0x1d4659b7;
    edi <<= cl;
    __asm ("shld edx, ebx, cl");
    __asm ("bts esi, 0xfe");
    __asm ("stc");
    bh -= 0x3f;
    ebx *= 0xaa2bac91;
    bl = (bh < 0) ? 1 : 0;
    __asm ("cmpxchg dh, dh");
    __asm ("shld di, dx, 5");
    __asm ("stc");
    ecx += ebp;
    esi = edi * 0x74d90751;
    cx ^= bp;
    esi = rotate_left32 (esi, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd0ec4511;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a222 */
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
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_031 (void) {
    eax = 0x6b368d2;
    ebx = 0x41652b42;
    ecx = 0xa1e7953c;
    edx = 0x15f1f60f;
    esi = 0x76683afd;
    edi = 0xb301935b;
    dh ^= cl;
    __asm ("stc");
    bl = rotate_right8 (bl, 1);
    __asm ("btc cx, bp");
    ebx = eax * 0xfd64c1c3;
    eax = rotate_right32 (eax, cl);
    dx = rotate_left16 (dx, cl);
    bl = rotate_right8 (bl, cl);
    __asm ("btr edx, eax");
    eax += eax;
    if (eax <= 0) {
    }
    ecx = 0xf1920212;
    cx = ~cx;
    if (((ecx >> eax) & 1) <= 0) {
        ebx = edi;
    }
    ax >>= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x25f3c6ae;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a5a8 */
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
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t log_size_4_var_039 (void) {
    eax = 0xe495052e;
    ebx = 0x3d6ac4e1;
    ecx = 0xa9add4cb;
    edx = 0x6122ba88;
    esi = 0x9b6d39c1;
    edi = 0x942acf08;
    ebx = (int32_t) bp;
    al += 0xbb;
    ebp = rotate_left32 (ebp, cl);
    cl &= 0xf;
    __asm ("shrd di, dx, cl");
    ax = al * al;
    esi = rotate_right32 (esi, cl);
    ebx = (int32_t) si;
    dh = rotate_left8 (dh, 1);
    __asm ("clc");
    bh = rotate_right8 (bh, 1);
    cx |= ax;
    edi = SWAP32 (edi);
    si += dx;
    __asm ("btr esi, edx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x63c6f385;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b6cb */
#include <stdint.h>
 
int32_t log_size_4_var_078 (void) {
    eax = 0xd36512e0;
    ebx = 0x1ff4690f;
    ecx = 0xbc8049cf;
    edx = 0x9df68e8c;
    esi = 0xefd76027;
    edi = 0xe549969f;
    eax = (int32_t) ax;
    dl >>= 0xc0;
    ecx++;
    tmp_0 = edi;
    edi = ebp;
    ebp = tmp_0;
    cx -= bp;
    ecx >>= 0x51;
    edi ^= 0x70268ab6;
    __asm ("stc");
    al += ch;
    si = (int16_t) dh;
    esi >>= cl;
    __asm ("bts ecx, esi");
    ax++;
    if (ax > 0) {
        ebx = ecx;
    }
    ax >>= cl;
    si = (int16_t) cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xcfd40d92;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a30a */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_033 (void) {
    eax = 0x47cfd25b;
    ebx = 0x2625a4d2;
    ecx = 0x4f4878f2;
    edx = 0x42a5bd48;
    esi = 0xe607f910;
    edi = 0x3e887777;
    si--;
    ecx |= ebx;
    __asm ("stc");
    ebx = rotate_right32 (ebx, 1);
    ax = di;
    di |= 0xb98f;
    bx = rotate_right16 (bx, 1);
    ah >>= cl;
    ax = rotate_right16 (ax, 1);
    if (ah >= 0) {
    }
    __asm ("shld ecx, esi, cl");
    bp += 0x3297;
    ah -= 0x3f;
    bx *= 0xe63f;
    if (ah >= 0) {
    }
    ecx += eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x22da4224;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b346 */
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
 
int32_t log_size_4_var_070 (void) {
    eax = 0xec54c47c;
    ebx = 0x6e64f43d;
    ecx = 0x1341670f;
    edx = 0x9153399e;
    esi = 0xc29b3418;
    edi = 0x1cfe34f;
    di = dx * 0xedda;
    eax *= 0xbf346ed6;
    __asm ("btc ecx, 0x49");
    __asm ("clc");
    di = rotate_left16 (di, 1);
    ah <<= 1;
    di >>= 0x5c;
    bl = rotate_left8 (bl, 1);
    __asm ("stc");
    ah -= 3;
    __asm ("cmpxchg ch, dh");
    __asm ("stc");
    cl += 0xbd;
    if (cl == 0) {
        edx = ecx;
    }
    if (cl < 0) {
        bx = si;
    }
    if (cl == 0) {
        ax = cx;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7bf121c8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b431 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_072 (void) {
    eax = 0x2a1820ad;
    ebx = 0x4464cb3e;
    ecx = 0x4a967021;
    edx = 0x7f34a2cc;
    esi = 0xb1d5086a;
    edi = 0x7d27994b;
    esi >>= cl;
    ch = rotate_left8 (ch, 1);
    cl += 0x49;
    bl++;
    ax >>= 1;
    dx:ax = ax * cx;
    bl = ~bl;
    __asm ("clc");
    bp -= si;
    __asm ("stc");
    al -= al;
    al &= bh;
    dl = (al > 0) ? 1 : 0;
    cl >>= 0x8f;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1bc30a10;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b508 */
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
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_074 (void) {
    eax = 0xd3e92413;
    ebx = 0xa22222da;
    ecx = 0x46ab88f;
    edx = 0x6fb1c9a4;
    esi = 0xeaab10b0;
    edi = 0x56866eb7;
    di = ~di;
    esi = SWAP32 (esi);
    di &= 0xab3;
    bx = rotate_right16 (bx, 1);
    cl = ~cl;
    esi >>= 0x36;
    cl &= 0xf;
    __asm ("shrd cx, si, cl");
    __asm ("stc");
    esi -= 0xdd19df62;
    __asm ("shrd eax, ecx, 0xa4");
    __asm ("bts ecx, 0xa0");
    eax >>= cl;
    bh = rotate_right8 (bh, 1);
    ebx = SWAP32 (ebx);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x69600993;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a0ea */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_028 (void) {
    eax = 0xba53946d;
    ebx = 0xce1d0521;
    ecx = 0xce5f55a7;
    edx = 0x9145510f;
    esi = 0x8361662c;
    edi = 0xfcb597e5;
    __asm ("bsr edi, ebx");
    di >>= cl;
    ax = al * cl;
    cx |= 0xbcf5;
    __asm ("stc");
    dl = rotate_right8 (dl, 1);
    __asm ("clc");
    cx = rotate_right16 (cx, 1);
    __asm ("stc");
    cl += 0x71;
    esi--;
    __asm ("lahf");
    bx = rotate_right16 (bx, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe1b2be2e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b2d4 */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_069 (void) {
    eax = 0xa54301b4;
    ebx = 0x40a9801;
    ecx = 0x1d60ec03;
    edx = 0xdad52fd5;
    esi = 0x6ceaae40;
    edi = 0x2a5d3dff;
    __asm ("clc");
    si -= si;
    __asm ("clc");
    bl -= 0xad;
    __asm ("clc");
    ecx = rotate_left32 (ecx, 1);
    __asm ("shld bx, si, 1");
    __asm ("cmovs di, si");
    al = rotate_right8 (al, 1);
    edx = rotate_left32 (edx, cl);
    cl -= bh;
    __asm ("shrd di, bp, 0xf");
    bx >>= 0x6d;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9c6a5b32;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a001 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_026 (void) {
    eax = 0x79dcbf98;
    ebx = 0xe8542517;
    ecx = 0xe79a23ed;
    edx = 0xa5b36a94;
    esi = 0x4b4d9c50;
    edi = 0x7b7aa463;
    ebp ^= edi;
    si = rotate_right16 (si, cl);
    __asm ("shrd dx, bp, 0xd");
    ebp = edi * 0xe3377f58;
    eax |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / eax;
    edx = edx:eax % eax;
    ebp++;
    __asm ("setns bh");
    __asm ("cmovp edi, edi");
    bx >>= 1;
    ebp = edx * 0xa07a8a64;
    dx >>= cl;
    eax = (int32_t) ax;
    __asm ("shrd ebp, ebp, 1");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x66155d93;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b11a */
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
 
int32_t log_size_4_var_065 (void) {
    eax = 0x9ea8be06;
    ebx = 0x5f01dc16;
    ecx = 0xd4d2761d;
    edx = 0x7f4dbea5;
    esi = 0x8f6a6b28;
    edi = 0x7bc9ba1f;
    __asm ("btr si, 0x3f");
    eax += edi;
    esi <<= cl;
    si >>= 0xb7;
    __asm ("btr ax, 0xde");
    dl = rotate_left8 (dl, 1);
    ax >>= cl;
    __asm ("clc");
    cl |= 0xfa;
    ch -= al;
    bl = (ch < 0) ? 1 : 0;
    __asm ("clc");
    si = rotate_right16 (si, 1);
    bl |= 0xc9;
    edx *= 0xbca29b04;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb2979b22;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049e39 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_022 (void) {
    eax = 0x2b5b4976;
    ebx = 0x29d284dd;
    ecx = 0xd9441cf;
    edx = 0x798039a0;
    esi = 0x9805a1c1;
    edi = 0x83f52d8;
    ebp--;
    ecx = rotate_right32 (ecx, cl);
    edx = (int32_t) cl;
    di >>= 0x8c;
    edx += 0xcd888746;
    __asm ("stc");
    ax -= si;
    ecx >>= cl;
    dx = bp * 0x9ddf;
    __asm ("shrd ebx, esi, 0xfe");
    al >>= 0x2f;
    cl &= 0xf;
    __asm ("shrd si, bp, cl");
    dx:ax = ax * cx;
    __asm ("stc");
    dx += 0x701e;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x75e6dcb2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b1fc */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_067 (void) {
    eax = 0x2bd6e75d;
    ebx = 0xd5764f8e;
    ecx = 0x994ae7c0;
    edx = 0xdef94f02;
    esi = 0x6bd30754;
    edi = 0x58219d16;
    __asm ("cmpxchg cx, cx");
    if (((ecx >> ebx) & 1) <= 0) {
        esi = ebp;
    }
    bh = (((ecx >> ebx) & 1) == 0) ? 1 : 0;
    edi += ebx;
    cl = (edi >= 0) ? 1 : 0;
    dl = (edi != 0) ? 1 : 0;
    cl <<= cl;
    ch = rotate_left8 (ch, 0x68);
    ecx = (int32_t) cl;
    ecx = rotate_right32 (ecx, 1);
    edx:eax = eax * eax;
    cl = rotate_right8 (cl, 1);
    edi = rotate_right32 (edi, cl);
    ecx <<= 0x33;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x4641ca1c;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049f1a */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_024 (void) {
    eax = 0x8e2bf64;
    ebx = 0xf35d28cd;
    ecx = 0x4196959e;
    edx = 0x167799bb;
    esi = 0xf3377ac6;
    edi = 0x16c0df68;
    bl = rotate_left8 (bl, 0x9c);
    bl = rotate_left8 (bl, cl);
    cx = ebp + ebx*8 - 0x73fd9a59;
    cx = 0xcd1e;
    ax = dx;
    edx -= edx;
    __asm ("clc");
    edi = rotate_left32 (edi, 1);
    __asm ("shld cx, di, 0");
    ebx >>= cl;
    __asm ("shld dx, cx, 6");
    edx = (int32_t) dx;
    __asm ("xadd ebp, edi");
    bl >>= 0x30;
    bp <<= cl;
    bh &= bh;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x41b3364;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804c108 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2eeb;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804af54 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
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
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_061 (void) {
    eax = 0x588aefbb;
    ebx = 0xf86c35a7;
    ecx = 0x9f2e7616;
    edx = 0x41590572;
    esi = 0x84199372;
    edi = 0x4ce5f5d;
    esi = SWAP32 (esi);
    tmp_0 = cl;
    cl = bh;
    bh = tmp_0;
    edi >>= cl;
    cl &= 0xf;
    __asm ("shld di, dx, cl");
    __asm ("cmpxchg dh, cl");
    ah = rotate_left8 (ah, 1);
    di = rotate_right16 (di, 0x36);
    bx ^= 0xb823;
    __asm ("stc");
    dl += 0xd4;
    edi = rotate_right32 (edi, cl);
    cl &= 0xf;
    __asm ("shld ax, si, cl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa95afb2d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b038 */
#include <stdint.h>
 
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
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_063 (void) {
    eax = 0xc75eac7d;
    ebx = 0x850bf8c2;
    ecx = 0xaa96b93a;
    edx = 0xbc315e2b;
    esi = 0x2e8020b7;
    edi = 0xcdf55a17;
    ebp = rotate_left32 (ebp, 1);
    bx = ~bx;
    dx >>= 1;
    __asm ("clc");
    di -= 0x5b09;
    edi <<= 1;
    bp = rotate_left16 (bp, 1);
    __asm ("stc");
    ah = rotate_right8 (ah, 1);
    cx >>= cl;
    tmp_0 = bh;
    bh = ah;
    ah = tmp_0;
    __asm ("xadd ax, ax");
    ecx = 0x60181e26;
    edx:eax = eax * ebx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xefceae12;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049d58 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_020 (void) {
    eax = 0x2f29066a;
    ebx = 0xb730e046;
    ecx = 0x8c2f18ce;
    edx = 0xf5fd427e;
    esi = 0x523d0f12;
    edi = 0x89d2cd31;
    __asm ("sahf");
    __asm ("btc edi, ebx");
    __asm ("btc ebx, edx");
    eax = rotate_right32 (eax, 1);
    edx = (int32_t) si;
    dx -= 0x3dcd;
    __asm ("xadd ebp, edi");
    __asm ("cmpxchg ch, dh");
    ebp -= ecx;
    __asm ("stc");
    bh += 0xac;
    bx++;
    __asm ("stc");
    ax -= dx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb11f9e5e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804acca */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_055 (void) {
    eax = 0xadd154e4;
    ebx = 0x3d7b076;
    ecx = 0xe22dabaf;
    edx = 0x27ef6fbe;
    esi = 0xf2f164;
    edi = 0x962a07b0;
    ebp >>= cl;
    ax = (int16_t) al;
    esi += 0xe7d5f341;
    __asm ("clc");
    __asm ("btr ax, 0xd7");
    dh = ~dh;
    di >>= 1;
    __asm ("stc");
    ax += di;
    __asm ("clc");
    bp += 0x975b;
    ax += di;
    __asm ("stc");
    bh += ah;
    ah = rotate_right8 (ah, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x3ab8db36;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804bfbe */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_098 (void) {
    eax = 0xcf438efb;
    ebx = 0x5920c86a;
    ecx = 0x5fe699db;
    edx = 0xa51676ef;
    esi = 0x1b478ce0;
    edi = 0x9224cb4f;
    ch = -ch;
    __asm ("clc");
    bl -= 0xc1;
    __asm ("bsr ebp, ebx");
    ebp >>= 0xdf;
    edi += ecx;
    __asm ("clc");
    di -= 0x61fe;
    bx = 0x49e9;
    bp >>= 0x68;
    edi ^= ecx;
    __asm ("xadd ebx, ebx");
    bh = rotate_right8 (bh, cl);
    si >>= 0xd1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x4fb6b88d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804abe0 */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_053 (void) {
    eax = 0x8b4cc7ea;
    ebx = 0x924aa5b0;
    ecx = 0xf3f431ef;
    edx = 0x8db3d484;
    esi = 0x6896291f;
    edi = 0x2c8d6609;
    bx = ebp + ecx*2;
    ax = al * bl;
    __asm ("btr bx, 0x63");
    __asm ("xadd ecx, ebx");
    di |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / di;
    dx = dx:ax % di;
    edx = -edx;
    __asm ("clc");
    dl -= ch;
    __asm ("cmovs ebx, ebx");
    eax = ebp;
    ebp = rotate_right32 (ebp, 1);
    ax = rotate_right16 (ax, 0x12);
    edi = ~edi;
    __asm ("btr bx, 0xcf");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa61307e4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804bdf4 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_094 (void) {
    eax = 0xcfcd7ab3;
    ebx = 0xde865c2d;
    ecx = 0xa07cf43;
    edx = 0xe8359c7f;
    esi = 0x336ebd5e;
    edi = 0x75e56577;
    ah += 0x2b;
    dx:ax = ax * ax;
    dx:ax = ax * dx;
    ax = (int16_t) bh;
    __asm ("shrd edx, ecx, cl");
    __asm ("xadd dl, bl");
    __asm ("stc");
    cx = rotate_left16 (cx, 1);
    __asm ("shld edi, ebp, 1");
    __asm ("clc");
    dl -= ch;
    bx &= si;
    __asm ("shrd ax, dx, 3");
    dl >>= 9;
    __asm ("btr ax, 0x1c");
    dl = (dl < 0) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xea6382c9;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804ad9d */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_057 (void) {
    eax = 0xe7c22716;
    ebx = 0x1531560d;
    ecx = 0x6b7dfcc;
    edx = 0xcb7063c6;
    esi = 0x53747bbd;
    edi = 0x91c6b889;
    ebp |= ebp;
    eax = -eax;
    edi >>= 1;
    __asm ("shrd bp, di, 1");
    dl |= dh;
    dl = (cx > 0x7e7) ? 1 : 0;
    edx >>= 1;
    bp <<= cl;
    bl -= 0x67;
    __asm ("clc");
    ebp = rotate_right32 (ebp, 1);
    bh >>= 1;
    __asm ("xadd edx, esi");
    edx ^= eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xffa27f7;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804bedf */
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
 
int32_t log_size_4_var_096 (void) {
    eax = 0x36299558;
    ebx = 0x3ed09836;
    ecx = 0x6522762f;
    edx = 0x3a609a81;
    esi = 0x27c7565;
    edi = 0x4f1645b5;
    ax = al * al;
    bp = rotate_left16 (bp, 0x82);
    bl >>= 0xb1;
    cl <<= cl;
    __asm ("cwd");
    __asm ("bsf ebp, ecx");
    ebx = rotate_right32 (ebx, 1);
    ecx = (int32_t) cl;
    tmp_0 = bp;
    bp = si;
    si = tmp_0;
    __asm ("clc");
    esi -= 0x80b80327;
    tmp_1 = ax;
    ax = cx;
    cx = tmp_1;
    dh = rotate_left8 (dh, 0x8d);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x60cc2a3c;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804aafc */
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
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_051 (void) {
    eax = 0x683c143d;
    ebx = 0x221142eb;
    ecx = 0x7674db8f;
    edx = 0x52d1ceee;
    esi = 0xcd13f3ac;
    edi = 0x84d91cf2;
    al <<= cl;
    ax--;
    cx = rotate_left16 (cx, 0x78);
    ax <<= 1;
    __asm ("cmovo esi, ecx");
    __asm ("btc ax, 0x46");
    dh++;
    __asm ("stc");
    edi += 0x4f533c29;
    ebp = rotate_right32 (ebp, 0x71);
    bx -= dx;
    ebp = rotate_left32 (ebp, cl);
    ebp = (int32_t) si;
    ah = ~ah;
    __asm ("shld ebx, edi, 0x4a");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1890704b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049ad0 */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_014 (void) {
    eax = 0xad33ca4e;
    ebx = 0x96013822;
    ecx = 0xd1a392a1;
    edx = 0x8b304313;
    esi = 0x22c954f1;
    edi = 0xfe91e378;
    __asm ("btr ecx, esi");
    __asm ("clc");
    ecx += edi;
    dl -= ah;
    __asm ("clc");
    ax = rotate_right16 (ax, 1);
    al &= dl;
    __asm ("stc");
    cl += 0xab;
    __asm ("clc");
    ch = rotate_right8 (ch, 1);
    eax = rotate_left32 (eax, cl);
    ax += di;
    if ((dx & 0x8b2f) < 0) {
    }
    __asm ("cmovo cx, cx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf025cda2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049ba9 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_016 (void) {
    eax = 0xe6286fad;
    ebx = 0x1388dee8;
    ecx = 0xa5645b3e;
    edx = 0xb15fdfb1;
    esi = 0x9ae7d9f8;
    edi = 0xe7dca8bf;
    edi = rotate_right32 (edi, cl);
    cx = (int16_t) ch;
    ebp = rotate_left32 (ebp, cl);
    tmp_0 = bp;
    bp = bx;
    bx = tmp_0;
    __asm ("bts ebx, 0x85");
    al += bh;
    esi -= eax;
    ah = (esi != 0) ? 1 : 0;
    if (esi < 0) {
    }
    dl >>= cl;
    edx = (int32_t) bl;
    al >>= 1;
    __asm ("stc");
    eax = rotate_left32 (eax, 1);
    ebx = (int32_t) al;
    bx = 0x68dc;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc7c1587b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804bc21 */
#include <stdint.h>
 
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
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_090 (void) {
    eax = 0x3d573881;
    ebx = 0x57573615;
    ecx = 0xc1f29b6e;
    edx = 0x2c978632;
    esi = 0x3f1df09c;
    edi = 0xe862198a;
    cx |= si;
    bh = (cx >= 0) ? 1 : 0;
    dl += cl;
    dx = rotate_left16 (dx, cl);
    __asm ("bts ecx, ebx");
    ch = rotate_right8 (ch, 1);
    __asm ("clc");
    ebp -= eax;
    ah = (ebp <= 0) ? 1 : 0;
    edi = rotate_left32 (edi, 0x34);
    eax = -eax;
    cl -= 0x56;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf615492d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049c7d */
#include <stdint.h>
 
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
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_018 (void) {
    eax = 0x3d62265a;
    ebx = 0x57c00959;
    ecx = 0xe399506b;
    edx = 0x5f61f75f;
    esi = 0x2b87c781;
    edi = 0x446337b4;
    si++;
    ch = rotate_left8 (ch, cl);
    bh = 0xe9;
    cl = -cl;
    bx = (int16_t) dl;
    __asm ("xadd di, di");
    __asm ("stc");
    edx = rotate_left32 (edx, 1);
    __asm ("bsf ebp, edx");
    __asm ("xadd bp, ax");
    si = rotate_left16 (si, 1);
    dl |= 0xc0;
    ax &= 0x3fff;
    al = ax / dl;
    ah = ax % dl;
    eax = rotate_left32 (eax, 0x14);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x6a0c6cd9;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804bd04 */
#include <stdint.h>
 
int32_t log_size_4_var_092 (void) {
    eax = 0x77db308d;
    ebx = 0x9d51a7c8;
    ecx = 0x8a32e3b4;
    edx = 0x4e962687;
    esi = 0xeb60ce24;
    edi = 0x689c13a9;
    esi = (int32_t) bh;
    edx:eax = (int64_t) eax;
    __asm ("clc");
    ax += 0xcb7;
    __asm ("btc bp, bx");
    bx >>= 8;
    __asm ("shld dx, cx, 0xa");
    ch++;
    bp = ~bp;
    ebx |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    esi += 0xf6130592;
    if (esi == 0) {
        dx = bx;
    }
    ch >>= 0xc8;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9a986283;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804ae7a */
#include <stdint.h>
 
int32_t log_size_4_var_059 (void) {
    eax = 0x4c145a6a;
    ebx = 0xd9c4df80;
    ecx = 0x3bf0ba09;
    edx = 0x4f691ede;
    esi = 0x6a1c2349;
    edi = 0x9518c791;
    cx *= 0xad12;
    dh = ~dh;
    ebx |= ebp;
    dl >>= cl;
    ax = al * ah;
    cl >>= cl;
    if (bx < 0xa82c) {
        esi = edi;
    }
    __asm ("shrd si, bp, 0xe");
    ebp |= edx;
    cl &= 0xf;
    __asm ("shld ax, dx, cl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x45fa434d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x80499ea */
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
 
int32_t log_size_4_var_012 (void) {
    eax = 0xa84bde39;
    ebx = 0x3b416e4;
    ecx = 0x13b02aa0;
    edx = 0xeb83b0f;
    esi = 0xbbcdd10e;
    edi = 0x9ec13cf5;
    bp >>= 0x66;
    al = -al;
    ebx = rotate_left32 (ebx, 0x39);
    edx |= 0x35227c38;
    __asm ("clc");
    eax = rotate_right32 (eax, 1);
    cx = rotate_right16 (cx, cl);
    __asm ("shrd ebx, edx, 1");
    ebx = 0x2d774f36;
    edx:eax = eax * edx;
    ebp = rotate_right32 (ebp, cl);
    ecx >>= 1;
    di >>= cl;
    edx >>= 1;
    cl = rotate_left8 (cl, 0x42);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7ff88f7a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049905 */
#include <stdint.h>
 
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
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_010 (void) {
    eax = 0x92269f65;
    ebx = 0x64c4124e;
    ecx = 0xcf2b437d;
    edx = 0x6cde349c;
    esi = 0x9843f9dc;
    edi = 0x60153278;
    ax = al * al;
    bx = rotate_left16 (bx, 1);
    ecx >>= cl;
    bh -= 0x1a;
    ebp |= 0x3c05bf57;
    if (ebp == 0) {
        di = dx;
    }
    if (ebp <= 0) {
        esi = eax;
    }
    ebx = 0;
    tmp_0 = ebx;
    ebx = ebp;
    ebp = tmp_0;
    ecx = rotate_left32 (ecx, 0x75);
    edx:eax = eax * edi;
    __asm ("cmovo di, cx");
    bh++;
    __asm ("stc");
    edx = rotate_right32 (edx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xbaa265c6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804bbb6 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_089 (void) {
    eax = 0x902642f8;
    ebx = 0x3f12acaa;
    ecx = 0xf9e935c3;
    edx = 0x8bb56323;
    esi = 0xd31c25e4;
    edi = 0xb03ae3b3;
    __asm ("clc");
    bp -= 0x4a68;
    dx = si * 0xf459;
    edi -= edi;
    __asm ("clc");
    dh -= 0xbc;
    dl += cl;
    if (dl >= 0) {
    }
    tmp_0 = ebx;
    ebx = edx;
    edx = tmp_0;
    __asm ("cmovs bx, di");
    dl = rotate_right8 (dl, 0x9e);
    __asm ("clc");
    eax -= edx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe4f14325;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a8ca */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_046 (void) {
    eax = 0x432fe2d6;
    ebx = 0x3221e902;
    ecx = 0xc1b9c5de;
    edx = 0xeeb72c1;
    esi = 0xdce09c19;
    edi = 0x259bed51;
    __asm ("btc ax, dx");
    bx <<= cl;
    ebx &= 0x4ef893be;
    eax >>= 1;
    edx >>= 0xad;
    bp |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / bp;
    dx = dx:ax % bp;
    __asm ("clc");
    dx -= bx;
    __asm ("setnp bh");
    dl = rotate_right8 (dl, 1);
    ah++;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc1833c25;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804bace */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_087 (int32_t arg_6h) {
    eax = 0x75a9ca60;
    ebx = 0x1bc5f0dc;
    ecx = 0x2d00f3b7;
    edx = 0x8b77019c;
    esi = 0xcf4a4690;
    edi = 0xa3da3148;
    ebx = ebp + 6;
    ecx = rotate_left32 (ecx, 1);
    eax = rotate_left32 (eax, 1);
    __asm ("stc");
    bx = rotate_left16 (bx, 1);
    __asm ("shld dx, di, 1");
    dh -= 0x86;
    di >>= cl;
    bp |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / bp;
    dx = dx:ax % bp;
    al--;
    eax ^= ebx;
    cx = rotate_left16 (cx, 0xbc);
    ch >>= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x51dee628;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a7e4 */
#include <stdint.h>
 
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
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_044 (void) {
    eax = 0x5653cc79;
    ebx = 0xff2b1bde;
    ecx = 0x2e2b9964;
    edx = 0xa90aded8;
    esi = 0xa71ae0e4;
    edi = 0x97793f7b;
    bp = rotate_right16 (bp, cl);
    bl -= ah;
    ax = rotate_left16 (ax, cl);
    edi = ecx * 0xd973e4aa;
    ch = rotate_right8 (ch, 1);
    __asm ("bts esi, eax");
    ax++;
    __asm ("shld edi, ebx, 1");
    __asm ("stc");
    ax += 0xaf7;
    cx = 0x2530;
    if (ax >= 0) {
        edx = esi;
    }
    bp = ~bp;
    ebp += 0x19f7d920;
    __asm ("stc");
    bp = rotate_left16 (bp, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2a70aacf;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049886 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_009 (void) {
    eax = 0xf5af0b44;
    ebx = 0xffa5ca11;
    ecx = 0x88221d85;
    edx = 0xc19e6806;
    esi = 0x41c00b39;
    edi = 0x1ca5c90e;
    ebp += ecx;
    __asm ("shrd ebx, ecx, 1");
    cx ^= si;
    ebp |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / ebp;
    edx = edx:eax % ebp;
    eax = ebx * 0x914963d0;
    bp = rotate_right16 (bp, 0xa4);
    al >>= 1;
    bh = (al < 0) ? 1 : 0;
    __asm ("btc edi, 0xc5");
    bp -= 0xd321;
    tmp_0 = cx;
    cx = bp;
    bp = tmp_0;
    si ^= 0x228d;
    cx = bx * 0x17fb;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd28e94b2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b8fc */
#include <stdint.h>
 
int32_t log_size_4_var_083 (void) {
    eax = 0x83b75cb6;
    ebx = 0xf5378e18;
    ecx = 0x8d63a9f;
    edx = 0xf0d0b71c;
    esi = 0x72085726;
    edi = 0x1cfe37b0;
    eax <<= cl;
    ebp -= 0x11aea74b;
    edi >>= 0xb0;
    __asm ("shld di, ax, 1");
    cl &= 0xf;
    __asm ("shld cx, cx, cl");
    dx >>= 0xa8;
    __asm ("bsr ebx, ecx");
    __asm ("btc eax, 0x23");
    __asm ("clc");
    ch -= 0x23;
    ax = al * cl;
    __asm ("clc");
    si -= 0xc50e;
    cl &= 0xf;
    __asm ("shld si, ax, cl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc014dd4a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a612 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_040 (void) {
    eax = 0xf4b1c303;
    ebx = 0xb1759125;
    ecx = 0x5f7b4002;
    edx = 0xbceaa911;
    esi = 0x92604c0a;
    edi = 0xcdca6336;
    si += dx;
    __asm ("clc");
    esi = rotate_right32 (esi, 1);
    __asm ("clc");
    ax -= 0x6cc3;
    __asm ("cmovo ebp, ebp");
    ecx += ebx;
    cx--;
    if (cx > 0) {
        cx = bx;
    }
    __asm ("cmpxchg si, di");
    ax -= 0xfc63;
    ebx += 0x55944971;
    dl -= 0x52;
    __asm ("stc");
    ebp -= 0x7da79418;
    __asm ("clc");
    ebp += edx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x92a9b5d3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a9b2 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_048 (void) {
    eax = 0x5b419beb;
    ebx = 0xf0ea1087;
    ecx = 0xbdec78c0;
    edx = 0x8c78dfb1;
    esi = 0xffbb1f43;
    edi = 0x8b297368;
    ebp = (int32_t) bh;
    eax = (int32_t) ax;
    bh <<= cl;
    ax++;
    if (ax <= 0) {
        esi = edi;
    }
    __asm ("sets ah");
    cx &= si;
    bp += 0xfd;
    di += bx;
    bx--;
    ah += 0x18;
    ebx = rotate_right32 (ebx, cl);
    eax = 0x1cd40e23;
    dx = bp;
    bl |= bl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x6e75885a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b9ec */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_085 (void) {
    eax = 0xf4871424;
    ebx = 0x182c1b98;
    ecx = 0x784b6806;
    edx = 0xb1ef44ac;
    esi = 0x16a3a6ca;
    edi = 0xa865b12;
    edi = (int32_t) dh;
    __asm ("clc");
    cl += cl;
    ax = rotate_left16 (ax, cl);
    __asm ("btc bp, 0xb1");
    ebx |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    __asm ("cmpxchg ecx, edi");
    dh -= 0x7a;
    __asm ("clc");
    ch += dh;
    __asm ("cmovnp si, dx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf8aac0b2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a6ff */
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
 
int32_t log_size_4_var_042 (void) {
    eax = 0x1b9b9423;
    ebx = 0x94be9979;
    ecx = 0xe1aa54f1;
    edx = 0xff434c42;
    esi = 0xf49f532a;
    edi = 0xd37cfb7f;
    ah = rotate_left8 (ah, 1);
    cl >>= 1;
    cx = rotate_right16 (cx, 0xdb);
    dl = bh;
    esi = edx;
    if ((bl & 0x5b) == 0) {
        si = bx;
    }
    __asm ("cmc");
    di = dx * 0x73b9;
    bp >>= 0x8d;
    bl += 0x77;
    if (bl > 0) {
        edx = ebp;
    }
    __asm ("btc esi, 0x6b");
    ecx >>= cl;
    bx *= 0x7ff3;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x53c31cc0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x80495d4 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_003 (void) {
    eax = 0xd550e3de;
    ebx = 0xafdd0ba2;
    ecx = 0x3dc9bb97;
    edx = 0xb1c894bb;
    esi = 0xe10a999d;
    edi = 0x81f2b85e;
    dx = rotate_right16 (dx, 1);
    __asm ("bts si, 0xf2");
    __asm ("clc");
    di += 0xbb2b;
    bx = -bx;
    dx *= 0xe8a3;
    si = (int16_t) al;
    ebx ^= eax;
    ax |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / ax;
    dx = dx:ax % ax;
    __asm ("btr bp, 0x5e");
    bx >>= 0xf2;
    ah |= 0x17;
    bh ^= 0x36;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb1b0e5f6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x80496c2 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t log_size_4_var_005 (void) {
    eax = 0xb9c69c87;
    ebx = 0x857b4a55;
    ecx = 0x7bbcf04f;
    edx = 0x791c8039;
    esi = 0x22a682c1;
    edi = 0xddfd8cc;
    ax = al * bl;
    edx = SWAP32 (edx);
    dx:ax = ax * di;
    dx = -dx;
    eax -= ebp;
    if (eax < 0) {
    }
    ah >>= cl;
    al &= cl;
    ch = (al <= 0) ? 1 : 0;
    if (al < 0) {
    }
    __asm ("setp dh");
    if (al >= 0) {
        edi = ebp;
    }
    __asm ("sahf");
    ax = al * dh;
    __asm ("btc esi, eax");
    dl >>= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc6c697c8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x80497a8 */
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
 
int32_t log_size_4_var_007 (void) {
    eax = 0xcfd0f80d;
    ebx = 0x1cabea72;
    ecx = 0xd1c596f0;
    edx = 0x5b4f6d69;
    esi = 0x5610ceb2;
    edi = 0xfba6ac4b;
    ax = -ax;
    cx <<= 1;
    cx = rotate_left16 (cx, 1);
    __asm ("xadd bh, ch");
    bx++;
    if (bx == 0) {
        cx = bx;
    }
    ecx |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    __asm ("cmpxchg ch, bl");
    ebx = rotate_right32 (ebx, 1);
    dh >>= cl;
    __asm ("bts ax, 0x1c");
    dx:ax = ax * bx;
    dx = rotate_left16 (dx, 1);
    ebx = (int32_t) bl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1b854a26;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b816 */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_081 (void) {
    eax = 0xf7531fc1;
    ebx = 0x126d4f3d;
    ecx = 0x1014bf7b;
    edx = 0xba05a0a7;
    esi = 0x12235639;
    edi = 0xbe390a8;
    cl = 0x3c;
    eax = rotate_left32 (eax, cl);
    bp <<= 1;
    __asm ("bsr edx, edx");
    cl &= 0xf;
    __asm ("shrd ax, bp, cl");
    cl -= 0xb2;
    dh = rotate_left8 (dh, 0xd0);
    esi = rotate_right32 (esi, cl);
    cx = rotate_right16 (cx, 1);
    eax >>= 0x49;
    ax |= si;
    si >>= cl;
    cl &= 0xf;
    __asm ("shld bp, dx, cl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x97ea05f4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x80494f1 */
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
 
int32_t log_size_4_var_001 (void) {
    eax = 0xd3037da7;
    ebx = 0xb6e23948;
    ecx = 0x558678fc;
    edx = 0xe8853768;
    esi = 0xa3b8500e;
    edi = 0xe2945943;
    ecx = rotate_right32 (ecx, 0x7b);
    __asm ("clc");
    ch = rotate_left8 (ch, 1);
    edx += 0xebfc6388;
    esi <<= cl;
    ax >>= 1;
    __asm ("cmovnp bx, dx");
    ax = -ax;
    ebp &= ecx;
    __asm ("setns cl");
    __asm ("xadd ebp, edi");
    edx >>= cl;
    __asm ("shrd ecx, eax, cl");
    edx:eax = (int64_t) eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x400c4b5f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804c0a0 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2f53;
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
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a53a */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_038 (void) {
    eax = 0xae9456d6;
    ebx = 0x332efc94;
    ecx = 0xe151be87;
    edx = 0xf275470d;
    esi = 0x74f0d919;
    edi = 0x9721cf6;
    ax += si;
    __asm ("setns ch");
    __asm ("clc");
    al -= 0x9f;
    si = (int16_t) dl;
    ax = al * bh;
    ecx += 0xc389e4d1;
    if (ecx < 0) {
    }
    bl = rotate_left8 (bl, 0xf7);
    ebx = rotate_left32 (ebx, 0x24);
    di <<= 1;
    __asm ("cmpxchg esi, ebp");
    bl = (di > 0) ? 1 : 0;
    edx = ~edx;
    bl = ~bl;
    eax = (int32_t) ax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9f36e047;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a45b */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_036 (void) {
    eax = 0xe4cfeea3;
    ebx = 0x1a75bb22;
    ecx = 0xb1d7b216;
    edx = 0xc50edd8;
    esi = 0x9e821c80;
    edi = 0xbc4c49d1;
    dl = rotate_left8 (dl, cl);
    ch = rotate_right8 (ch, 1);
    ebp = ecx + ebx*4 + 0x29d0cb96;
    edx += 0xcb0ff725;
    __asm ("clc");
    bh = rotate_left8 (bh, 1);
    ch |= 0x25;
    ch = -ch;
    if (ch < 0) {
        di = cx;
    }
    __asm ("stc");
    bx += si;
    __asm ("clc");
    dh += ah;
    __asm ("stc");
    al += 0xd6;
    __asm ("cmovp edi, ebp");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x28cb8758;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b656 */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_077 (void) {
    eax = 0xb9dc354e;
    ebx = 0xd59f557d;
    ecx = 0x7dcb2f14;
    edx = 0xa5c835c6;
    esi = 0x1b07664;
    edi = 0xed0f8699;
    __asm ("bts si, 0xf3");
    al = -al;
    cx |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / cx;
    dx = dx:ax % cx;
    bx = (int16_t) ch;
    esi &= edi;
    ah = rotate_right8 (ah, 1);
    edi = (int32_t) cx;
    __asm ("btr eax, 0x34");
    bp = ~bp;
    __asm ("stc");
    dx = rotate_right16 (dx, 1);
    __asm ("bsf eax, ebp");
    ax &= 0xf0f3;
    eax = (int32_t) al;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf79a6b6e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a293 */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_032 (void) {
    eax = 0x67cde30a;
    ebx = 0x3a4eddbd;
    ecx = 0x7cbc82ca;
    edx = 0x8199d60b;
    esi = 0x52b5f86d;
    edi = 0x85aed559;
    ax -= 0x829b;
    ebx &= 0xca47db36;
    edx:eax = eax * edx;
    dx ^= 0x7d7d;
    __asm ("clc");
    dh = rotate_right8 (dh, 1);
    cx >>= 6;
    eax -= 0xd69930e8;
    __asm ("cmovs ebp, edi");
    si = rotate_left16 (si, cl);
    ebp = (int32_t) di;
    __asm ("bsr eax, ecx");
    cl = rotate_right8 (cl, cl);
    ebp = (int32_t) di;
    ch <<= 0x25;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2c263512;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b737 */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_079 (void) {
    eax = 0xda6e7e0b;
    ebx = 0xd37f325b;
    ecx = 0x61b263f7;
    edx = 0xe4fb43c5;
    esi = 0x43c408ce;
    edi = 0x8bbc805c;
    di >>= cl;
    si = rotate_right16 (si, 0x5e);
    __asm ("btc ecx, 0x47");
    __asm ("shrd ebp, ecx, cl");
    edi ^= 0x114463bd;
    bl <<= cl;
    edx -= edi;
    eax = rotate_left32 (eax, 0x40);
    ebx = 0;
    __asm ("clc");
    cx = rotate_left16 (cx, 1);
    edx = rotate_right32 (edx, 1);
    ebp = rotate_right32 (ebp, cl);
    edx -= 0xe52dcacb;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xceeb0442;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a37c */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_034 (void) {
    eax = 0xabdaf236;
    ebx = 0xe7b0f899;
    ecx = 0x237b4c2;
    edx = 0xf11778c4;
    esi = 0x312fd1c4;
    edi = 0xa20ce34d;
    edx |= ecx;
    cx = rotate_left16 (cx, cl);
    ax = al * ch;
    bp--;
    if (bp < 0) {
    }
    dl = rotate_right8 (dl, cl);
    bh >>= 0x4f;
    __asm ("btc edx, eax");
    __asm ("clc");
    ebp -= 0xd4fa48e7;
    __asm ("stc");
    bp -= dx;
    __asm ("stc");
    ch = rotate_left8 (ch, 1);
    cx ^= di;
    si = rotate_right16 (si, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x8973ef74;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b3b8 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_071 (void) {
    eax = 0x8f0a753f;
    ebx = 0x55a1f866;
    ecx = 0x4a13cbfc;
    edx = 0x48b563f9;
    esi = 0x26c4ebf2;
    edi = 0x5d2b15e9;
    __asm ("shrd ebp, ebp, cl");
    dx >>= 1;
    bx ^= 0x5ce;
    ecx &= 0x33ba8986;
    if (ecx > 0) {
        ebx = edx;
    }
    if (ecx < 0) {
        dx = di;
    }
    __asm ("bts ebp, 0xb8");
    if (bh == bh) {
        ecx = ebx;
    }
    edx:eax = eax * edi;
    bh >>= cl;
    si ^= 0xd642;
    __asm ("cmpxchg bl, cl");
    cx = rotate_right16 (cx, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc6049c18;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b498 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_073 (void) {
    eax = 0x12de5fed;
    ebx = 0x56cc990f;
    ecx = 0x1605b75e;
    edx = 0x13468d6b;
    esi = 0x79f78c27;
    edi = 0x78e787d;
    al = -al;
    ax = al * dh;
    ebp >>= 0x1d;
    ax |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / ax;
    dx = dx:ax % ax;
    __asm ("xadd dl, bh");
    bl &= 0x2d;
    tmp_0 = eax;
    eax = ecx;
    ecx = tmp_0;
    dx >>= cl;
    __asm ("shld si, bx, 0xd");
    ch = ~ch;
    si = (int16_t) al;
    __asm ("btc di, si");
    edi = rotate_left32 (edi, 1);
    eax = (int32_t) ax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x60447bd;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b579 */
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
 
int32_t log_size_4_var_075 (void) {
    eax = 0xf6dc3563;
    ebx = 0xa600a45;
    ecx = 0xeab758a2;
    edx = 0x4f19ff91;
    esi = 0x5231d04b;
    edi = 0xf1607a45;
    edx = rotate_right32 (edx, cl);
    esi = (int32_t) dh;
    bl <<= 0x50;
    ax = al * bh;
    if (bl >= 0) {
        cx = bx;
    }
    if (bl >= 0) {
        eax = edi;
    }
    cl = bh;
    __asm ("stc");
    ch = rotate_left8 (ch, 1);
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    ebp >>= 1;
    eax -= 0x37499839;
    __asm ("cwd");
    dh ^= ch;
    __asm ("btr ax, bx");
    eax = (int32_t) bp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x60820b04;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a1b1 */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_030 (void) {
    eax = 0x4c973cf1;
    ebx = 0xc3d98a13;
    ecx = 0x75b48dd9;
    edx = 0xa210c1fd;
    esi = 0xa9cf8881;
    edi = 0xfe3cba26;
    ebp >>= 0x77;
    edx:eax = eax * edi;
    bl = rotate_left8 (bl, cl);
    eax <<= 1;
    ah = -ah;
    cx >>= 1;
    ebx -= 0x99c9f9ab;
    dl = rotate_left8 (dl, cl);
    cl = (cl <= 0) ? 1 : 0;
    __asm ("shrd si, cx, 0xc");
    ebx = rotate_right32 (ebx, 1);
    ah += ch;
    __asm ("shld bx, bp, 8");
    edi = ~edi;
    bp = ax * 0x2808;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd0cc1a87;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x80493a0 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049060 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_8h;
    /* [13] -r-x section size 12453 named .text */
    ecx = esp + 4;
    eax = log_size_4_var_000 (ecx, ebx, ebp);
    ebx = eax;
    eax = log_size_4_var_001 ();
    ebx += eax;
    eax = log_size_4_var_002 ();
    ebx += eax;
    eax = log_size_4_var_003 ();
    ebx += eax;
    eax = log_size_4_var_004 ();
    ebx += eax;
    eax = log_size_4_var_005 ();
    ebx += eax;
    eax = log_size_4_var_006 ();
    ebx += eax;
    eax = log_size_4_var_007 ();
    ebx += eax;
    eax = log_size_4_var_008 ();
    ebx += eax;
    eax = log_size_4_var_009 ();
    ebx += eax;
    eax = log_size_4_var_010 ();
    ebx += eax;
    eax = log_size_4_var_011 ();
    ebx += eax;
    eax = log_size_4_var_012 ();
    ebx += eax;
    eax = log_size_4_var_013 ();
    ebx += eax;
    eax = log_size_4_var_014 ();
    ebx += eax;
    eax = log_size_4_var_015 ();
    ebx += eax;
    eax = log_size_4_var_016 ();
    ebx += eax;
    eax = log_size_4_var_017 ();
    ebx += eax;
    eax = log_size_4_var_018 ();
    ebx += eax;
    eax = log_size_4_var_019 ();
    ebx += eax;
    eax = log_size_4_var_020 ();
    ebx += eax;
    eax = log_size_4_var_021 ();
    ebx += eax;
    eax = log_size_4_var_022 ();
    ebx += eax;
    eax = log_size_4_var_023 ();
    ebx += eax;
    eax = log_size_4_var_024 ();
    ebx += eax;
    eax = log_size_4_var_025 ();
    ebx += eax;
    eax = log_size_4_var_026 ();
    ebx += eax;
    eax = log_size_4_var_027 ();
    ebx += eax;
    eax = log_size_4_var_028 ();
    ebx += eax;
    eax = log_size_4_var_029 ();
    ebx += eax;
    eax = log_size_4_var_030 ();
    ebx += eax;
    eax = log_size_4_var_031 ();
    ebx += eax;
    eax = log_size_4_var_032 ();
    ebx += eax;
    eax = log_size_4_var_033 ();
    ebx += eax;
    eax = log_size_4_var_034 ();
    ebx += eax;
    eax = log_size_4_var_035 ();
    ebx += eax;
    eax = log_size_4_var_036 ();
    ebx += eax;
    eax = log_size_4_var_037 ();
    ebx += eax;
    eax = log_size_4_var_038 ();
    ebx += eax;
    eax = log_size_4_var_039 ();
    ebx += eax;
    eax = log_size_4_var_040 ();
    ebx += eax;
    eax = log_size_4_var_041 ();
    ebx += eax;
    eax = log_size_4_var_042 ();
    ebx += eax;
    eax = log_size_4_var_043 ();
    ebx += eax;
    eax = log_size_4_var_044 ();
    ebx += eax;
    eax = log_size_4_var_045 ();
    ebx += eax;
    eax = log_size_4_var_046 ();
    ebx += eax;
    eax = log_size_4_var_047 ();
    ebx += eax;
    eax = log_size_4_var_048 ();
    ebx += eax;
    eax = log_size_4_var_049 ();
    ebx += eax;
    eax = log_size_4_var_050 ();
    ebx += eax;
    eax = log_size_4_var_051 ();
    ebx += eax;
    eax = log_size_4_var_052 ();
    ebx += eax;
    eax = log_size_4_var_053 ();
    ebx += eax;
    eax = log_size_4_var_054 ();
    ebx += eax;
    eax = log_size_4_var_055 ();
    ebx += eax;
    eax = log_size_4_var_056 ();
    ebx += eax;
    eax = log_size_4_var_057 ();
    ebx += eax;
    eax = log_size_4_var_058 ();
    ebx += eax;
    eax = log_size_4_var_059 ();
    ebx += eax;
    eax = log_size_4_var_060 ();
    ebx += eax;
    eax = log_size_4_var_061 ();
    ebx += eax;
    eax = log_size_4_var_062 ();
    ebx += eax;
    eax = log_size_4_var_063 ();
    ebx += eax;
    eax = log_size_4_var_064 ();
    ebx += eax;
    eax = log_size_4_var_065 ();
    ebx += eax;
    eax = log_size_4_var_066 ();
    ebx += eax;
    eax = log_size_4_var_067 ();
    ebx += eax;
    eax = log_size_4_var_068 ();
    ebx += eax;
    eax = log_size_4_var_069 ();
    ebx += eax;
    eax = log_size_4_var_070 ();
    ebx += eax;
    eax = log_size_4_var_071 ();
    ebx += eax;
    eax = log_size_4_var_072 ();
    ebx += eax;
    eax = log_size_4_var_073 ();
    ebx += eax;
    eax = log_size_4_var_074 ();
    ebx += eax;
    eax = log_size_4_var_075 ();
    ebx += eax;
    eax = log_size_4_var_076 ();
    ebx += eax;
    eax = log_size_4_var_077 ();
    ebx += eax;
    eax = log_size_4_var_078 ();
    ebx += eax;
    eax = log_size_4_var_079 ();
    ebx += eax;
    eax = log_size_4_var_080 ();
    ebx += eax;
    eax = log_size_4_var_081 ();
    ebx += eax;
    eax = log_size_4_var_082 ();
    ebx += eax;
    eax = log_size_4_var_083 ();
    ebx += eax;
    eax = log_size_4_var_084 ();
    ebx += eax;
    eax = log_size_4_var_085 ();
    ebx += eax;
    eax = log_size_4_var_086 ();
    ebx += eax;
    eax = log_size_4_var_087 ();
    ebx += eax;
    eax = log_size_4_var_088 ();
    ebx += eax;
    eax = log_size_4_var_089 ();
    ebx += eax;
    eax = log_size_4_var_090 ();
    ebx += eax;
    eax = log_size_4_var_091 ();
    ebx += eax;
    eax = log_size_4_var_092 ();
    ebx += eax;
    eax = log_size_4_var_093 ();
    ebx += eax;
    eax = log_size_4_var_094 ();
    ebx += eax;
    eax = log_size_4_var_095 ();
    ebx += eax;
    eax = log_size_4_var_096 ();
    ebx += eax;
    eax = log_size_4_var_097 ();
    ebx += eax;
    eax = log_size_4_var_098 ();
    ebx += eax;
    eax = log_size_4_var_099 ();
    ebx += eax;
    if (ebx == 0) {
        esp = ebp - 8;
        eax = 0;
        esp = ecx - 4;
        return eax;
    }
    return assert_fail ("sum==0", "source_complex_with_base_100_funcs_of_size_16.c", 0xd3, "main");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804964e */
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
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_004 (void) {
    eax = 0x19cdeb05;
    ebx = 0xd9ade50;
    ecx = 0xd670ba56;
    edx = 0x6a8480d5;
    esi = 0x6b70d9e5;
    edi = 0x7eebae9f;
    dh = rotate_left8 (dh, 1);
    __asm ("shld esi, ecx, 1");
    dx = rotate_right16 (dx, 0x10);
    edx = rotate_right32 (edx, 0xff);
    __asm ("shrd bx, cx, 1");
    bp = rotate_right16 (bp, 0x11);
    ebp = (int32_t) ch;
    __asm ("shld dx, dx, 1");
    dh = (? != ?) ? 1 : 0;
    __asm ("shrd esi, ebx, 1");
    __asm ("stc");
    ebp += ecx;
    cx = rotate_right16 (cx, cl);
    bh &= ah;
    edi = ~edi;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x95d698c0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804972b */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_006 (void) {
    eax = 0x8ee6df2a;
    ebx = 0xd7680b77;
    ecx = 0x3f21c220;
    edx = 0x407384f8;
    esi = 0xb21f75e0;
    edi = 0x34176ebb;
    ecx = rotate_right32 (ecx, 0xf);
    __asm ("clc");
    __asm ("cmovp esi, esi");
    cx = (int16_t) ah;
    bh >>= cl;
    ecx |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    esi >>= 0x9a;
    dx:ax = ax * bp;
    ebx &= eax;
    ah = (ebx != 0) ? 1 : 0;
    if (ebx <= 0) {
        edx = ecx;
    }
    ax |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / ax;
    dx = dx:ax % ax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb576430;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804981e */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_008 (void) {
    eax = 0xfcd197ee;
    ebx = 0x36b3c3fc;
    ecx = 0x18f183dd;
    edx = 0x67c24f58;
    esi = 0xc2b358fe;
    edi = 0x1247cbb9;
    al += 0xdb;
    cx >>= 1;
    esi >>= 1;
    __asm ("clc");
    ch -= ch;
    si >>= cl;
    esi >>= 1;
    al = rotate_right8 (al, 0x9a);
    ah = 0x1f;
    al = -al;
    __asm ("shrd eax, edx, cl");
    __asm ("btr esi, 0x16");
    eax ^= 0x808fed1a;
    __asm ("clc");
    bh -= 0x12;
    __asm ("clc");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2884bd86;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049972 */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_011 (void) {
    eax = 0x27e32eca;
    ebx = 0x691e6e16;
    ecx = 0xc6c46770;
    edx = 0x8383356f;
    esi = 0x3b17e120;
    edi = 0xac6a6701;
    eax = (int32_t) ax;
    cx >>= cl;
    ax |= 0x4609;
    __asm ("clc");
    bx -= 0x8c4;
    __asm ("cmovnp edx, edx");
    __asm ("bts dx, 0x5f");
    __asm ("shrd cx, dx, 0xc");
    ah &= 0xd;
    __asm ("cmovp di, dx");
    ch = rotate_left8 (ch, cl);
    bh >>= 1;
    __asm ("shrd cx, di, 1");
    si = rotate_left16 (si, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe87097f7;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049a5a */
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
 
int32_t log_size_4_var_013 (void) {
    eax = 0xcf307849;
    ebx = 0xc4dfe85;
    ecx = 0x19674299;
    edx = 0x9b2c0e8f;
    esi = 0xe9a893d1;
    edi = 0x3052979f;
    dx |= 0x6c27;
    __asm ("btr eax, ebp");
    esi = (int32_t) di;
    ebp <<= 0x6a;
    edx = (int32_t) bl;
    ah += dl;
    tmp_0 = bp;
    bp = bx;
    bx = tmp_0;
    __asm ("shrd bp, si, 0xf");
    esi = (int32_t) cl;
    dh -= 0xd;
    if (dh < 0) {
        cx = bx;
    }
    __asm ("stc");
    ax = rotate_right16 (ax, 1);
    edi = rotate_right32 (edi, 0xe0);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x592c1220;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049b37 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_015 (void) {
    eax = 0xe3fa718d;
    ebx = 0x7b6b8c43;
    ecx = 0xba7e45ab;
    edx = 0xf36af931;
    esi = 0xc618f4c4;
    edi = 0xe13b83e2;
    ch = 0xc8;
    __asm ("btc ax, si");
    ax >>= cl;
    si ^= 0xef08;
    __asm ("cmpxchg esi, eax");
    __asm ("bts ebx, ebx");
    ecx -= edi;
    al >>= 0xdc;
    __asm ("btc edi, esi");
    __asm ("stc");
    bh = rotate_right8 (bh, 1);
    __asm ("stc");
    ax -= bx;
    bp = edx + ebx + 0x7c;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x53fac89f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049c15 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_017 (void) {
    eax = 0x4e03fcce;
    ebx = 0x89bc80ac;
    ecx = 0xeb1327e5;
    edx = 0xf24d0375;
    esi = 0x5f96645e;
    edi = 0x9f0e2a86;
    __asm ("shld ebp, ebx, 1");
    if (? < ?) {
    }
    ax <<= cl;
    dl >>= 1;
    bl = 0xf1;
    dx = rotate_left16 (dx, cl);
    ax ^= dx;
    esi -= edx;
    bx = rotate_left16 (bx, cl);
    edx:eax = (int64_t) eax;
    bh ^= dh;
    ebx = -ebx;
    __asm ("xadd cl, bl");
    __asm ("lahf");
    if (esi == 0) {
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x10a4401d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049ce8 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_019 (void) {
    eax = 0xe38668a;
    ebx = 0x83ab90bd;
    ecx = 0x80665a8a;
    edx = 0xbc84d463;
    esi = 0x14bf1474;
    edi = 0xf19494ad;
    dx:ax = ax * di;
    bp ^= 0xeb28;
    __asm ("clc");
    dh -= ch;
    __asm ("stc");
    ebx -= 0x7537f66f;
    dl = rotate_right8 (dl, cl);
    __asm ("xadd edi, ecx");
    cl++;
    __asm ("btc edx, 0x79");
    __asm ("clc");
    ebp += 0xd6514222;
    __asm ("shrd edi, edi, 0xd7");
    bx--;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd4e65b1;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049dc5 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_021 (void) {
    eax = 0x3d5ac5c9;
    ebx = 0xbaf151e2;
    ecx = 0xeebdbf34;
    edx = 0x94957802;
    esi = 0x24224ce6;
    edi = 0x46fc8f18;
    ch |= 0x64;
    eax = SWAP32 (eax);
    eax = (int32_t) bl;
    ax = (int16_t) al;
    al >>= 0x80;
    ah = rotate_right8 (ah, 0x2a);
    dx:ax = ax * si;
    cx >>= 0xac;
    ebx >>= 1;
    __asm ("btr edx, 0x2f");
    cx -= 0x84ae;
    dl = (cx >= 0) ? 1 : 0;
    dh <<= 1;
    ebx += 0x41b319ed;
    ebx <<= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2d672e2d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049eac */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_023 (void) {
    eax = 0x8ce9ad83;
    ebx = 0xa59acaf;
    ecx = 0xc5c877e6;
    edx = 0x4ae41576;
    esi = 0x4fdb8de4;
    edi = 0x7de60389;
    bp ^= bx;
    __asm ("cmpxchg al, bh");
    __asm ("stc");
    cl += 0x57;
    bp -= 0x942a;
    __asm ("clc");
    edx = rotate_right32 (edx, 1);
    __asm ("shrd dx, di, 0xc");
    bl -= ch;
    __asm ("bts edx, ebp");
    bh--;
    esi = rotate_right32 (esi, 0xe5);
    __asm ("btc ax, 0xdf");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xcb7d1444;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049f8e */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_025 (void) {
    eax = 0x63b59b2e;
    ebx = 0x8362ba8;
    ecx = 0xcee8ef28;
    edx = 0xe1e794ad;
    esi = 0xa7864a0a;
    edi = 0x575af7d1;
    si--;
    di = (int16_t) dh;
    __asm ("shld dx, dx, 6");
    si = -si;
    __asm ("bts di, 4");
    __asm ("clc");
    esi -= 0x175d24e4;
    __asm ("clc");
    dh += 0x94;
    bl = (dh != 0) ? 1 : 0;
    di >>= cl;
    ch = rotate_right8 (ch, 0x7e);
    edx--;
    ax++;
    dx &= 0xb8db;
    __asm ("clc");
    esi = rotate_left32 (esi, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x54f1232a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a078 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_027 (void) {
    eax = 0x94fd3097;
    ebx = 0x677d062b;
    ecx = 0xa8b65c7e;
    edx = 0x945aee43;
    esi = 0xb24b6a54;
    edi = 0xb4b641d1;
    cx -= 0x937f;
    ebx -= 0xe2987684;
    __asm ("clc");
    ah = rotate_right8 (ah, 1);
    tmp_0 = ch;
    ch = dl;
    dl = tmp_0;
    __asm ("btr ebp, eax");
    dx:ax = ax * ax;
    cx |= cx;
    dx += 0xef;
    cl &= 0xf;
    __asm ("shrd ax, di, cl");
    cl <<= 1;
    dx:ax = ax * dx;
    __asm ("clc");
    ax <<= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x195f6d50;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a14e */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_029 (void) {
    eax = 0xc6d8cb22;
    ebx = 0xb2ae4908;
    ecx = 0xb56bb504;
    edx = 0xa13fa97e;
    esi = 0xba3f2d63;
    edi = 0x33d16819;
    bl = ~bl;
    edx >>= cl;
    __asm ("sahf");
    dx = rotate_right16 (dx, cl);
    __asm ("clc");
    __asm ("stc");
    dl -= 0xea;
    __asm ("clc");
    eax -= esi;
    edi = edx + esi*4;
    ecx += ebx;
    __asm ("btr bp, ax");
    if (ecx == 0) {
        eax = ecx;
    }
    bx -= di;
    __asm ("clc");
    dh -= ch;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xfc9fe8d9;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a684 */
#include <stdint.h>
 
int32_t log_size_4_var_041 (void) {
    eax = 0x5014c8fd;
    ebx = 0x408b88fd;
    ecx = 0xe2baa980;
    edx = 0x80633498;
    esi = 0xeae60ba1;
    edi = 0x26dea468;
    __asm ("bts edx, ebx");
    edi |= 0x476c8986;
    edi *= 0x8f92b9db;
    __asm ("shld bp, ax, 0");
    ebp >>= cl;
    ebx -= eax;
    if (ebx == 0) {
    }
    esi -= ebx;
    edi -= 0x51f0a315;
    __asm ("stc");
    al += 0xa7;
    edx &= 0xc64b7084;
    if (edx == 0) {
        eax = edx;
    }
    __asm ("cmovnp ebx, esi");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x31695450;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a771 */
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
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_043 (void) {
    eax = 0x5f8877f1;
    ebx = 0x9ac1ed1;
    ecx = 0x54ecc295;
    edx = 0xed874334;
    esi = 0x1298fcca;
    edi = 0x73f9666f;
    __asm ("shld di, bx, 0xc");
    bh >>= 1;
    __asm ("clc");
    di -= si;
    bl = rotate_left8 (bl, cl);
    bx >>= cl;
    ax = al * cl;
    si = rotate_right16 (si, cl);
    edi = rotate_left32 (edi, 0x57);
    ah >>= 0x1f;
    eax = 0x1531ba1e;
    esi |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    cl >>= 1;
    eax += ecx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7d3d73f6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a85c */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_045 (void) {
    eax = 0x5968375b;
    ebx = 0xc1fd5fc9;
    ecx = 0x66e99553;
    edx = 0x4bec6985;
    esi = 0xed535bf6;
    edi = 0x21906d06;
    __asm ("xadd ch, bh");
    edx:eax = (int64_t) eax;
    __asm ("clc");
    bx -= di;
    bx |= si;
    eax = rotate_left32 (eax, cl);
    bl >>= 0xca;
    ax = eax * 5;
    tmp_0 = di;
    di = bp;
    bp = tmp_0;
    edi ^= 0xfb0afdbf;
    __asm ("clc");
    edx += ebp;
    cl = (edx >= 0) ? 1 : 0;
    esi = edx * 0xac9f51cb;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd6668e93;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804a941 */
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
 
int32_t log_size_4_var_047 (void) {
    eax = 0xa184bc0a;
    ebx = 0x9e0f406a;
    ecx = 0xf46a48fa;
    edx = 0x7a58cb69;
    esi = 0xd00f5fa4;
    edi = 0x190498ae;
    si = rotate_right16 (si, 0xcd);
    ebp = ~ebp;
    di |= si;
    if (di < 0) {
        bx = cx;
    }
    cx += dx;
    if (cx <= 0) {
        esi = edi;
    }
    ebx = rotate_right32 (ebx, 1);
    __asm ("sahf");
    if (cx == 0) {
    }
    dx += 0x1b22;
    __asm ("clc");
    esi += 0xce63cc64;
    ax = (int16_t) al;
    ecx &= esi;
    bl = (((edx >> 0x41) & 1) > 0) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7ac11a77;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804aa20 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_049 (void) {
    eax = 0x5afd08c;
    ebx = 0x58491914;
    ecx = 0x12a04ea0;
    edx = 0x26468849;
    esi = 0x6931fec8;
    edi = 0x6fc849de;
    __asm ("xadd ebp, edx");
    edx -= esi;
    if (edx >= 0) {
        edx = edi;
    }
    ebp <<= 1;
    edi = rotate_left32 (edi, 0x4e);
    ecx = eax;
    bh = ~bh;
    ebx = rotate_left32 (ebx, 0x66);
    ch -= 0xc2;
    __asm ("cmovns ebx, ebx");
    __asm ("stc");
    dl += bh;
    dx *= 0x39da;
    edx = rotate_left32 (edx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd3837625;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804aa8d */
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
 
int32_t log_size_4_var_050 (void) {
    eax = 0x2fd337e1;
    ebx = 0x9a4ea9f2;
    ecx = 0xe726ea47;
    edx = 0xb51579c4;
    esi = 0x3fb43551;
    edi = 0x52af2716;
    ecx >>= cl;
    bx = rotate_left16 (bx, cl);
    di += 0x98f5;
    bh = rotate_left8 (bh, cl);
    ebx <<= 1;
    __asm ("clc");
    ebx += 0x7fabed05;
    al = (ebx == 0) ? 1 : 0;
    __asm ("clc");
    ecx = rotate_right32 (ecx, 1);
    cx &= si;
    bl = (cx > 0) ? 1 : 0;
    __asm ("btc si, bx");
    __asm ("btc dx, bx");
    __asm ("clc");
    dh = rotate_right8 (dh, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9d8c076b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804ab6c */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_052 (void) {
    eax = 0x54002899;
    ebx = 0x711e88ac;
    ecx = 0x641331bf;
    edx = 0x9ce94778;
    esi = 0xbffdd98c;
    edi = 0x30563680;
    esi = 0x69f62508;
    __asm ("cmovo dx, bp");
    ah = rotate_right8 (ah, 0xdf);
    eax = -eax;
    __asm ("cmovs ax, di");
    dx &= ax;
    cl &= 0xf;
    __asm ("shrd cx, dx, cl");
    eax = rotate_left32 (eax, cl);
    si ^= ax;
    dl = (cl < 0) ? 1 : 0;
    ebp = rotate_right32 (ebp, 0x6b);
    bl |= 0xc0;
    ax &= 0x3fff;
    al = ax / bl;
    ah = ax % bl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x5bebcd09;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804ac54 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_054 (void) {
    eax = 0x2b440620;
    ebx = 0x38f73c3e;
    ecx = 0x504534b4;
    edx = 0xffc81563;
    esi = 0x8a3d7dea;
    edi = 0xa047ce9f;
    ebp = (int32_t) bp;
    __asm ("shrd ebx, ecx, cl");
    __asm ("bts edx, ecx");
    ebx <<= 0xda;
    cl = 0;
    if (cl >= 0) {
    }
    if (cl <= 0) {
        edx = ebx;
    }
    cx -= dx;
    __asm ("shrd ax, dx, 1");
    __asm ("cmpxchg esi, edi");
    bp &= bp;
    __asm ("xadd bx, bp");
    if (bp <= 0) {
        dx = bx;
    }
    bh |= 0xc6;
    if (bh >= 0) {
        ax = bp;
    }
    ecx = rotate_right32 (ecx, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7d08c4d0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804ad34 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
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
 
int32_t log_size_4_var_056 (void) {
    eax = 0x7c8bb93e;
    ebx = 0x7bc2a15b;
    ecx = 0xc75c079c;
    edx = 0x56fa9dc;
    esi = 0xd8d67e4e;
    edi = 0x455f5098;
    __asm ("shld ecx, ebp, cl");
    cl = rotate_right8 (cl, 1);
    bx--;
    __asm ("stc");
    ecx += 0x953ba037;
    ebx = SWAP32 (ebx);
    esi <<= 1;
    __asm ("btc ecx, ecx");
    ecx--;
    bh >>= 1;
    ebp = rotate_right32 (ebp, cl);
    __asm ("bsr ebx, ebp");
    ebp = -ebp;
    __asm ("cmovo dx, dx");
    cl = rotate_left8 (cl, 0x5d);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7a0ef62;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804ae08 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_058 (void) {
    eax = 0x7ed93d33;
    ebx = 0x8345c6ab;
    ecx = 0x22c3f484;
    edx = 0x3901c419;
    esi = 0x1e151a6f;
    edi = 0x5c28c704;
    bh = (edx > 0) ? 1 : 0;
    if (edx <= 0) {
        esi = edx;
    }
    edx:eax = (int64_t) eax;
    __asm ("stc");
    ebp += ecx;
    __asm ("cmpxchg bl, dl");
    __asm ("clc");
    edi -= 0xa5ed38d5;
    edx -= 0x163d274d;
    cx >>= 0x59;
    dx >>= 1;
    bh = rotate_left8 (bh, 1);
    edx = ~edx;
    si *= 0xc8fe;
    bx *= 0x2dfa;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x30e0cb6c;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804aeed */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_060 (void) {
    eax = 0x310eeae6;
    ebx = 0xd17675be;
    ecx = 0x8b22068;
    edx = 0xf7194c1e;
    esi = 0x390d1b6e;
    edi = 0x8ceb0500;
    edx:eax = eax * ebx;
    ebx += esi;
    cl |= cl;
    ch = ~ch;
    al++;
    bh >>= 0x2c;
    di |= bp;
    __asm ("stc");
    al += cl;
    cx = rotate_right16 (cx, cl);
    esi >>= 0xdb;
    edx:eax = eax * edx;
    ebx = (int32_t) al;
    __asm ("stc");
    dh -= 0x2f;
    ax >>= 0x15;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x4cd4c475;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804afc6 */
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
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_062 (void) {
    eax = 0x16f7e9f7;
    ebx = 0xbfb184bc;
    ecx = 0xe535a4cc;
    edx = 0x39201e66;
    esi = 0xeed86dd;
    edi = 0xb4ac6137;
    ebp <<= 0x74;
    ax = al * ch;
    ax |= 0x53ac;
    if (ax >= 0) {
        edi = ebp;
    }
    __asm ("clc");
    bl = rotate_left8 (bl, 1);
    dx = rotate_right16 (dx, 1);
    edi = rotate_right32 (edi, 0x90);
    cx = (int16_t) ch;
    __asm ("cmpxchg cx, bp");
    cx = ~cx;
    eax = rotate_left32 (eax, 0xcd);
    __asm ("shrd bx, di, 1");
    dx ^= 0xcef5;
    dh >>= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe97021c4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b0a6 */
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
 
int32_t log_size_4_var_064 (void) {
    eax = 0xb7f5ca84;
    ebx = 0x48e648;
    ecx = 0x1fb95733;
    edx = 0x20117c29;
    esi = 0x5d3205fe;
    edi = 0xd65a372e;
    bh -= cl;
    dx -= bx;
    edx = (int32_t) dx;
    bl = (dx < 0) ? 1 : 0;
    cx = rotate_right16 (cx, cl);
    di = bx * 0xd720;
    eax = rotate_right32 (eax, 1);
    eax = rotate_right32 (eax, 0x46);
    cl >>= 0xa9;
    di ^= cx;
    dx = rotate_right16 (dx, 0xf6);
    ax += 0x8176;
    eax = (int32_t) al;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe4a4fb31;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b18e */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t log_size_4_var_066 (void) {
    eax = 0x3c335e92;
    ebx = 0xc15df166;
    ecx = 0xc4ca9d95;
    edx = 0xcdffac4a;
    esi = 0xf6e23253;
    edi = 0x51da5718;
    __asm ("cwd");
    al >>= cl;
    cx += di;
    ecx++;
    if (ecx > 0) {
        ecx = ebx;
    }
    __asm ("lahf");
    __asm ("cmovs ax, ax");
    ecx = eax + ebp*4 + 0x2e9a7dfe;
    __asm ("shrd dx, di, 0xb");
    ebp <<= 1;
    ax = al * ch;
    ebx = SWAP32 (ebx);
    esi >>= cl;
    __asm ("btc edi, 0xe3");
    ah = -ah;
    __asm ("btc ebx, ebx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x66feb23f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b267 */
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
 
int32_t log_size_4_var_068 (void) {
    eax = 0xccc1f262;
    ebx = 0x7db6d3b0;
    ecx = 0x5fd11637;
    edx = 0xb100bc4f;
    esi = 0xc25432f6;
    edi = 0x813dc507;
    edi = (int32_t) bx;
    bp *= 0x8ffc;
    eax = -eax;
    bl = rotate_right8 (bl, 0x8d);
    bh >>= 0xed;
    __asm ("clc");
    dh -= 0x35;
    __asm ("shld ebp, esi, cl");
    eax = (int32_t) dl;
    __asm ("shrd di, cx, 1");
    dh &= 0x1c;
    cx -= ax;
    ebx = rotate_right32 (ebx, 1);
    __asm ("clc");
    ch -= al;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf663922f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b7a8 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_080 (void) {
    eax = 0x11ee5e6a;
    ebx = 0xcecadf3d;
    ecx = 0xbb04b8d2;
    edx = 0x3d71f03b;
    esi = 0x8f463a3e;
    edi = 0x199801cd;
    dx:ax = ax * bp;
    eax = ~eax;
    if (? < ?) {
    }
    __asm ("shrd ax, cx, 1");
    __asm ("btc bx, di");
    __asm ("stc");
    edx = rotate_left32 (edx, 1);
    __asm ("clc");
    dl += ah;
    if (dl == 0) {
    }
    ecx -= ebp;
    __asm ("clc");
    eax -= 0x63b20db4;
    di &= 0xbc68;
    al ^= 4;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x37ef3a76;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b888 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t log_size_4_var_082 (void) {
    eax = 0xbed7fe03;
    ebx = 0x98988e70;
    ecx = 0xa1ae1465;
    edx = 0x444af7bd;
    esi = 0x3bf7488c;
    edi = 0x37b29e08;
    bp = rotate_left16 (bp, 1);
    __asm ("xadd ebx, ebx");
    cl &= 0xf;
    __asm ("shrd ax, bp, cl");
    eax ^= 0x72c6197e;
    __asm ("shrd eax, edi, cl");
    edx >>= cl;
    __asm ("shrd bx, cx, 1");
    dx = rotate_left16 (dx, cl);
    eax >>= 0xac;
    di <<= 1;
    __asm ("btr ax, 0x79");
    al = bl;
    __asm ("xadd dx, bx");
    ebp <<= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa3116829;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804b977 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_084 (void) {
    eax = 0x8a93fb24;
    ebx = 0xf5b77084;
    ecx = 0xd9e94b9f;
    edx = 0x3eb00528;
    esi = 0xe600afdb;
    edi = 0xa29464a6;
    cx <<= 0x38;
    ecx = (int32_t) cx;
    edi >>= 0x72;
    __asm ("btr edx, ecx");
    si = di * 0xb66a;
    dh >>= 1;
    cx <<= 1;
    bh = (cx >= 0) ? 1 : 0;
    di |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / di;
    dx = dx:ax % di;
    eax = rotate_right32 (eax, 0x7f);
    bx += 0x4c55;
    ax = al * dh;
    tmp_0 = bl;
    bl = ah;
    ah = tmp_0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9837e708;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804ba61 */
#include <stdint.h>
 
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
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_086 (void) {
    eax = 0xc8fa234a;
    ebx = 0xae81b8fa;
    ecx = 0x10a38174;
    edx = 0xb4233e;
    esi = 0x41f567da;
    edi = 0x88d540ef;
    dh >>= cl;
    bh = rotate_left8 (bh, 1);
    cl = (dh >= 0) ? 1 : 0;
    dh += 0x73;
    dh = (dh <= 0) ? 1 : 0;
    ecx -= ecx;
    edx = rotate_right32 (edx, cl);
    di = rotate_right16 (di, 0x8b);
    __asm ("stc");
    ah += bl;
    bp >>= cl;
    dx = cx * 0x14bb;
    dx = (int16_t) dl;
    __asm ("clc");
    si += dx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x60523ffe;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804bb3f */
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
 
int32_t log_size_4_var_088 (void) {
    eax = 0x748601ac;
    ebx = 0x7855398a;
    ecx = 0xd5333bf0;
    edx = 0x62c1e648;
    esi = 0x8c71617d;
    edi = 0xd769501c;
    __asm ("shrd esi, eax, 1");
    bh--;
    __asm ("clc");
    al += 0x9f;
    si = rotate_right16 (si, cl);
    al |= bl;
    si |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / si;
    dx = dx:ax % si;
    di |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / di;
    dx = dx:ax % di;
    edx = rotate_right32 (edx, 1);
    bx >>= 1;
    __asm ("seto ah");
    ebp *= 0xd347263f;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xdcfcd34b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804bc8d */
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
 
int32_t log_size_4_var_091 (void) {
    eax = 0xb9d6751;
    ebx = 0x673f3696;
    ecx = 0x6e3328a9;
    edx = 0x33977456;
    esi = 0x7d494048;
    edi = 0xf0ec40b5;
    bh >>= 0x5e;
    __asm ("bts ebx, ecx");
    edx = 0x7850cb2d;
    bx += 0xa3b8;
    __asm ("shrd di, ax, 1");
    esi = rotate_right32 (esi, 0xd2);
    eax = (int32_t) ax;
    dx >>= cl;
    dh = rotate_right8 (dh, 1);
    ax &= 0x22b3;
    ax = rotate_left16 (ax, cl);
    __asm ("sahf");
    __asm ("setns dl");
    esi = ebp * 0xbb00fe2b;
    __asm ("cmpxchg bp, ax");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xed03b3b6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804bd7e */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_093 (void) {
    eax = 0xd3852c6d;
    ebx = 0x3cc0046d;
    ecx = 0xb2a847e7;
    edx = 0x13f67452;
    esi = 0xf79bea86;
    edi = 0x550c7111;
    eax ^= ebp;
    __asm ("stc");
    bl = rotate_right8 (bl, 1);
    dh |= ah;
    dh >>= cl;
    edx |= 0xc0da9c71;
    dl -= 0x6c;
    __asm ("cmpxchg ecx, ebx");
    if (dl != 0) {
        dx = si;
    }
    ebx = edx * 0xac7e822e;
    bp = rotate_left16 (bp, cl);
    bl ^= bh;
    tmp_0 = bl;
    bl = cl;
    cl = tmp_0;
    di *= 0xd61d;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xfc06153e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804be66 */
#include <stdint.h>
 
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
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t log_size_4_var_095 (void) {
    eax = 0xa6e548be;
    ebx = 0x4031dd76;
    ecx = 0xb8eb6a7;
    edx = 0x5b954c9;
    esi = 0x5bdb3cfe;
    edi = 0xee6a94ce;
    bh = rotate_left8 (bh, 0x51);
    dl = ~dl;
    __asm ("shrd edi, ecx, 1");
    __asm ("btc eax, 0xf0");
    dx = rotate_left16 (dx, cl);
    __asm ("shld cx, di, 0xa");
    cx = rotate_right16 (cx, 1);
    ax += si;
    esi |= 0xf4d6c02b;
    edx:eax = eax * eax;
    cl = (esi < 0) ? 1 : 0;
    ecx = -ecx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc2c5bd02;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804bf50 */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_097 (void) {
    eax = 0x3f49d5b5;
    ebx = 0xaf4d0350;
    ecx = 0x863b81c9;
    edx = 0x6c8f61c7;
    esi = 0x6a1f6ad0;
    edi = 0xab8220a2;
    dx = si;
    cl = rotate_left8 (cl, cl);
    __asm ("btc edx, eax");
    cl = rotate_right8 (cl, 1);
    __asm ("stc");
    ch += 0x92;
    if (ch >= 0) {
        ebx = eax;
    }
    ch++;
    __asm ("shrd si, si, 1");
    dx = rotate_right16 (dx, 1);
    di -= 0x4268;
    __asm ("clc");
    cx += bx;
    dl = rotate_right8 (dl, 0x12);
    if (bh != cl) {
        cx = di;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa72a9c38;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x804c02f */
#include <stdint.h>
 
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
 
int32_t log_size_4_var_099 (void) {
    eax = 0x7a5822eb;
    ebx = 0x4d2b6aaa;
    ecx = 0x2047ae6d;
    edx = 0x20a7fbc;
    esi = 0xe35ff9c0;
    edi = 0x1323b8fa;
    si |= bp;
    dl = rotate_left8 (dl, 1);
    __asm ("stc");
    edi = rotate_left32 (edi, 1);
    ch ^= 0xbe;
    bx <<= 1;
    dl = rotate_right8 (dl, 0xa2);
    ch <<= 1;
    __asm ("clc");
    ax = rotate_right16 (ax, 1);
    eax = rotate_left32 (eax, cl);
    ecx = rotate_right32 (ecx, cl);
    ebp = (int32_t) di;
    ebx = (int32_t) bl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x114a10a8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void assert_fail (void) {
    assert_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x5ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
