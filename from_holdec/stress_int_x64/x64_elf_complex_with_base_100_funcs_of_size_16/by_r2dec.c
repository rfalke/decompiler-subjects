/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401380 */
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4013c0 */
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4013f0 */
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401430 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.7287) == 0) {
        deregister_tm_clones ();
        *(obj.completed.7287) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401460 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x408c90 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4016c0 */
#include <stdint.h>
 
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
 
int64_t log_size_4_var_002 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x4c181037d479c5f;
    rbx = 0x9ab73d91da503ee1;
    rcx = 0x238783ceed3d34d6;
    rdx = 0xcfaf7877b1f57e32;
    rsi = 0x630d54f97554ebac;
    rdi = 0xf4d529e6f4e35240;
    r8 = 0xf462871b3649c1a8;
    r9 = 0x4077cdcbbd58bcac;
    r10 = 0xa0975a4f6b02a100;
    r11 = 0x9910982bd2c9a5d6;
    r12 = 0x5688209348356a1c;
    r13 = 0x6474bf7c8ab187fb;
    r14 = 0x4b5f8b32d7b4028;
    r15 = 0x3650553981fa2bb9;
    di >>= 1;
    r15 = rotate_left64 (r15, 1);
    __asm ("cmovo r11w, r9w");
    __asm ("btc r11, 0xac");
    r15w >>= cl;
    r9d &= edx;
    rdi++;
    __asm ("cmovnp si, di");
    dh = (rdi != 0) ? 1 : 0;
    r9b = rotate_right64 (r9b, cl);
    bp = rotate_left16 (bp, 0xb3);
    al >>= 1;
    ecx = rotate_left32 (ecx, 1);
    __asm ("bsf ax, r12w");
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
    rbx = 0xa66950b34f68d99a;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401466 */
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
 
int64_t log_size_4_var_000 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xb9b7d6c77b52300b;
    rbx = 0xc6f0098cefb234fc;
    rcx = 0xa52528dd4fb83148;
    rdx = 0x6b977c14bfc331a8;
    rsi = 0xb076edf742a4f52b;
    rdi = 0x42b2a54f02dae784;
    r8 = 0x21f56542e2152e5d;
    r9 = 0x11cb5646106ce8f7;
    r10 = 0x14e8609ac97dbd99;
    r11 = 0xde430c734100034a;
    r12 = 0xcf5c3cb339dd7e21;
    r13 = 0xb56e349a43a3056a;
    r14 = 0xaa80d39669f1b505;
    r15 = 0x6c5fbed8af76e4e7;
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
    rbx = 0xa48de9d076758c19;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4040cb */
#include <stdint.h>
 
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
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_037 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x9c20938b2b71258a;
    rbx = 0x21dc61c4ee29a829;
    rcx = 0xb7d6d83ecdeb3617;
    rdx = 0x73f6beebc99baf69;
    rsi = 0x244c07304b8b3eb2;
    rdi = 0xdced189cfe7e565a;
    r8 = 0x75477e0b09eb45df;
    r9 = 0x4127414fb025ff43;
    r10 = 0xc31018923d226e0b;
    r11 = 0x88f51ee4e1790501;
    r12 = 0x3ab0e0db70f2596;
    r13 = 0x980577a11cd3474e;
    r14 = 0x8ce256b1bdce6ea0;
    r15 = 0xeb7e4c5deb8dcb5d;
    rbp = rotate_right64 (rbp, 0xe6);
    __asm ("shrd r10w, r9w, 1");
    __asm ("lahf");
    __asm ("shld r12d, r8d, 0xaa");
    dx += si;
    tmp_0 = ch;
    ch = cl;
    cl = tmp_0;
    di = rotate_left16 (di, 1);
    r11 = rotate_right64 (r11, cl);
    r8d >>= 1;
    r13 = rotate_left64 (r13, cl);
    al = ((r11 & r10) >= 0) ? 1 : 0;
    __asm ("bsf ecx, edx");
    __asm ("shrd edx, r14d, 0x5b");
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
    rbx = 0x8c99124a6787d183;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x403e67 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_035 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xfbd0499476e1ca5d;
    rbx = 0x1aab502f3f5c8a01;
    rcx = 0x50521efaa5987400;
    rdx = 0x11ceeee891c344ec;
    rsi = 0x55e91aa77b87011c;
    rdi = 0x1d11237a43fc18d0;
    r8 = 0xe556bfaca723e146;
    r9 = 0x7c1c1738c0520cb9;
    r10 = 0xfa6c0867c92a7783;
    r11 = 0x9156d67b75e14313;
    r12 = 0x25423764c57053b;
    r13 = 0x252d14583a09c874;
    r14 = 0x7b818d37eb4f4a49;
    r15 = 0x99b7c1190a77e0ae;
    si = rotate_left16 (si, cl);
    rcx = rotate_right64 (rcx, 1);
    __asm ("cmpxchg r12, rax");
    __asm ("stc");
    dl += bh;
    r11w <<= cl;
    rdx >>= 1;
    al += ah;
    ah &= al;
    r11b += cl;
    __asm ("stc");
    rbx += 0xffffffff862a4409;
    r10--;
    r9d ^= 0xf8387a88;
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
    rbx = 0xd8d43d2c08b3bc15;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x406f80 */
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
 
int64_t log_size_4_var_076 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xdaa1ce2a5072dfd8;
    rbx = 0xd17fa341298a6ca2;
    rcx = 0xd5e2a94f8f5c6656;
    rdx = 0xdfd6827110063004;
    rsi = 0x936f5ba9d32de213;
    rdi = 0x9e1b85d2955aef2e;
    r8 = 0xc55db70867abafcb;
    r9 = 0xfa442fa95b216277;
    r10 = 0x6450c3bcdb1be1e1;
    r11 = 0x70213bcab303bef0;
    r12 = 0x3a8c977a39328524;
    r13 = 0x17c4e328795f7ec6;
    r14 = 0x75ca3e9d593c72d2;
    r15 = 0x7a19b6c66786c3a8;
    edx = rotate_right32 (edx, cl);
    ecx = rotate_left32 (ecx, 0xb5);
    r10 = (int64_t) r15d;
    edx *= 0x55541080;
    r8 >>= cl;
    r10w = rotate_right16 (r10w, 1);
    __asm ("clc");
    tmp_0 = rbx;
    rbx = rsi;
    rsi = tmp_0;
    ah += al;
    if (ah > 0) {
        r8w = ax;
    }
    __asm ("stc");
    r11d -= edx;
    rdx:rax = rax * rsi;
    __asm ("clc");
    cx = rotate_left16 (cx, 1);
    r15 += 0xfffffffffee4057a;
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
    rbx = 0xba7448161dc1cbef;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4039a5 */
#include <stdint.h>
 
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
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
 
int64_t log_size_4_var_031 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x37e5ff031bfdb38;
    rbx = 0xe3e8816ae16c43b1;
    rcx = 0x7bf611bc523bd86f;
    rdx = 0xd4875d69349d74b6;
    rsi = 0x20150d45ac5a618f;
    rdi = 0xcacc0ab4ec3fa94a;
    r8 = 0x82fea5ce28bbf3ec;
    r9 = 0xa4e4a8c49bbab97c;
    r10 = 0xc9b81b3d38080b57;
    r11 = 0xca3e700404fbec4b;
    r12 = 0x6e2930e42a504c6c;
    r13 = 0xf1b98ad10a56a008;
    r14 = 0xf34b03735224bc2c;
    r15 = 0x7b7d857738ba1c79;
    __asm ("bsr r10d, esi");
    r8d = ~r8d;
    di |= 0x1db1;
    r10b = rotate_right64 (r10b, 0x8a);
    r13 = (int64_t) r11b;
    rbp >>= cl;
    r10d <<= 0xd1;
    rsi--;
    dx += r9w;
    r13b -= dl;
    edx &= 0x6ed8eea2;
    bp = (int16_t) ah;
    edx = SWAP32 (edx);
    __asm ("clc");
    eax = rotate_right32 (eax, 1);
    r15d >>= cl;
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
    rbx = 0x1b56f842fd4dee43;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x404319 */
#include <stdint.h>
 
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_039 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x768c4e8f76c5d210;
    rbx = 0x29396a451068770e;
    rcx = 0x111fd597ccd35723;
    rdx = 0xeb63778cc636e196;
    rsi = 0xe4e2f4ac45b8c2aa;
    rdi = 0x7cf3d215b3973f9e;
    r8 = 0x58f74531af83fe1b;
    r9 = 0xb1f2f5435291806;
    r10 = 0x74bcbf88b200f76a;
    r11 = 0x32967ae5738d3e23;
    r12 = 0x495757acd123b243;
    r13 = 0xfebd8a11a07629ac;
    r14 = 0x55eb8049c33a28ae;
    r15 = 0xc14aaac24c10cc4d;
    __asm ("shrd rax, rax, 0xad");
    r11 <<= 0xb9;
    r9w--;
    __asm ("btc r11d, r8d");
    bp = (int16_t) bl;
    __asm ("stc");
    r12 = rotate_right64 (r12, 1);
    edi -= 0x8bd0dbf8;
    __asm ("stc");
    ah -= 0x56;
    __asm ("cmovp rdi, r11");
    __asm ("shld r9d, r13d, cl");
    r8w &= 0xc2d1;
    if (r8w <= 0) {
        r13w = ax;
    }
    __asm ("cmovnp rbx, r10");
    r15d = rotate_right32 (r15d, 0x5f);
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
    rbx = 0x3ad105e718107143;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4071df */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_078 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xdba97a0b9e3cc019;
    rbx = 0x10dd8912e0e2131e;
    rcx = 0x7a2078e1533d5a25;
    rdx = 0x2f2b7fd35a2011f3;
    rsi = 0xf317d5a67ea5a9f1;
    rdi = 0x850ae5b476de1aeb;
    r8 = 0x1af21380e3c88c5f;
    r9 = 0xbe6daf777ae9a267;
    r10 = 0x8f8ec71010fea7ec;
    r11 = 0x576f0834284b3fe0;
    r12 = 0x3d05f82c23e26c06;
    r13 = 0xde9ca75eab6cf72;
    r14 = 0xf0a7c97c5f09b531;
    r15 = 0xe09b855aa396a395;
    edx:eax = eax * r11d;
    __asm ("cmpxchg dl, ah");
    __asm ("clc");
    rsi += 0xffffffffad87ae76;
    __asm ("clc");
    r10 = rotate_left64 (r10, 1);
    __asm ("stc");
    ch += ah;
    eax = (int32_t) r14b;
    al = 0x44;
    bpl |= 0x96;
    eax = (int32_t) ax;
    __asm ("setns r12b");
    __asm ("cmovno r9d, r15d");
    if (bpl >= 0) {
        r8d = edi;
    }
    rdx:rax = rax * r12;
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
    rbx = 0xbe03110be2b2aa68;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x403c12 */
#include <stdint.h>
 
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_033 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xe0b4f77ff3b72d19;
    rbx = 0x2931f53e5c382be;
    rcx = 0x9b0368c869d89eac;
    rdx = 0x3c29368109b97d6d;
    rsi = 0x8a8188086d65f5d7;
    rdi = 0x239cb5991e7430da;
    r8 = 0xe7aa1a9ceeacaa08;
    r9 = 0x70d7bda4f5fb795a;
    r10 = 0x7bde93a78b04e61;
    r11 = 0x40dcf307ae80fe2a;
    r12 = 0x87a3edea36e56d65;
    r13 = 0xc27cb3be31d229e8;
    r14 = 0x3e21f64103ddbaca;
    r15 = 0x876d4da6586fa90a;
    r9b <<= cl;
    __asm ("clc");
    __asm ("clc");
    r9 = rotate_right64 (r9, 1);
    r12d += ecx;
    rsi = (int64_t) di;
    r8w |= 0x4c8;
    edi = r13d * 0x6adddd53;
    tmp_0 = dh;
    dh = ch;
    ch = tmp_0;
    __asm ("clc");
    rdx -= r11;
    dil &= 0xbf;
    rdx &= 0xffffffff8dfb18f0;
    __asm ("clc");
    r10 = rotate_right64 (r10, 1);
    r10w += bx;
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
    rbx = 0xc4bed482759eb193;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40685a */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_070 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x8f9c6aa5b239da28;
    rbx = 0xd7f96057ac380af6;
    rcx = 0x85148537777f5cd6;
    rdx = 0x2f4d742fc8e0fadc;
    rsi = 0x61ef4e7acc395be2;
    rdi = 0x476da0d8d6997c40;
    r8 = 0x10beae5a6072696e;
    r9 = 0x7009a28899040f16;
    r10 = 0xfa339288a359c31c;
    r11 = 0xa438c32bac70fa92;
    r12 = 0x7ab2a55c16ad491d;
    r13 = 0x8bebd8e0432d6c00;
    r14 = 0xdaf6f46e04bc2f4a;
    r15 = 0x6a2b84d690505788;
    r14d = r14d + r12d*8 + 0x71387c09;
    rdx:rax = rax * rsi;
    r12w = rotate_right16 (r12w, 1);
    rdx >>= cl;
    r13d |= 0xbf4a260;
    ebp = SWAP32 (ebp);
    __asm ("stc");
    rdi = rotate_left64 (rdi, 1);
    rbx |= rsi;
    r10d <<= 1;
    bh ^= dh;
    r9d <<= 1;
    __asm ("cmovno r14, rsi");
    __asm ("cmovno r14, r14");
    rsi |= rdi;
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
    rbx = 0x241020defaeba197;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x406ab7 */
#include <stdint.h>
 
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
 
int64_t log_size_4_var_072 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x30482c2060f21eca;
    rbx = 0x197ebd28b203cf37;
    rcx = 0x1675b9d1a4a4ab1e;
    rdx = 0xf6056a75fd24d273;
    rsi = 0x761b14ffac3c66dc;
    rdi = 0x94ce875b575eb982;
    r8 = 0x8277ee292f855445;
    r9 = 0x4663cf3441cfd293;
    r10 = 0xc32eb7066c955b45;
    r11 = 0xdb96709272ea9516;
    r12 = 0xe14348985f83a5b5;
    r13 = 0x901c976f0bc2c521;
    r14 = 0xb1b3761420bff24e;
    r15 = 0x8dd22479ce285022;
    __asm ("shld r9, rsi, 1");
    si = rotate_left16 (si, 1);
    r9 <<= 0x73;
    r8w = (int16_t) dl;
    __asm ("stc");
    r14 += 0xffffffffdb3dc88c;
    r12b = rotate_left64 (r12b, 1);
    __asm ("clc");
    rbx -= 0xfffffffff99df6a4;
    dl += r13b;
    r8 = rbx;
    ebp >>= 1;
    __asm ("xadd r8b, r14b");
    rdx:rax = rax * r9;
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
    rbx = 0xf4dc0f45a6a45ec1;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x406d27 */
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
 
int64_t log_size_4_var_074 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x5e7e64c3bdea8a0f;
    rbx = 0xb5bc4635e3555096;
    rcx = 0xf75caf940569892f;
    rdx = 0x810ada4ccf215c2e;
    rsi = 0xf1753f465745ae95;
    rdi = 0xe6596a608eef059;
    r8 = 0xaff37a56ce2591f0;
    r9 = 0x9345c822adba5177;
    r10 = 0xe8841c4b943d0839;
    r11 = 0x2a86795aeab13e06;
    r12 = 0x5010b6c28bdbf041;
    r13 = 0x71c4bb930d3be3b5;
    r14 = 0xeefb740e25b41e;
    r15 = 0x876207aab62aa139;
    r15b |= 0x76;
    if (r15b < 0) {
        dx = bp;
    }
    __asm ("shrd r12d, esi, 1");
    __asm ("stc");
    eax = rotate_right32 (eax, 1);
    tmp_0 = r8d;
    r8d = ebp;
    ebp = tmp_0;
    __asm ("shld di, di, 1");
    rbx >>= 1;
    __asm ("clc");
    bpl = rotate_left8 (bpl, 1);
    __asm ("clc");
    r12b += dl;
    bp += cx;
    rsi = (int64_t) dil;
    dl -= 0x3f;
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
    rbx = 0x211601f9205e4bd;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40360a */
#include <stdint.h>
 
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
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_028 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x28100c7a04c48d76;
    rbx = 0x1f702ed8640b4e06;
    rcx = 0x2e575f5d5d9f4d50;
    rdx = 0xb86c847aa80b3e6f;
    rsi = 0x8d6f6e46ac0daf4d;
    rdi = 0xf7a977021af7e349;
    r8 = 0xfbe7962b0fe75d0e;
    r9 = 0x2beb7c92c19be11b;
    r10 = 0xd4f9b3e65c9219a6;
    r11 = 0x48a443086dda70c6;
    r12 = 0x6f695db325246a75;
    r13 = 0x4b4a2a6ae6e5375f;
    r14 = 0x8c3600b38fd9969;
    r15 = 0xecdac38d61b70d70;
    dil--;
    if (dil <= 0) {
        r15 = rbp;
    }
    eax = (int32_t) ax;
    r9w = rotate_left16 (r9w, 1);
    rdx:rax = rax * r8b;
    __asm ("bsf ecx, r10d");
    r14b = 0xd;
    r11w = r10w;
    __asm ("btc ebx, 0x3b");
    r13d = 0x8134f4f5;
    __asm ("shld r8d, eax, 1");
    edi -= esi;
    __asm ("clc");
    r9b = rotate_left64 (r9b, 1);
    eax = rotate_right32 (eax, 0x89);
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
    rbx = 0xf9e4c07326539409;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40671d */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_069 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x1186447bd767c459;
    rbx = 0x1a5e6c204982e2a0;
    rcx = 0x911206d9ed28e46e;
    rdx = 0x5b6d4d436266d7e;
    rsi = 0x677072d8d6ffafc7;
    rdi = 0x2819072b594b37e8;
    r8 = 0x41b7f51acfb027a8;
    r9 = 0xce5408cbdc395a65;
    r10 = 0x224bbe08262826c3;
    r11 = 0xe53372305f9ebc3c;
    r12 = 0x67cdbaa8ad0df9a;
    r13 = 0x351c7aa4f533c8cb;
    r14 = 0x55c299441f4884a4;
    r15 = 0xae2fb65b05892088;
    r11w -= 0xfe2d;
    bp = rotate_left16 (bp, 1);
    __asm ("cmovno rax, r14");
    cl -= 0xfb;
    r14w = rotate_left16 (r14w, cl);
    r14w = 0xf31b;
    r10d++;
    __asm ("bts edx, 0x79");
    __asm ("clc");
    esi -= 0x28dcf732;
    al += bh;
    __asm ("cmovp r12w, r11w");
    esi &= 0x928bd803;
    __asm ("stc");
    rcx += 0xffffffffd750b378;
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
    rbx = 0xba9e1cc6cee635f5;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4033a9 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_026 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x1e1dcba7e2e57dfb;
    rbx = 0x385c69a95933d5c;
    rcx = 0xae2d8b9abb0f3431;
    rdx = 0xc81b41cbbf372c7a;
    rsi = 0x518b5010e7157125;
    rdi = 0x4e2fd85f93db3d6d;
    r8 = 0xb5cbeea0ca3184a0;
    r9 = 0x13a563fd0c7ec416;
    r10 = 0xdedb7223145f00f2;
    r11 = 0x83b0b53dc54dff6f;
    r12 = 0xf41c4cadcc9acd5c;
    r13 = 0xf4c4251f939dc2df;
    r14 = 0x7bae4a6b0ad5957c;
    r15 = 0x8510b1eda65fdd62;
    edi <<= 1;
    ax += r14w;
    __asm ("clc");
    edi = rotate_left32 (edi, 1);
    rdi = (int64_t) r8w;
    __asm ("shrd dx, r9w, 1");
    rdx:rax = rax * r9b;
    r13d &= 0x800b630f;
    r11b >>= 0x92;
    __asm ("bts cx, r12w");
    bl = -bl;
    r8d |= 0xac806b25;
    if (r8d != 0) {
        dx = r9w;
    }
    dl += ch;
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
    rbx = 0x8860cc446a0bff2b;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x406251 */
#include <stdint.h>
 
int64_t log_size_4_var_065 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xc7462a3a300ffd7b;
    rbx = 0x3ec8272d8ae1e42;
    rcx = 0xec10b8f5b7276c9b;
    rdx = 0x7e88a10b559cc24c;
    rsi = 0xe80302cfb82170d5;
    rdi = 0x4de14023a83d8bfd;
    r8 = 0xae64f62844aa7178;
    r9 = 0xf7439b7db9d0d27f;
    r10 = 0x7a64e4281e95cd9e;
    r11 = 0xa417c52ea3fa839f;
    r12 = 0x6f75c92c0dfa8f2c;
    r13 = 0x7210f4d4434c80db;
    r14 = 0xa650e9fd00f9158c;
    r15 = 0x64b54edf84340fb6;
    ax = (int16_t) al;
    __asm ("shld r11d, r9d, cl");
    cl |= r9b;
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
    rbx = 0x54ebaa7ffac36648;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x402edb */
#include <stdint.h>
 
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
 
int64_t log_size_4_var_022 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xa65f4a7ee86d3422;
    rbx = 0xfa74be0945fba15f;
    rcx = 0xd606586738700f37;
    rdx = 0x95adfd553bba6d2c;
    rsi = 0x622b10c2fcf136f7;
    rdi = 0x31e95f41a0336f78;
    r8 = 0x9d2dffd100a1909b;
    r9 = 0xc02df2ff8fe7e976;
    r10 = 0x506a80fb688b01b0;
    r11 = 0x40831d0484d173fb;
    r12 = 0x805e0e2f2bfae43a;
    r13 = 0x4b4ce7c667b6ac49;
    r14 = 0xc0fa60dbb19b4c1d;
    r15 = 0x869b0e887a12223d;
    __asm ("btc ebp, esi");
    r8d |= 0xd5944637;
    dl++;
    r15d++;
    r14d = rotate_right32 (r14d, cl);
    __asm ("bts r9d, 0xce");
    __asm ("stc");
    al -= ch;
    ah -= ch;
    r11w >>= 1;
    r9b = rotate_right64 (r9b, 1);
    r15b &= 0x4f;
    r15w += 0xe84c;
    r14b += dil;
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
    rbx = 0xfd3562413154b400;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4064ba */
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
 
int64_t log_size_4_var_067 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x4d2517fd18a07da2;
    rbx = 0xf1245c6cbd2ffd08;
    rcx = 0xce9a8073ea611dc2;
    rdx = 0x21393f8dbddc5614;
    rsi = 0xc2bf1f04f6b678ef;
    rdi = 0xa3b26bdf2b95772f;
    r8 = 0x6c1485a3ac92ed4f;
    r9 = 0x286cf0b78ffe5511;
    r10 = 0x7a384bfe73002e8c;
    r11 = 0xb08147eac8f01971;
    r12 = 0xdf0b3f0227e4c2bb;
    r13 = 0x6871247909851940;
    r14 = 0x9cf97af3b1bdb3da;
    r15 = 0x634a386a045cfba9;
    __asm ("bts di, 8");
    __asm ("clc");
    r14 += rcx;
    __asm ("shld r11w, r12w, 0xc");
    bp = (int16_t) dh;
    esi = (int32_t) bpl;
    __asm ("clc");
    r9d -= 0x74d1c947;
    __asm ("stc");
    dl -= dh;
    rax = (int64_t) eax;
    di <<= 1;
    cx = rotate_left16 (cx, 1);
    r8d = rotate_left32 (r8d, cl);
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
    rbx = 0x80a7233be48750b0;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x403145 */
#include <stdint.h>
 
int64_t log_size_4_var_024 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x836cff112c1c3099;
    rbx = 0x9b002d99c5af28;
    rcx = 0xf6e88e784dde74b0;
    rdx = 0x653c114213240b53;
    rsi = 0xf70307b8678258f8;
    rdi = 0xafb89212c4a3c039;
    r8 = 0xaf6aad99c6f70935;
    r9 = 0xe577a48f4555d204;
    r10 = 0x9f8b33ea775c477c;
    r11 = 0x4a33d0deaba64bb6;
    r12 = 0xbbec1a1b7dddb84b;
    r13 = 0x8ea71dfbfce6af19;
    r14 = 0xac06393e885636ff;
    r15 = 0x6d033ed08807f57d;
    ebx += ebp;
    ax = (int16_t) al;
    __asm ("btr r9d, 0x9d");
    dh = ~dh;
    ax = al * ch;
    __asm ("btc rdi, r13");
    rax |= r12;
    r12d <<= cl;
    __asm ("clc");
    bp += 0x1248;
    __asm ("clc");
    bx += bp;
    rbx -= r14;
    __asm ("clc");
    r13d += r9d;
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
    rbx = 0xcc211d739a6d5e6c;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x408c98 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x405d88 */
#include <stdint.h>
 
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_061 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xe589227f7db81ab1;
    rbx = 0xd8301d1668c0c168;
    rcx = 0xd5f1b3af2596d211;
    rdx = 0xc8014b7dcee93282;
    rsi = 0xb590a1dd8e7c91bd;
    rdi = 0x423c603fbf18b217;
    r8 = 0x927ddfe90953c977;
    r9 = 0x28f9585f3fa82710;
    r10 = 0x93f13907f75d83ef;
    r11 = 0x1a2f1ce3404bb8fa;
    r12 = 0x7049889b2b3f6d93;
    r13 = 0xcab87c49241316b3;
    r14 = 0xaf02c8fa10ac2c6c;
    r15 = 0x8978541dae3f9bc0;
    tmp_0 = r8;
    r8 = r15;
    r15 = tmp_0;
    ax &= 0x296c;
    __asm ("cmovno r12, r15");
    __asm ("bts r11d, 0x38");
    __asm ("clc");
    r11w -= 0x85c4;
    dh = (r11w <= 0) ? 1 : 0;
    rax = (int64_t) edi;
    r15d |= r15d;
    bl -= dh;
    r11w = r11d + ecx*4 + 0x41f813d4;
    __asm ("btc ecx, r15d");
    r15 = rotate_right64 (r15, 1);
    if (bl < 0) {
        r8d = r15d;
    }
    r15w = (int16_t) bpl;
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
    rbx = 0x2f5e28051cc7a182;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x405ff2 */
#include <stdint.h>
 
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
 
int64_t log_size_4_var_063 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xed3be2fea0090e5;
    rbx = 0xe7ecd150329492df;
    rcx = 0x73dbd490959937cb;
    rdx = 0x752847d5a01d16b9;
    rsi = 0xaeb00dced5a1f817;
    rdi = 0x5cd5a6fa85ae50fd;
    r8 = 0x846aae808f73480a;
    r9 = 0xb74bbd1283556d91;
    r10 = 0x51b30eaecf728ce1;
    r11 = 0x38a10f19862565d4;
    r12 = 0x72e47bd11e1ea695;
    r13 = 0xeb87344fbd23b36d;
    r14 = 0xeacbb712666d309d;
    r15 = 0x66c0325699e017b3;
    r9 = rotate_right64 (r9, 1);
    r13 <<= 0x7d;
    rdi = esi + r8d*4 - 0x2d13f2d9;
    r11w = rotate_right16 (r11w, cl);
    r9d += 0x4000e94a;
    ax = al * bh;
    dx *= 0x5424;
    __asm ("clc");
    edx:eax = eax * ebx;
    rdi = (int64_t) r9d;
    __asm ("stc");
    sil -= bl;
    di >>= 0x32;
    edx:eax = eax * r8d;
    r11b = rotate_right64 (r11b, 0xeb);
    rbx = rsi;
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
    rbx = 0xb3162c0c3cd04da9;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x402c5c */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
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
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_020 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x1ee655bfc0ae85a6;
    rbx = 0x7219bef365b70969;
    rcx = 0x6fb19038f505abc2;
    rdx = 0x39370f78d5238f53;
    rsi = 0xeec5635ceb279ce8;
    rdi = 0x40b1064fecac6029;
    r8 = 0xd634dfac0d003a56;
    r9 = 0xabd17924d3b64f33;
    r10 = 0xeb4c8c7a9328c311;
    r11 = 0x81abf55570d414e2;
    r12 = 0x23df4222e6bbd5e8;
    r13 = 0x45fba9237bdc8011;
    r14 = 0x3f5ee0ad4a93f382;
    r15 = 0xb4acb80a185c47f8;
    dil = rotate_left8 (dil, 0x1a);
    __asm ("shld r14d, r14d, 1");
    rbx = rotate_right64 (rbx, cl);
    edi += 0x394f79ed;
    rdx:rax = rax * rdx;
    ax >>= 0x13;
    tmp_0 = rcx;
    rcx = rdx;
    rdx = tmp_0;
    rdx = SWAP64 (rdx);
    r15d *= 0x987fd107;
    tmp_1 = dl;
    dl = bh;
    bh = tmp_1;
    r15d = r10d + eax*4 + 0x93;
    rdi += 0x5878d115;
    eax >>= cl;
    r15d = rotate_left32 (r15d, cl);
    ebp = (int32_t) cx;
    __asm ("shld r14, r14, 1");
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
    rbx = 0x6db88d6be3ac7e1b;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40564f */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
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
 
int64_t log_size_4_var_055 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x61fcd5ee6e1ebf6e;
    rbx = 0x23ce8741b94cb1b8;
    rcx = 0xa76d14dd366fa5d8;
    rdx = 0xb59b3ad87b6e957d;
    rsi = 0xf0b003533dc342a6;
    rdi = 0x477689a4da8e668e;
    r8 = 0xd7e2df0d61915af5;
    r9 = 0xecbb4e164dac1c75;
    r10 = 0x6ce1b6a05c067ca4;
    r11 = 0xdb38565099ef8acb;
    r12 = 0x1fb6343b619d6199;
    r13 = 0x51e0ab93785e7100;
    r14 = 0x873788894047cfe4;
    r15 = 0x87122d91da908cf9;
    __asm ("bsf r12w, r11w");
    r11 >>= 1;
    r11w = rotate_left16 (r11w, 1);
    rdi = rotate_right64 (rdi, 0xc);
    rdi -= 0xffffffff9720e34a;
    __asm ("clc");
    r10w = rotate_right16 (r10w, 1);
    rbp = rotate_right64 (rbp, cl);
    __asm ("btr ebx, ecx");
    r8d <<= cl;
    __asm ("bts r12w, 0x50");
    ax = al * dh;
    r12 >>= 0x14;
    rsi -= 0xe317876;
    ax = al * bpl;
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
    rbx = 0xdf8c5f2baab52;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4089bf */
#include <stdint.h>
 
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
 
int64_t log_size_4_var_098 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x2413e32e822a1d87;
    rbx = 0x1cd894cde3d9741e;
    rcx = 0x4b43aa38533e864e;
    rdx = 0xb4254b6ff2f321ed;
    rsi = 0x933f84a1f7a3bfcb;
    rdi = 0xc1f07485eea24a9d;
    r8 = 0xd0f6d530c2ccaef3;
    r9 = 0xd76f0038e5ab720b;
    r10 = 0xf8804a8545582efd;
    r11 = 0x508965c9de770085;
    r12 = 0x1a0d4c09f0ed46aa;
    r13 = 0xfb8c74ade8633e9d;
    r14 = 0x56e0f2358b876660;
    r15 = 0x1b553b0745a47d09;
    __asm ("bts rsi, r8");
    if ((dh & ch) <= 0) {
        r10w = di;
    }
    __asm ("stc");
    r14 -= 0x3bfc2cb1;
    r9 = rotate_right64 (r9, 0x37);
    r13w <<= 0xed;
    r15b = -r15b;
    __asm ("clc");
    r11d += 0xcc29c2c6;
    __asm ("stc");
    r9w = rotate_left16 (r9w, 1);
    r11d &= r10d;
    bx >>= cl;
    dl >>= cl;
    di <<= 1;
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
    rbx = 0x58bc5742467c34e6;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4053de */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_053 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x71510ea37f55456b;
    rbx = 0x4d7fbeaac4e10fe6;
    rcx = 0xc7fee4ac7b9a8514;
    rdx = 0x9b2361bdd767b52f;
    rsi = 0xa3165d0afc14e706;
    rdi = 0x78a56289e4ba1ef9;
    r8 = 0x4ff041787a90284f;
    r9 = 0x85caafc35df1b557;
    r10 = 0xbe3341116ad5087e;
    r11 = 0x4da07bdb3768f2e4;
    r12 = 0xd77695492fb4242f;
    r13 = 0xe562501716142a3d;
    r14 = 0x87289440ee4fc8a4;
    r15 = 0x8939b13c92dce40f;
    r13w |= r8w;
    di = ~di;
    __asm ("cmovs ebx, r14d");
    edx += 0xef94005b;
    rsi >>= 0xdb;
    r10d += 0x43ef23f0;
    dl += dil;
    r8 <<= 1;
    r12 = rotate_left64 (r12, cl);
    if ((r13 & 0xffffffffdeda739f) <= 0) {
        r10d = esi;
    }
    __asm ("stc");
    r11 -= 0x49351735;
    __asm ("btc r15w, r13w");
    r15 = (int64_t) r10w;
    __asm ("btr r8, 0xba");
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
    rbx = 0x3f911b09d2238214;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4084ff */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_094 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x9f3b8f94ece3a057;
    rbx = 0x102ee23b2980989a;
    rcx = 0x930429950923bde;
    rdx = 0xc9721f661d552470;
    rsi = 0x4ab4878cd35c4809;
    rdi = 0x52a6565353eaa0b5;
    r8 = 0x1abfc66662430864;
    r9 = 0xdf4b3b3d97e0fa1b;
    r10 = 0xfb08e0b8c7298a;
    r11 = 0xed1d0cd7a87371e0;
    r12 = 0xb0bb6764bfda2f59;
    r13 = 0xec84f9e4b9c40aee;
    r14 = 0xc4ae3154567ac065;
    r15 = 0x683182ad0060151;
    rcx >>= 1;
    __asm ("stc");
    r14d += 0x31e4b5a3;
    r13d >>= cl;
    __asm ("bsf ebp, esi");
    __asm ("clc");
    dx -= 0x7d24;
    r15d = rotate_left32 (r15d, cl);
    __asm ("bsr r15, rbp");
    __asm ("xadd dl, ch");
    if (dx > 0) {
        eax = r11d;
    }
    r15d = rotate_left32 (r15d, 0x59);
    r13d &= esi;
    r14 += 0xfb5bacc;
    rdx += rsi;
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
    rbx = 0x5f27071d478516ac;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4058b5 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_057 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x5221f5a9b072f620;
    rbx = 0xbc994629f0f4e838;
    rcx = 0x1ee5cc73d922157c;
    rdx = 0x6bcde8b40c23746d;
    rsi = 0x4780bbd8edbadbf1;
    rdi = 0x8c969b41448e8e2f;
    r8 = 0xe5c3d6f2adb3041a;
    r9 = 0xe7fbbb690082fc5c;
    r10 = 0x596196647e79604;
    r11 = 0xe7627568faadad08;
    r12 = 0x7f7b454a01c51592;
    r13 = 0x6919d346d8f49eec;
    r14 = 0x1866a06501679494;
    r15 = 0x324589854f086671;
    rsi = r8;
    rdx:rax = rax * rbp;
    __asm ("shld r10d, ebx, 0x89");
    tmp_0 = r14b;
    r14b = r13b;
    r13b = tmp_0;
    __asm ("shrd r10w, cx, 1");
    rdi -= 0x6d091047;
    esi = (int32_t) bx;
    r14w = r8w;
    __asm ("clc");
    r10w -= 0x2c7d;
    __asm ("btr rbx, rdx");
    __asm ("clc");
    rbp = rotate_left64 (rbp, 1);
    r11d = 0x7640c92c;
    r13 -= 0xffffffffc0743c55;
    __asm ("stc");
    ax = rotate_right16 (ax, 1);
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
    rbx = 0x7ac35d07cb1a822a;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x408763 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_096 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xeaf2f206c34cd831;
    rbx = 0x5a6748ad912c62ed;
    rcx = 0x9fe826eb6109602d;
    rdx = 0x455d97323be3d92d;
    rsi = 0x83821d8ef152b656;
    rdi = 0x7310c9e556447da9;
    r8 = 0x556c8c30853cb5ab;
    r9 = 0xb6c633c5e1c02be1;
    r10 = 0xdc8d19018050e2f;
    r11 = 0x4ba66b099b4544ae;
    r12 = 0x67d433f1f6f5ba0f;
    r13 = 0x3960501a257bc717;
    r14 = 0xf22f451022be7a4c;
    r15 = 0xa6ab0b9a1e7f170;
    r14w = r15 - 0x48d3dc8e;
    r10d <<= 1;
    __asm ("stc");
    r9d -= ebx;
    edi ^= r11d;
    ecx = r15d + r15d;
    __asm ("clc");
    r11w -= r11w;
    eax |= r11d;
    rdx:rax = rax * r12;
    r8d &= 0x7b45fed9;
    dl = rotate_left8 (dl, cl);
    r14 = rotate_left64 (r14, cl);
    ch >>= 1;
    ax = al * sil;
    __asm ("xadd r9, r9");
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
    rbx = 0xe8d714932ed13f0;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40517f */
#include <stdint.h>
 
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
 
int64_t log_size_4_var_051 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xf8fb9c9b2eb3f99a;
    rbx = 0xc731a0d4a7f9475e;
    rcx = 0x840f4fecc5be568a;
    rdx = 0x2923c6763feaa918;
    rsi = 0x979d9284edb36767;
    rdi = 0x3dfbc0c8af9e5874;
    r8 = 0xc9d35810d8e99e6;
    r9 = 0x8f40f45121a93970;
    r10 = 0x3785fbacdc73f035;
    r11 = 0x111de8ecea9cc39a;
    r12 = 0x9a055d7c19eff428;
    r13 = 0x8ae6f8e989b4ffb9;
    r14 = 0x73b4027e9798ce7f;
    r15 = 0x26dc77adade88064;
    __asm ("cmpxchg r9, r11");
    ebx = r11d * 0xd67f6a34;
    __asm ("stc");
    rax -= rbx;
    r9w++;
    dil <<= 1;
    r9d = (int32_t) r13b;
    r13b -= r14b;
    cl <<= cl;
    __asm ("bsr rdi, r10");
    r13b = rotate_left64 (r13b, 1);
    r15d = ~r15d;
    cl += bh;
    __asm ("clc");
    sil = rotate_left8 (sil, 1);
    r15 >>= 1;
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
    rbx = 0x98ce15572ac0aebb;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x402529 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_014 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x2c3a33ceb89be04b;
    rbx = 0x607fc4adf3274f51;
    rcx = 0xd5bd64425054395d;
    rdx = 0x37aa6847392500c;
    rsi = 0x445c3d28c5b177e5;
    rdi = 0x90c979a63eb0185c;
    r8 = 0xd6ca523288b203c9;
    r9 = 0x96efb2ce9ca30967;
    r10 = 0xd3f2abcfc348bace;
    r11 = 0x4a1d778f7d4cdc1;
    r12 = 0x89bd464d79c2de08;
    r13 = 0xc2f30b45dcbcdb3b;
    r14 = 0xb0041cf9b23f8722;
    r15 = 0x49e1bf06403951;
    si >>= cl;
    bpl &= r10b;
    dx:ax = ax * r14w;
    __asm ("stc");
    r8d -= 0xb121604a;
    tmp_0 = r12b;
    r12b = dl;
    dl = tmp_0;
    dx:ax = ax * r11w;
    ch = rotate_left8 (ch, 0x38);
    __asm ("clc");
    r15 = (int64_t) r12w;
    ax = al * ch;
    edx:eax = (int64_t) eax;
    rcx -= r8;
    __asm ("stc");
    r12 += 0x2b0087e6;
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
    rbx = 0x32dd3b114ee3a008;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x402786 */
#include <stdint.h>
 
int64_t log_size_4_var_016 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x1d5d02ced28b7bf4;
    rbx = 0x7066f97b26a6d7b0;
    rcx = 0x4d986f080cfb3c80;
    rdx = 0x9c3500af95cfd25c;
    rsi = 0x463fe84ef6174b0b;
    rdi = 0x8433eec42e97dcb6;
    r8 = 0x3848d962ea300f0a;
    r9 = 0x92d8229c7a56ef9b;
    r10 = 0x41739df94f4c4dc9;
    r11 = 0xc2a4e5fcf2bee788;
    r12 = 0x8ac77decb7f5ddff;
    r13 = 0x4135b3ec969396c0;
    r14 = 0xb283b79f11e052b7;
    r15 = 0xe67cbd55adc3fa93;
    r11 = (int64_t) r10b;
    ebx ^= edi;
    rbx = (int64_t) di;
    ebp = (int32_t) al;
    __asm ("stc");
    r12w += 0xfbeb;
    r12b = ~r12b;
    rbp++;
    if (rbp != 0) {
        r13d = r11d;
    }
    if (rbp != 0) {
        di = r11w;
    }
    __asm ("cmpxchg dx, si");
    __asm ("clc");
    esi -= 0xbe1a2d24;
    __asm ("btc r15w, 0x94");
    r12b = (esi != 0) ? 1 : 0;
    __asm ("cwd");
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
    rbx = 0xbbbaee2707597b71;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x408033 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_090 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xf0565c6317e0cb76;
    rbx = 0x8c76ede2ceebb74d;
    rcx = 0xe05f09d4b5e74ef9;
    rdx = 0x731951269e0c44ca;
    rsi = 0x6130e30ffe6af577;
    rdi = 0xb2dcec2e99d40382;
    r8 = 0xbb4c89c71ac4af2b;
    r9 = 0x3ebaaa63f48d420f;
    r10 = 0xce011525d1ee3436;
    r11 = 0xf061d8d09597e5d5;
    r12 = 0x384deae7ef44b506;
    r13 = 0xeac9b7eb65c6b812;
    r14 = 0x85e97b227fcf74fd;
    r15 = 0x7944546dbf7332fb;
    __asm ("shrd eax, r11d, cl");
    rbp++;
    rdx++;
    if (rdx < 0) {
    }
    dx = ax;
    __asm ("stc");
    r11d -= r11d;
    __asm ("stc");
    bpl += r11b;
    ah = rotate_left8 (ah, 1);
    bx >>= 0xc4;
    tmp_0 = r11d;
    r11d = ebp;
    ebp = tmp_0;
    dx = ~dx;
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
    rbx = 0xde4ad3d3f21f08f1;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4029ea */
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
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_018 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x481931676651b5cc;
    rbx = 0x187414dbbe97cdd3;
    rcx = 0xbcb56b074e5269b2;
    rdx = 0xe75e13b20b89e610;
    rsi = 0x28da7056bda81169;
    rdi = 0x8dbbcbe87124379f;
    r8 = 0xe8ed55f30d425fc7;
    r9 = 0x513480df55a88d2b;
    r10 = 0xe2866e0667d281f2;
    r11 = 0xa23a9ec607d48378;
    r12 = 0xab088958fd8f4fc7;
    r13 = 0x111fe5d7d9bd5228;
    r14 = 0x89d9dc530895b597;
    r15 = 0x62ef71d12b1b2437;
    r12w = r8 * 9;
    __asm ("bts rsi, 0x80");
    __asm ("btr rbx, 0x70");
    __asm ("clc");
    r12 -= 0x37fa3bdb;
    ebp = (int32_t) cl;
    if (r12 < 0) {
        r13w = si;
    }
    r10 = rotate_right64 (r10, cl);
    r13d = rotate_left32 (r13d, 1);
    ax = al * sil;
    if ((r10b & 0xec) > 0) {
        r12w = bp;
    }
    r12w = rotate_right16 (r12w, 1);
    r8w += di;
    rdx:rax = rax * r14b;
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
    rbx = 0x6668823c060a6765;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40828e */
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
 
int64_t log_size_4_var_092 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xc8be9f5ecb31f16d;
    rbx = 0xe20dbf386244af99;
    rcx = 0xd7e71c667513b20f;
    rdx = 0x9803a8cccb8983a0;
    rsi = 0xe87cb13220b0f9f;
    rdi = 0x985e3dfae0b5cec1;
    r8 = 0xaacd5ff7c4fa6147;
    r9 = 0x3ce897a04747b9bc;
    r10 = 0x6503b2b528d5f839;
    r11 = 0xbdaec4134b4eea6d;
    r12 = 0x2c963b710af7e9af;
    r13 = 0x8de7de02387de56e;
    r14 = 0x875ad5eeb91cc1c9;
    r15 = 0x76b858c057d0e76e;
    rbp = r11 * 0xffffffff8dcca460;
    __asm ("clc");
    r8b += dil;
    sil = rotate_right8 (sil, cl);
    r13d = edx * 0x223e9f89;
    dl -= al;
    __asm ("bsf cx, di");
    __asm ("shld r10w, r11w, 0xa");
    __asm ("btc r9d, edi");
    __asm ("clc");
    r12b -= r11b;
    r15d = rotate_left32 (r15d, cl);
    __asm ("shrd r9, rax, 0x5d");
    r9 -= 0x3c55ce9a;
    edx:eax = (int64_t) eax;
    r15d &= 0xd20f8e8d;
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
    rbx = 0xb04b6aa3d1e2a2e1;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x405b20 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_059 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xb669e77d5d4ce363;
    rbx = 0xce7542f6415e7c02;
    rcx = 0x3c9671e8333d589a;
    rdx = 0xd3379a44bcf848f5;
    rsi = 0xfb85951ef41b5b23;
    rdi = 0xa4ab3e5155c3270;
    r8 = 0x8a4c763d6b6712ad;
    r9 = 0x4b45fd8501075bb5;
    r10 = 0xfda2e1d13367a1b1;
    r11 = 0x80db1ac84cd31c8e;
    r12 = 0x20483eef7fb1714;
    r13 = 0x993d3a45ca06e572;
    r14 = 0xcdf22ac9b9456701;
    r15 = 0x6ba98ea94fd1be76;
    ah ^= cl;
    rax <<= 2;
    rdx:rax = rax * r10b;
    edx:eax = eax * r14d;
    __asm ("cmovo r12w, bx");
    r13++;
    __asm ("cmovs rbx, rbp");
    bl >>= 1;
    __asm ("shrd rdx, r8, 1");
    ecx += r13d;
    __asm ("xadd r9b, al");
    __asm ("stc");
    ch -= 0xc1;
    __asm ("btc r11w, 0xfe");
    __asm ("stc");
    di = rotate_left16 (di, 1);
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
    rbx = 0xfedc8759540dd707;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4022ba */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_012 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x989251d56fc0b4f4;
    rbx = 0xf382ffbd98795522;
    rcx = 0x1ccb7c977a7631ff;
    rdx = 0x8611ebf1f8f12456;
    rsi = 0xe53f8a202e978027;
    rdi = 0xeb6a3b7c17bb9dbe;
    r8 = 0xde68bfc8556534ce;
    r9 = 0x73d898586d027526;
    r10 = 0x4f29f577a986ead9;
    r11 = 0x75c53e8e1124cc51;
    r12 = 0x8d64f4da61c37cb5;
    r13 = 0xd8df9c50df714201;
    r14 = 0x880bd07e9ca5c238;
    r15 = 0x8f9773517a65a1d8;
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
    rbx = 0x5998889f25ad980;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x402045 */
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
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_010 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x179e2df321862ba4;
    rbx = 0x2131779a839b3003;
    rcx = 0xcd35e1804a887ccf;
    rdx = 0x4ef1e3a3303438d;
    rsi = 0xd05a2e4255732a05;
    rdi = 0x30cf7ff3ce61d090;
    r8 = 0x97fdafb53595391;
    r9 = 0xfbc73b780b4eb0d;
    r10 = 0x149c48fb0ba6ef01;
    r11 = 0xcabbc88df97f9dc4;
    r12 = 0x192e36a96696f588;
    r13 = 0x574b076df90b38f0;
    r14 = 0x87adf90a913e0381;
    r15 = 0xf5c8726b920a22a2;
    __asm ("cmpxchg r10w, r8w");
    rdx = rotate_left64 (rdx, 0x96);
    __asm ("btr ax, 0x67");
    r11d += r9d;
    r8 = 0xc000000000000000;
    rbp |= r8;
    r8 = 0x3fffffffffffffff;
    rdx &= r8;
    rax = rdx:rax / rbp;
    rdx = rdx:rax % rbp;
    edx:eax = eax * edx;
    rsi = (int64_t) si;
    r8w >>= 0xab;
    __asm ("shrd rbx, rsi, 0x94");
    cx = rotate_left16 (cx, cl);
    r11 = rotate_right64 (r11, 0xc);
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
    rbx = 0xd9378352bda3b346;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x407efc */
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
 
int64_t log_size_4_var_089 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x1788d506e098b93b;
    rbx = 0x660823c5b68e6f54;
    rcx = 0x49446a602c53cd58;
    rdx = 0xf46b8f6c28cbaaad;
    rsi = 0x776477bb78d09912;
    rdi = 0x3312ec2ba8760ae5;
    r8 = 0x6a9ddbcb2efd5cbc;
    r9 = 0xb38a442af045dab4;
    r10 = 0x6115e89e1d243cdc;
    r11 = 0x17f01e5ffe68cace;
    r12 = 0x9ff2b2d07e6ba3f3;
    r13 = 0xfb839a44bb9d4ead;
    r14 = 0x1e01ac948f949bc2;
    r15 = 0xfcfcac77b8d813f3;
    rdx = rbx + 0x65;
    r10d = rotate_right32 (r10d, cl);
    __asm ("btr eax, 0xca");
    dx <<= cl;
    r15d >>= 1;
    r15d--;
    al = (r15d != 0) ? 1 : 0;
    r13w = rotate_right16 (r13w, 1);
    r13w >>= 0xf;
    __asm ("btc r10w, r15w");
    ax = (int16_t) al;
    __asm ("bts ecx, edx");
    bh ^= dh;
    rcx -= 0x50e8d378;
    __asm ("stc");
    rbp -= 0x216dcf50;
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
    rbx = 0x7a94f27e22864947;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x404b65 */
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
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_046 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xa71478d592375510;
    rbx = 0xeaa5191cdcbf8f06;
    rcx = 0x2bcd33b4c77baad4;
    rdx = 0xb3e68458cf6191f5;
    rsi = 0xc4da2f0e1dee8eb9;
    rdi = 0xf78fcfae64cdde28;
    r8 = 0xd7af90c9e0b4ab5e;
    r9 = 0x16eb1064de8bb846;
    r10 = 0x8b3ea90225137cfd;
    r11 = 0x8c5f1996f8fcb8f7;
    r12 = 0x8362c9c72cd3249d;
    r13 = 0x3cb61327915277eb;
    r14 = 0xace75062dbe62474;
    r15 = 0xb6d65f49500524f9;
    __asm ("btr ax, 0xf1");
    bx = rotate_right16 (bx, 1);
    if (r14 > 0xfffffffff4b46e0f) {
        ecx = r9d;
    }
    r15d &= 0xfc8d87ac;
    r13d = rotate_right32 (r13d, cl);
    r8d = -r8d;
    dh = rotate_right8 (dh, cl);
    __asm ("bts r14d, 0xa4");
    __asm ("xadd cl, dil");
    rdx:rax = rax * r9;
    __asm ("cmpxchg bh, ch");
    dl &= r10b;
    r14b = rotate_right64 (r14b, 0xab);
    ecx >>= 1;
    r11w = rotate_right16 (r11w, 0xe5);
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
    rbx = 0x3e4b0885966d4f1d;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x407ca1 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_087 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x3c28c048a36142ac;
    rbx = 0x2fb602ba832ca47f;
    rcx = 0x5001ef74baf8d56c;
    rdx = 0x28c7b6e71f94200;
    rsi = 0xebd44411dccc2a7a;
    rdi = 0x7e130eb5f0c35b0;
    r8 = 0x9a152a9979cd6e0e;
    r9 = 0x2123c3deb81ba764;
    r10 = 0x5202168a1bf9dbb6;
    r11 = 0x394554ccab19c046;
    r12 = 0xba64ab29e803b5be;
    r13 = 0x858faf751b2e5043;
    r14 = 0xf68d580993ac18b0;
    r15 = 0x69897576f0ea4665;
    sil = -sil;
    __asm ("bts ebp, r9d");
    r13d = rotate_right32 (r13d, 1);
    __asm ("cmc");
    rdx = ~rdx;
    __asm ("stc");
    r12 -= r13;
    r13w >>= 1;
    r13w <<= 0x79;
    __asm ("btr r15, 0xc8");
    cx++;
    __asm ("cmovs r8d, r14d");
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
    rbx = 0x73f053e7ef184121;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x404912 */
#include <stdint.h>
 
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
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_044 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x2f0243db2e3ac01d;
    rbx = 0xe58f3fe1d5aa9b9d;
    rcx = 0x20303bd268a92993;
    rdx = 0x4032485a2dd4a8f4;
    rsi = 0x14f45b292548cd92;
    rdi = 0xb4dcf0efaab8817c;
    r8 = 0x11127187a688131d;
    r9 = 0x8a74072a6bbb5844;
    r10 = 0x7483029a6e8abe0e;
    r11 = 0x907e78bb815773ce;
    r12 = 0xadf87ee5c4739566;
    r13 = 0x7064e6fc2d9bb76;
    r14 = 0x3bda42c5225e1147;
    r15 = 0xfa36784f9cf34511;
    bx = di;
    r15b <<= cl;
    r9 = rotate_left64 (r9, 0xa0);
    ecx = -ecx;
    dil = rotate_left8 (dil, cl);
    r11d <<= cl;
    __asm ("btc eax, 0xeb");
    r10w &= bx;
    si = r9w * 0x2bc0;
    __asm ("clc");
    r15b = rotate_right64 (r15b, 1);
    __asm ("bts r9w, r14w");
    bl <<= cl;
    r13b ^= cl;
    al ^= 0xef;
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
    rbx = 0x29cc97230c0fe5de;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401f1c */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_009 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xe69760d2cb828e6b;
    rbx = 0x1cce24c94b374e06;
    rcx = 0xfe62695a3ff86011;
    rdx = 0x29927646921e28a5;
    rsi = 0x6289a077e290b0b0;
    rdi = 0xbb2d6f02d4f23d0a;
    r8 = 0x682310a0414f8f21;
    r9 = 0xaffe0ef57ee0a4de;
    r10 = 0x6821f8236357531a;
    r11 = 0x2a7ae0fdf92593e5;
    r12 = 0x236a9499fd275026;
    r13 = 0x6ec0c1e040936c51;
    r14 = 0xd54a0707adb4d2;
    r15 = 0xf6fb6d3a08c52154;
    r9b >>= 0xfb;
    edx = -edx;
    edx:eax = eax * ecx;
    __asm ("bsr bp, r13w");
    if (ah != 0) {
        cx = bx;
    }
    dh >>= 1;
    if (dh < 0) {
        ax = r10w;
    }
    __asm ("cmpxchg r10w, si");
    eax = (int32_t) ax;
    rax = (int64_t) r15w;
    r8b &= sil;
    __asm ("clc");
    r15 = rotate_left64 (r15, 1);
    r8b++;
    rcx += rcx;
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
    rbx = 0xeb9b43f08dd13ea8;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4077d7 */
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
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_083 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xaf306e9db427edec;
    rbx = 0x4e35744a64b68145;
    rcx = 0xe8f3700286f2762b;
    rdx = 0xcfc887ae1e6d538d;
    rsi = 0xcf6856b92b34b22c;
    rdi = 0xa788077b87f9d9db;
    r8 = 0x8ae3f5d7f0eb31c5;
    r9 = 0x361ac5ad800895f8;
    r10 = 0x25dd6629205c4bff;
    r11 = 0xde8392e854143b84;
    r12 = 0xa7042c26ee3b552d;
    r13 = 0xcc861d854c7d195c;
    r14 = 0x4c77a7d62d168aa5;
    r15 = 0xb62b28b8832fa8c6;
    __asm ("bts r10, 0xf0");
    bpl |= al;
    __asm ("clc");
    r10w -= 0x80aa;
    ch = rotate_right8 (ch, 1);
    __asm ("cmovno r13d, ebp");
    rdx:rax = rax * rbp;
    bx = rotate_right16 (bx, 0xd3);
    r13d = 0x2e9a12c5;
    rdx <<= cl;
    eax += r8d;
    __asm ("stc");
    r12 -= 0xfffffffff6efa9b8;
    if (r12 < 0) {
        r13 = rax;
    }
    r12w = rotate_left16 (r12w, cl);
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
    rbx = 0x123044edac4921e0;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40444f */
#include <stdint.h>
 
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
 
int64_t log_size_4_var_040 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x12f38be1aab3bd01;
    rbx = 0xd425afc926b45590;
    rcx = 0x8ef141f1d8ad8a40;
    rdx = 0xadd256697ab5e7a7;
    rsi = 0x41e446f8b420e252;
    rdi = 0x4b4d9b62102d3ab5;
    r8 = 0x6a809cd09816ccab;
    r9 = 0x37819173bd42242e;
    r10 = 0xe6d0af8865ae158f;
    r11 = 0xb3095f8fc4bb1ab4;
    r12 = 0xf81ed68cd6b4fa90;
    r13 = 0xbc1e1978ae17611b;
    r14 = 0xb9542c52f5d1594d;
    r15 = 0xf1d82fecdcdd22e2;
    cl &= 0xf;
    __asm ("shld r11w, bx, cl");
    rsi >>= 8;
    r8 = r12;
    r10w = r14w;
    r8 += 0xcb0009b;
    r13 = rotate_right64 (r13, cl);
    __asm ("cmpxchg r13b, r10b");
    __asm ("clc");
    rdi += r9;
    __asm ("btc di, 0xec");
    __asm ("shld r10d, r12d, cl");
    dl = rotate_left8 (dl, 0x6e);
    __asm ("shld ebp, edi, 1");
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
    rbx = 0xe900f8f9cde55cae;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x404dd4 */
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
 
int64_t log_size_4_var_048 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x7d873a595853a14f;
    rbx = 0x4d1f72a76ee4cde1;
    rcx = 0x696c334f656af5c0;
    rdx = 0xd86269bba34df414;
    rsi = 0x2abe29acd4644e8c;
    rdi = 0x1443f553cb49a1e;
    r8 = 0x3db08388b16514ee;
    r9 = 0xee75e015742d5444;
    r10 = 0x7aed7abd3b9ee75b;
    r11 = 0xc7e606a0335c4ebc;
    r12 = 0xbbb870e26b448361;
    r13 = 0x3ed741d5a4fa458c;
    r14 = 0x2dc34751ceb43161;
    r15 = 0xbc550dc3215f80ae;
    cx = (int16_t) ch;
    ebx -= ecx;
    r10w = ax * 0xf86c;
    edi -= ecx;
    __asm ("cmpxchg dh, dl");
    r9d = rotate_left32 (r9d, cl);
    dh = rotate_left8 (dh, 1);
    r11w &= 0xcc91;
    if (r11w > 0) {
        eax = ebx;
    }
    rcx += 0x21f1fc4b;
    __asm ("btr bx, cx");
    tmp_0 = r12d;
    r12d = r15d;
    r15d = tmp_0;
    __asm ("shld r15d, ebx, 1");
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
    rbx = 0xde218d157b2f212b;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x407a3f */
#include <stdint.h>
 
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
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_085 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x2c9dadaa18af8fe3;
    rbx = 0x9842591f6097f7fd;
    rcx = 0x178a355f405b241a;
    rdx = 0xb49794d49a15cb2f;
    rsi = 0x923a0b3a95ed3bc6;
    rdi = 0x5e38502f96c3c312;
    r8 = 0x8e12c05975d37f3e;
    r9 = 0xeeb2547b31dc11e7;
    r10 = 0xee04eafdbceffa3a;
    r11 = 0x19158e9e8306f6b1;
    r12 = 0xeb3afe1ffd145455;
    r13 = 0x86b9e4676c72644b;
    r14 = 0x404fb8aee78bb976;
    r15 = 0xc4a91f74076db802;
    r12b &= sil;
    esi = (int32_t) cl;
    __asm ("clc");
    r11d += 0x7e6ab9f7;
    __asm ("clc");
    r9d -= edx;
    al >>= 1;
    r14b = rotate_right64 (r14b, 0xe7);
    rcx = rotate_right64 (rcx, cl);
    __asm ("btc rsi, 0x97");
    r15w = rotate_right16 (r15w, 0x43);
    r12w >>= cl;
    r8 = -r8;
    __asm ("cmpxchg bl, dl");
    r10w = rotate_left16 (r10w, 1);
    rax++;
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
    rbx = 0xc532049cfcbe18e5;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4046b5 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_042 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xd74e2e29c87a0927;
    rbx = 0xffc0911ed8729946;
    rcx = 0xb72fec380a264fcb;
    rdx = 0xc426f76af7f0cdad;
    rsi = 0xc1d715ac36b16b1a;
    rdi = 0xf9851a7fcb1e62b;
    r8 = 0xbcc241811dc6bcaf;
    r9 = 0x85648820262e308a;
    r10 = 0x17e3b6800f8bba37;
    r11 = 0xa39210666d402d3e;
    r12 = 0x2071607a6725ce87;
    r13 = 0xfc82f4a718f97eca;
    r14 = 0xab18f75de2f6fb23;
    r15 = 0xbb0cf69ff54a9e8e;
    dil -= sil;
    if (dil != 0) {
    }
    r9w = rotate_right16 (r9w, 0x34);
    r11d = SWAP32 (r11d);
    bh >>= cl;
    r11 = rotate_left64 (r11, cl);
    bl += bl;
    r8d = (int32_t) bl;
    __asm ("stc");
    r11d -= 0xbba6ac2b;
    if (r11d <= 0) {
        rax = r13;
    }
    __asm ("shld rdi, r11, 0x5b");
    __asm ("bts rdi, 0x8e");
    dl &= ah;
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
    rbx = 0x9f1ee79f15accbdf;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4017f0 */
#include <stdint.h>
 
int64_t log_size_4_var_003 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xc47a1ebd0882e85f;
    rbx = 0x746a3c0175415547;
    rcx = 0xacb6807a0233b90;
    rdx = 0xb203d38843e14aeb;
    rsi = 0xeb6e15235c7dd2eb;
    rdi = 0x1516315384f2ca88;
    r8 = 0x89cdb5c8ed18c0a;
    r9 = 0x6a1f794ae104ffed;
    r10 = 0xa917cf93a0343a07;
    r11 = 0xc6638b9f06aa8916;
    r12 = 0x8439bebf75619d49;
    r13 = 0x90c294b2a636dd2a;
    r14 = 0x9373ecd7e4ecd0f5;
    r15 = 0x23101af88ef4eaae;
    r10d = (int32_t) r13b;
    edx:eax = eax * r10d;
    bh += bl;
    sil &= 0xb7;
    r9b = 0x75;
    r9b = (sil <= 0) ? 1 : 0;
    ax += 0x1d99;
    cl &= 0xf;
    __asm ("shld dx, r8w, cl");
    __asm ("cmpxchg rdx, r15");
    r10d >>= cl;
    r14b >>= cl;
    r12d >>= cl;
    rdx:rax = rax * rbp;
    __asm ("shrd r15w, r9w, 1");
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
    rbx = 0x2903c30e0f671c48;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401a56 */
#include <stdint.h>
 
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_005 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xf9e9939e84a47713;
    rbx = 0x700dd0d6a85e0fac;
    rcx = 0x98544444703f3c9d;
    rdx = 0x7b9d75a3b009582a;
    rsi = 0xd0ee4ef51ea3dfd6;
    rdi = 0x7ee8107f66e96932;
    r8 = 0x51fe4821f0988309;
    r9 = 0xf34dca56845d936d;
    r10 = 0xfc4d4373bb510a65;
    r11 = 0x5b295090f3be18c5;
    r12 = 0x5244b63798941b20;
    r13 = 0x41f488b4b1932d93;
    r14 = 0x571edf266d20b082;
    r15 = 0x77a2062da075e361;
    r10b = rotate_right64 (r10b, cl);
    edx:eax = (int64_t) eax;
    r10 >>= 1;
    __asm ("stc");
    r10w -= di;
    r10w <<= 0x59;
    r14w = r12 + rdx*2;
    __asm ("stc");
    edi += 0x489ac38a;
    if (edi <= 0) {
        r12 = r14;
    }
    __asm ("stc");
    r8d -= r11d;
    __asm ("shld r14w, di, 0xa");
    cl <<= 0x5a;
    edx:eax = eax * ebp;
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
    rbx = 0xf72e768d937b5760;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401cb7 */
#include <stdint.h>
 
int64_t log_size_4_var_007 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xa288ef9cd82f211d;
    rbx = 0xbdf577deb4c287ca;
    rcx = 0x54f88cf5fc4c8d6a;
    rdx = 0x37eba0ee4a38324d;
    rsi = 0x75b54de902cfb529;
    rdi = 0x52a7a97de2a1efbd;
    r8 = 0xab2dd5738a0411a3;
    r9 = 0xb74e96504923ffb;
    r10 = 0x3aba05fd16cf8fa3;
    r11 = 0xd68060d747c483e5;
    r12 = 0x29cf4e8155a4f439;
    r13 = 0xf9c6d97aa63456e7;
    r14 = 0x90a531337aace6c4;
    r15 = 0x4c40e5e3f0f7b217;
    __asm ("btr r10w, r11w");
    ax = al * dh;
    dh -= cl;
    r12 = -r12;
    dh ^= 0xed;
    bx += bx;
    __asm ("cmovno rdx, r13");
    __asm ("cmovnp edx, r13d");
    __asm ("lahf");
    __asm ("cmovno r14d, r8d");
    r11d = esi * 0x6f52b555;
    cl &= 0xf;
    __asm ("shld bp, bx, cl");
    dh -= ch;
    cx |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / cx;
    dx = dx:ax % cx;
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
    rbx = 0x958ac962ca79516e;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x407569 */
#include <stdint.h>
 
int64_t log_size_4_var_081 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xe277f107c9c9531d;
    rbx = 0x94b512fb1befd2be;
    rcx = 0x801721a061d95eee;
    rdx = 0x2fbf83b3cf4c514d;
    rsi = 0x883c63a3b2f1097d;
    rdi = 0xb407685186bfaa7d;
    r8 = 0x7c3dda5c9184b5f9;
    r9 = 0x33090ee05dfbbdc4;
    r10 = 0x4e3728c13ca1a637;
    r11 = 0x75e65459039fa494;
    r12 = 0x2bb535fa5786b706;
    r13 = 0xeaa3b2765a5805e4;
    r14 = 0x1773299870dad118;
    r15 = 0x2cd75d8fbf2d3ae4;
    bx &= r10w;
    ch &= bl;
    r12 -= 0x2e7d5712;
    r13w >>= 1;
    __asm ("bsr r11, r8");
    r8 >>= 0x61;
    r13d >>= 1;
    r9w *= 0x1cca;
    __asm ("stc");
    r11b += 0x2e;
    r14d += 0xf7faff27;
    rbx -= 0xffffffffed79ef7b;
    r14b -= 0x81;
    __asm ("shrd rsi, r8, 1");
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
    rbx = 0xfa30798435f8456d;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401599 */
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
 
int64_t log_size_4_var_001 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xbb089eceb3d4a8dd;
    rbx = 0x1ed23ced50a4c140;
    rcx = 0xa3a1ebe1909b3df9;
    rdx = 0x515b2271e7cae944;
    rsi = 0x9ec08b087e445537;
    rdi = 0x4d771bd50728fd63;
    r8 = 0x381b3642b828aef7;
    r9 = 0x15420cd62fd0f579;
    r10 = 0x5af6f768f0a359fa;
    r11 = 0xea5e5e6242516a77;
    r12 = 0xcd114445ef6ac681;
    r13 = 0x6d01b83afaba430e;
    r14 = 0xefd600de9ea9048c;
    r15 = 0xcad12817d49faf99;
    rdx:rax = rax * rdx;
    ah >>= cl;
    ax = (int16_t) al;
    dil -= bpl;
    r15w = rotate_right16 (r15w, cl);
    di = rotate_left16 (di, 0x8a);
    bpl = rotate_right8 (bpl, 1);
    r10b = rotate_right64 (r10b, 0xeb);
    cl &= 0xf;
    __asm ("shld bx, r12w, cl");
    __asm ("shld ebx, ebx, cl");
    rsi >>= 1;
    __asm ("stc");
    rdi = rotate_left64 (rdi, 1);
    __asm ("clc");
    bpl -= r15b;
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
    rbx = 0x837b133003c23848;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x408c20 */
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4041fa */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_038 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x9c51e4b1cf3af8a5;
    rbx = 0x53fca5d69b4366ff;
    rcx = 0x3753018682c72e02;
    rdx = 0xfd22239eeef9fe6c;
    rsi = 0x899b0bb217898972;
    rdi = 0xbedd43f8d8a3f;
    r8 = 0xe465937fea0b6054;
    r9 = 0xc0a20c40a5ccd8a1;
    r10 = 0xc6d325609b6ff7cd;
    r11 = 0x582151fba2277110;
    r12 = 0xa17a3bee5537ab4a;
    r13 = 0x8075544159dded90;
    r14 = 0x19ab8a7b17dcef45;
    r15 = 0xb4cdfe93ea774aea;
    ah = -ah;
    __asm ("clc");
    di += si;
    __asm ("stc");
    r8d = rotate_left32 (r8d, 1);
    __asm ("clc");
    edx -= 0x83e80efa;
    edx:eax = (int64_t) eax;
    r10 += rax;
    eax = rotate_left32 (eax, 1);
    r10d <<= cl;
    __asm ("shld r11, rcx, 1");
    __asm ("clc");
    r10b -= r15b;
    __asm ("clc");
    rdx -= r11;
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
    rbx = 0xb2028bf7c05ae49d;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x403f94 */
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
 
int64_t log_size_4_var_036 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xbefd94a68626aea1;
    rbx = 0x7f2297efb46dfbc1;
    rcx = 0x10efc6345d976b7d;
    rdx = 0x676bb8b306c02a0;
    rsi = 0xf77ba75b5a0af100;
    rdi = 0xd0374eebd1377469;
    r8 = 0xce1157252b1b8cd3;
    r9 = 0x49b77ad7c5ce6692;
    r10 = 0x4a7225306636a453;
    r11 = 0x3ae581154ede4298;
    r12 = 0x9687c06428259888;
    r13 = 0xf79a08e62ce247fc;
    r14 = 0xe6fa116dfab6a758;
    r15 = 0x3138b8a98cf84742;
    __asm ("cmpxchg r10, r15");
    __asm ("shrd r12w, r13w, 1");
    eax = (int32_t) ax;
    __asm ("stc");
    r11w -= si;
    r8w <<= cl;
    r9 |= 0xffffffffe7d8329a;
    r12d = rotate_right32 (r12d, 1);
    dx = (int16_t) dh;
    bp = rotate_left16 (bp, cl);
    eax >>= 0x91;
    r15 = (int64_t) dx;
    r12d >>= cl;
    __asm ("btr r11w, 0xb5");
    r8b <<= 1;
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
    rbx = 0x46d44ccbb2965f2d;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4070aa */
#include <stdint.h>
 
int64_t log_size_4_var_077 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xcb84ede82a43b31b;
    rbx = 0xa452c8552d42de50;
    rcx = 0x32162d1b547c328;
    rdx = 0x66eb35d0b7946fed;
    rsi = 0xf840d2e91b16a566;
    rdi = 0xf5843abc3e9277ee;
    r8 = 0x5dd6cfcc2fdd8e7b;
    r9 = 0xfb380e681be2dc2d;
    r10 = 0x609a4dba4deaf03f;
    r11 = 0x23654ed82604a39d;
    r12 = 0x9cfb90afa97aea69;
    r13 = 0x489c94823283c453;
    r14 = 0x4d4845ac8c1896b4;
    r15 = 0xe1950b761a072ee3;
    r12d >>= 4;
    ax += 0x304a;
    __asm ("shld r9, r14, 1");
    __asm ("btr cx, 0x55");
    rdx <<= 0xea;
    bh |= 0xc0;
    ax &= 0x3fff;
    al = ax / bh;
    ah = ax % bh;
    __asm ("bsf rbp, rdx");
    r13b >>= cl;
    r12d |= r14d;
    eax <<= cl;
    r12b >>= 8;
    r15 = -r15;
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
    rbx = 0x738f44b48eb0ac57;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x403ad4 */
#include <stdint.h>
 
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_032 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xd9978be7358a1a20;
    rbx = 0x8366f873ce040a9b;
    rcx = 0x51c6bd6f27f2b369;
    rdx = 0x6ae2a9a6f9e9007c;
    rsi = 0xfb826520a83d8a93;
    rdi = 0x9f7b5255cdb852c7;
    r8 = 0x277098187064debe;
    r9 = 0x2b99f6830b86d0f1;
    r10 = 0x99a2e31ff61eb7ad;
    r11 = 0xc394edecee5844dc;
    r12 = 0xccce69479d4591f3;
    r13 = 0x751cb4df6f624f7;
    r14 = 0xb214745b39842e0e;
    r15 = 0x5fc38e16e8108858;
    si >>= 0x56;
    __asm ("bts r13, r9");
    r15 = rotate_right64 (r15, cl);
    __asm ("btc r10d, 0x17");
    __asm ("shld r13, r15, 1");
    __asm ("btc bx, 0x4a");
    r12 = r15d + edx*8 + 0xd7;
    ah = rotate_right8 (ah, 0x18);
    rdi = rotate_left64 (rdi, 1);
    r12 <<= 0xc2;
    tmp_0 = r11d;
    r11d = esi;
    esi = tmp_0;
    __asm ("cmpxchg esi, r10d");
    __asm ("xadd r15d, r10d");
    r15w += r11w;
    rax = rotate_right64 (rax, 1);
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
    rbx = 0x393096596b1c1ad;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x407306 */
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
 
int64_t log_size_4_var_079 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xe2663ecf903bfdb9;
    rbx = 0xb4216a1917c8801c;
    rcx = 0xa22101d441d31560;
    rdx = 0xdd01721bd60c6907;
    rsi = 0x201cc5351cff5995;
    rdi = 0x6bfd6ba7b5347199;
    r8 = 0xca256bd6dbbdb1ce;
    r9 = 0xdd338dc87a348e5b;
    r10 = 0xb2755354125f6492;
    r11 = 0x71789b0023c3f54f;
    r12 = 0x82710a6554307f47;
    r13 = 0x10227a78062a0b3a;
    r14 = 0xdc989a3eaee46ac5;
    r15 = 0x9bf1338fb6327f2e;
    r8 = r10;
    bp -= ax;
    di += bp;
    r10 = rotate_left64 (r10, 1);
    r10w = rotate_left16 (r10w, 1);
    r14d ^= 0x892f111;
    r9 = rotate_left64 (r9, cl);
    ebp = (int32_t) r9b;
    __asm ("bsr r9w, r13w");
    al--;
    __asm ("shrd ecx, r13d, 0x84");
    r9d = esi + eax + 0x48bdbd6c;
    r9w -= si;
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
    rbx = 0xb700994dfc40f4a0;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x403d3f */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_034 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xc07fed688505dc6a;
    rbx = 0x9d66112ebf5c7833;
    rcx = 0x3e38b64b20994194;
    rdx = 0xe2d79213cd6d8921;
    rsi = 0x1e66693c84085eeb;
    rdi = 0x449a0ae5a3295382;
    r8 = 0x214d6c41ed4717dc;
    r9 = 0xd06770a7e0d40cb9;
    r10 = 0xc479b215b08c76b4;
    r11 = 0x9e5b98b12afb26d8;
    r12 = 0xc3108a785cde7f11;
    r13 = 0xd367dff6d1532729;
    r14 = 0xd70660a2518851c4;
    r15 = 0xc5f037152b035fd9;
    r9d <<= 1;
    ebp = rotate_right32 (ebp, 1);
    __asm ("cmovno r13, r9");
    tmp_0 = r15;
    r15 = r8;
    r8 = tmp_0;
    if (r9d >= 0) {
        r13d = r9d;
    }
    r15d += edi;
    __asm ("setnp r9b");
    __asm ("lahf");
    bl = (r15d > 0) ? 1 : 0;
    __asm ("sahf");
    __asm ("setnp ah");
    __asm ("btc r9, rcx");
    r12 = (int64_t) r13b;
    bpl += bpl;
    __asm ("stc");
    ebp = rotate_right32 (ebp, 1);
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
    rbx = 0xe1c29d99a5f877e5;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40698b */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
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
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_071 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x120937eea3b80f7b;
    rbx = 0x7a78e46daeaac6fd;
    rcx = 0xc31bab9df1bd9d9f;
    rdx = 0xb758ebc333883548;
    rsi = 0x3305757b67d8f129;
    rdi = 0x624949504ca62dd6;
    r8 = 0xe1bcf2e7f0869ed7;
    r9 = 0x6267d1fe3fa2756c;
    r10 = 0x9c9e53daf583c480;
    r11 = 0xabdf13b5432b74e1;
    r12 = 0x95c1f52540fc940d;
    r13 = 0xd6b4fe5e08ef168e;
    r14 = 0x17189539affc3896;
    r15 = 0x15f0856a98ca7310;
    rsi >>= 1;
    r11d = rotate_left32 (r11d, 1);
    __asm ("stc");
    r10b -= r14b;
    ecx++;
    rbx ^= rsi;
    rbx = SWAP64 (rbx);
    cx |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / cx;
    dx = dx:ax % cx;
    r9d = (int32_t) r15b;
    __asm ("btc si, 0x3d");
    r10b = rotate_right64 (r10b, 1);
    r12 = rotate_right64 (r12, 0x65);
    edx:eax = (int64_t) eax;
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
    rbx = 0xc51d516917046ae6;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x406bec */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_073 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xdcd1e86823dc5358;
    rbx = 0xbc19c866ec7a15db;
    rcx = 0x822fa94ed0088d32;
    rdx = 0xbeea32c6f60fddf3;
    rsi = 0x47af8ac5eba91455;
    rdi = 0xb2c1cfcb7a391a55;
    r8 = 0x83760a5c5a9ea337;
    r9 = 0xd029eb72b1472fc9;
    r10 = 0x1da9059163cf97cf;
    r11 = 0x89a5551a7c85ce96;
    r12 = 0x72ab13604a86f5a8;
    r13 = 0xed5e571353a3984;
    r14 = 0xd93af3554ecff1c7;
    r15 = 0x81a2eb1ef197c7a2;
    r12d ^= 0xbd47e026;
    rdx++;
    tmp_0 = cl;
    ;
    cl = tmp_0;
    __asm ("bts rbx, 0xb1");
    __asm ("shrd r12d, r14d, 0xa1");
    r11 = r12 * 0xffffffffcc2ba282;
    __asm ("stc");
    ch += bl;
    r11 ^= 0xffffffffe62e6d5f;
    __asm ("btr bx, 0x2b");
    r11d <<= cl;
    sil >>= 0xa8;
    r8b--;
    rbp = ~rbp;
    r10w = rotate_right16 (r10w, 1);
    __asm ("clc");
    eax += 0x6004b307;
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
    rbx = 0x30ddbbf9e738ea29;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x406e51 */
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
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_075 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x60b496c4f8045c08;
    rbx = 0xf56f4cb3a875a8d2;
    rcx = 0x787d2ab38aef84ee;
    rdx = 0x9812d26fcf60093f;
    rsi = 0xa56e850480c7d495;
    rdi = 0x432a4179a2eccf2d;
    r8 = 0x56a975b1c9c37061;
    r9 = 0x7fbc261dee0ea9ec;
    r10 = 0xff713337e9a7c759;
    r11 = 0xda82e18a1a7f95b4;
    r12 = 0xd3c301eb19aca098;
    r13 = 0x8261c99f9a74556d;
    r14 = 0xb78830f298607731;
    r15 = 0xd3a982fb2d0cbe0e;
    r9 -= rax;
    __asm ("clc");
    ch -= dh;
    r10 += r11;
    r13b |= 0xee;
    si = rotate_left16 (si, 0xf);
    rbp >>= 1;
    dh &= dl;
    r8w >>= 0xa;
    di -= 0x6b5;
    if (di > 0) {
        esi = r8d;
    }
    r9d = rotate_right32 (r9d, 1);
    r8w = rotate_right16 (r8w, 1);
    __asm ("bts ax, 0x47");
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
    rbx = 0xa895916bb979d740;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x403874 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_030 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xb774be58cc7ce289;
    rbx = 0x9ba1316730a8541;
    rcx = 0x3779e3f2bfd1eff4;
    rdx = 0x9ef95026857b2a09;
    rsi = 0x545d2b2654b7ce30;
    rdi = 0xc1450cdbd5ba905d;
    r8 = 0x1947e0d5bb451b2a;
    r9 = 0xb5bd429c55622500;
    r10 = 0x5290fb51eae660a1;
    r11 = 0x872432ca7d64fb6e;
    r12 = 0xa93b1fbf1272b82c;
    r13 = 0xbedbec09e7403be4;
    r14 = 0x913ddc0de5fce53c;
    r15 = 0x2d3174f5736e8789;
    r15d >>= cl;
    __asm ("bts ebx, r14d");
    __asm ("clc");
    rdx = rotate_left64 (rdx, 1);
    r12d ^= esi;
    rbx = 0x4dd55809dfacc9a4;
    r10w >>= cl;
    r15d >>= cl;
    bx = (int16_t) bh;
    __asm ("shld r11d, eax, 1");
    if (r15d == 0) {
        edx = edi;
    }
    __asm ("stc");
    r10 += rdi;
    __asm ("cwd");
    __asm ("bts r13, r15");
    __asm ("shrd rcx, r8, cl");
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
    rbx = 0x63cce4123b28b565;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4013b0 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401040 */
#include <stdint.h>
 
int32_t main (int64_t arg5, int64_t arg4, char ** envp, char ** argv, int32_t argc) {
    r8 = arg5;
    rcx = arg4;
    rdx = envp;
    rsi = argv;
    rdi = argc;
    /* [13] -r-x section size 31829 named .text */
    rax = log_size_4_var_000 ();
    rbx = rax;
    rax = log_size_4_var_001 ();
    rbx += rax;
    rax = log_size_4_var_002 ();
    rbx += rax;
    rax = log_size_4_var_003 ();
    rbx += rax;
    rax = log_size_4_var_004 ();
    rbx += rax;
    rax = log_size_4_var_005 ();
    rbx += rax;
    rax = log_size_4_var_006 ();
    rbx += rax;
    rax = log_size_4_var_007 ();
    rbx += rax;
    rax = log_size_4_var_008 ();
    rbx += rax;
    rax = log_size_4_var_009 ();
    rbx += rax;
    rax = log_size_4_var_010 ();
    rbx += rax;
    rax = log_size_4_var_011 ();
    rbx += rax;
    rax = log_size_4_var_012 ();
    rbx += rax;
    rax = log_size_4_var_013 ();
    rbx += rax;
    rax = log_size_4_var_014 ();
    rbx += rax;
    rax = log_size_4_var_015 ();
    rbx += rax;
    rax = log_size_4_var_016 ();
    rbx += rax;
    rax = log_size_4_var_017 ();
    rbx += rax;
    rax = log_size_4_var_018 ();
    rbx += rax;
    rax = log_size_4_var_019 ();
    rbx += rax;
    rax = log_size_4_var_020 ();
    rbx += rax;
    rax = log_size_4_var_021 ();
    rbx += rax;
    rax = log_size_4_var_022 ();
    rbx += rax;
    rax = log_size_4_var_023 ();
    rbx += rax;
    rax = log_size_4_var_024 ();
    rbx += rax;
    rax = log_size_4_var_025 ();
    rbx += rax;
    rax = log_size_4_var_026 ();
    rbx += rax;
    rax = log_size_4_var_027 ();
    rbx += rax;
    rax = log_size_4_var_028 ();
    rbx += rax;
    rax = log_size_4_var_029 ();
    rbx += rax;
    rax = log_size_4_var_030 ();
    rbx += rax;
    rax = log_size_4_var_031 ();
    rbx += rax;
    rax = log_size_4_var_032 ();
    rbx += rax;
    rax = log_size_4_var_033 ();
    rbx += rax;
    rax = log_size_4_var_034 ();
    rbx += rax;
    rax = log_size_4_var_035 ();
    rbx += rax;
    rax = log_size_4_var_036 ();
    rbx += rax;
    rax = log_size_4_var_037 ();
    rbx += rax;
    rax = log_size_4_var_038 ();
    rbx += rax;
    rax = log_size_4_var_039 ();
    rbx += rax;
    rax = log_size_4_var_040 ();
    rbx += rax;
    rax = log_size_4_var_041 ();
    rbx += rax;
    rax = log_size_4_var_042 ();
    rbx += rax;
    rax = log_size_4_var_043 ();
    rbx += rax;
    rax = log_size_4_var_044 ();
    rbx += rax;
    rax = log_size_4_var_045 ();
    rbx += rax;
    rax = log_size_4_var_046 ();
    rbx += rax;
    rax = log_size_4_var_047 ();
    rbx += rax;
    rax = log_size_4_var_048 ();
    rbx += rax;
    rax = log_size_4_var_049 ();
    rbx += rax;
    rax = log_size_4_var_050 ();
    rbx += rax;
    rax = log_size_4_var_051 ();
    rbx += rax;
    rax = log_size_4_var_052 ();
    rbx += rax;
    rax = log_size_4_var_053 ();
    rbx += rax;
    rax = log_size_4_var_054 ();
    rbx += rax;
    rax = log_size_4_var_055 ();
    rbx += rax;
    rax = log_size_4_var_056 ();
    rbx += rax;
    rax = log_size_4_var_057 ();
    rbx += rax;
    rax = log_size_4_var_058 ();
    rbx += rax;
    rax = log_size_4_var_059 ();
    rbx += rax;
    rax = log_size_4_var_060 ();
    rbx += rax;
    rax = log_size_4_var_061 ();
    rbx += rax;
    rax = log_size_4_var_062 ();
    rbx += rax;
    rax = log_size_4_var_063 ();
    rbx += rax;
    rax = log_size_4_var_064 ();
    rbx += rax;
    rax = log_size_4_var_065 ();
    rbx += rax;
    rax = log_size_4_var_066 ();
    rbx += rax;
    rax = log_size_4_var_067 ();
    rbx += rax;
    rax = log_size_4_var_068 ();
    rbx += rax;
    rax = log_size_4_var_069 ();
    rbx += rax;
    rax = log_size_4_var_070 ();
    rbx += rax;
    rax = log_size_4_var_071 ();
    rbx += rax;
    rax = log_size_4_var_072 ();
    rbx += rax;
    rax = log_size_4_var_073 ();
    rbx += rax;
    rax = log_size_4_var_074 ();
    rbx += rax;
    rax = log_size_4_var_075 ();
    rbx += rax;
    rax = log_size_4_var_076 ();
    rbx += rax;
    rax = log_size_4_var_077 ();
    rbx += rax;
    rax = log_size_4_var_078 ();
    rbx += rax;
    rax = log_size_4_var_079 ();
    rbx += rax;
    rax = log_size_4_var_080 ();
    rbx += rax;
    rax = log_size_4_var_081 ();
    rbx += rax;
    rax = log_size_4_var_082 ();
    rbx += rax;
    rax = log_size_4_var_083 ();
    rbx += rax;
    rax = log_size_4_var_084 ();
    rbx += rax;
    rax = log_size_4_var_085 ();
    rbx += rax;
    rax = log_size_4_var_086 ();
    rbx += rax;
    rax = log_size_4_var_087 ();
    rbx += rax;
    rax = log_size_4_var_088 ();
    rbx += rax;
    rax = log_size_4_var_089 ();
    rbx += rax;
    rax = log_size_4_var_090 ();
    rbx += rax;
    rax = log_size_4_var_091 ();
    rbx += rax;
    rax = log_size_4_var_092 ();
    rbx += rax;
    rax = log_size_4_var_093 ();
    rbx += rax;
    rax = log_size_4_var_094 ();
    rbx += rax;
    rax = log_size_4_var_095 ();
    rbx += rax;
    rax = log_size_4_var_096 ();
    rbx += rax;
    rax = log_size_4_var_097 ();
    rbx += rax;
    rax = log_size_4_var_098 ();
    rbx += rax;
    rax = log_size_4_var_099 ();
    rbx += rax;
    if (rbx == 0) {
        eax = 0;
        return rax;
    }
    return assert_fail ("sum==0", "source_complex_with_base_100_funcs_of_size_16.c", 0xd3, "main");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401922 */
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
 
int64_t log_size_4_var_004 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x4c362281e21d8df;
    rbx = 0xb85b839420a54b52;
    rcx = 0x5a085eaa596d13d4;
    rdx = 0xfc0d981c0f48dff5;
    rsi = 0x2533cfe2f6f25a4b;
    rdi = 0x9030c67b43600186;
    r8 = 0x5fa864b7b85f0e52;
    r9 = 0x104155b282f66e41;
    r10 = 0xd05396de72560652;
    r11 = 0x4964002cd4603890;
    r12 = 0xec6fda1b49645723;
    r13 = 0xce5b30fe8982178f;
    r14 = 0xbe81e0dc5180679a;
    r15 = 0x5ec634e386b8dc3e;
    bh = rotate_right8 (bh, 1);
    __asm ("btr r15w, r10w");
    r9 += 0x62d82427;
    r14w = (int16_t) r9b;
    __asm ("clc");
    r10 += 0x43cdc686;
    r8d >>= 1;
    rdx:rax = rax * r14b;
    __asm ("stc");
    bx += 0xc9;
    edi = r15d + edx*8 + 0x175b0754;
    cl -= 4;
    if ((cl & r13b) <= 0) {
        esi = eax;
    }
    __asm ("stc");
    ecx = rotate_left32 (ecx, 1);
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
    rbx = 0x122bd17266d196ed;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401b81 */
#include <stdint.h>
 
int64_t log_size_4_var_006 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x76079561e0ab1e0b;
    rbx = 0x16797044733376fd;
    rcx = 0x95b9655c127b6db9;
    rdx = 0xbe3b1e45427b2b77;
    rsi = 0x37404f857af8f895;
    rdi = 0xb41ab844df2c655f;
    r8 = 0x9ebb29bfbc1ccb2b;
    r9 = 0x95590e9566a6151e;
    r10 = 0xa3144c5675b33dae;
    r11 = 0xc2a78b6470e17148;
    r12 = 0x3079bb9377f04eb1;
    r13 = 0xe5fd75e494b31f2e;
    r14 = 0x439d4d921a1920e4;
    r15 = 0x69c8deac7ecdd5b4;
    ebp >>= 1;
    __asm ("shrd ecx, r10d, 1");
    r11b >>= cl;
    r13d <<= 1;
    if (r12w <= r12w) {
        rax = rbx;
    }
    rbx |= 0x17e8e6ef;
    __asm ("btr r12, rbp");
    __asm ("stc");
    ebx += 0x1dde1bbe;
    __asm ("btc r9w, bx");
    r14w |= r9w;
    __asm ("clc");
    r8w -= bp;
    __asm ("xadd ecx, ebx");
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
    rbx = 0x37bf8e373dbb2894;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401deb */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_008 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xd2d3772519662d2d;
    rbx = 0x772b3599047dfc88;
    rcx = 0xb58760007c4065a;
    rdx = 0xff6b03006f53a27d;
    rsi = 0x79ba68492b27bfba;
    rdi = 0xd8107c5c4523983;
    r8 = 0xa7515ba78cd37a8d;
    r9 = 0xbcb9317ef531749a;
    r10 = 0x7a0ce0197f34d7cf;
    r11 = 0x64ab900f23daa4fa;
    r12 = 0x1a065518bb3b27ab;
    r13 = 0x6182ebc20224c0b1;
    r14 = 0x1b1f08fdf6c586b4;
    r15 = 0x92029b580b3bf49c;
    di >>= 1;
    bh = rotate_left8 (bh, cl);
    bh = rotate_left8 (bh, 1);
    r13 &= r8;
    r11d += r8d;
    r11b += 0xee;
    cx <<= cl;
    r9 = (int64_t) al;
    r13 += 0x29249273;
    __asm ("stc");
    r8 += r10;
    r13d = r9d * 0xf771bc3a;
    __asm ("btc r11w, 0xa3");
    ah += dh;
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
    rbx = 0x16a003385d61037e;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x402185 */
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
#define SWAP64(val) ((uint64_t) (((val & 0x00000000000000ffull) << 56) | \
                                 ((val & 0x000000000000ff00ull) << 40) | \
                                 ((val & 0x0000000000ff0000ull) << 24) | \
                                 ((val & 0x00000000ff000000ull) <<  8) | \
                                 ((val & 0x000000ff00000000ull) >>  8) | \
                                 ((val & 0x0000ff0000000000ull) >> 24) | \
                                 ((val & 0x00ff000000000000ull) >> 40) | \
                                 ((val & 0xff00000000000000ull) >> 56)))
 
int64_t log_size_4_var_011 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xbfe48ee7a9665e06;
    rbx = 0xe5e3059f3e21960a;
    rcx = 0x98dc7686caf23689;
    rdx = 0xdbe1fae82e39e068;
    rsi = 0xeb902c0837b497d9;
    rdi = 0xb3231ebb3c2e54b9;
    r8 = 0xe8be5c79ce399ba5;
    r9 = 0xbd770ee34adab78b;
    r10 = 0x765bee97216e744f;
    r11 = 0x8d2f3db5a360aa61;
    r12 = 0x23d71bfa5875e91;
    r13 = 0x83b83ed13ea72c69;
    r14 = 0xfabeb98d0888224e;
    r15 = 0xca5691c001d77512;
    rax = rcx * 0xfffffffffaca37ca;
    r9d = rotate_right32 (r9d, 0xf7);
    __asm ("shrd r15d, r9d, 1");
    __asm ("stc");
    r9w += bp;
    dil |= r11b;
    r11b >>= 0xa1;
    r11 &= 0x383ff454;
    __asm ("stc");
    rax = rotate_left64 (rax, 1);
    rbx = SWAP64 (rbx);
    r14w |= cx;
    __asm ("btc bx, ax");
    sil <<= cl;
    tmp_0 = r14d;
    r14d = edx;
    edx = tmp_0;
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
    rbx = 0x13532869911c9efc;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4023fa */
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
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_013 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xea7739655d921ef9;
    rbx = 0x9c175a15e868a26b;
    rcx = 0xe86071baf62fe9b9;
    rdx = 0x5f578fe0e35360a1;
    rsi = 0xc88d3986dd6f32e2;
    rdi = 0x6cde9f2bd2139424;
    r8 = 0x8d5bf093dca578bb;
    r9 = 0xbc02871b912e523d;
    r10 = 0x97874263f7c27631;
    r11 = 0xecd3d9a2152b9958;
    r12 = 0xcb33226ad28858cf;
    r13 = 0x366487c64755e376;
    r14 = 0x9b6b5e4c8ac44f7;
    r15 = 0xb1b92db9e040feed;
    __asm ("shld r8w, r13w, 7");
    __asm ("shld r10d, r9d, 8");
    rdx:rax = rax * r13b;
    __asm ("sahf");
    r12b = rotate_right64 (r12b, 1);
    bl >>= 0x63;
    ebx <<= 1;
    rdi--;
    esi = rotate_left32 (esi, cl);
    r9d <<= 0x64;
    __asm ("shrd r10w, r14w, 1");
    eax = rotate_left32 (eax, 0x66);
    r8d = (int32_t) cx;
    __asm ("shld r15, r12, 1");
    dil = rotate_left8 (dil, cl);
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
    rbx = 0x76dfab3245fe4626;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x402653 */
#include <stdint.h>
 
int64_t log_size_4_var_015 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xa86ddbb7e9225229;
    rbx = 0x3e1977f044566069;
    rcx = 0x2f64b69b2615c9f8;
    rdx = 0x3f493a4b34911746;
    rsi = 0xd7c454d65a4cc11;
    rdi = 0x5f4c570b1b380185;
    r8 = 0x531147d994d800c0;
    r9 = 0xbbda424ed067be44;
    r10 = 0xf77403dab224e21c;
    r11 = 0xc357abe6256da59;
    r12 = 0x5822154fd67752e3;
    r13 = 0x4355b06ca2191750;
    r14 = 0x3e1d8c141673feff;
    r15 = 0x61d49d713ab5d2ec;
    ecx >>= cl;
    cl &= 0xf;
    __asm ("shrd r9w, r9w, cl");
    rsi >>= cl;
    si <<= 1;
    __asm ("stc");
    cl -= al;
    if (cl >= 0) {
    }
    ebp ^= r9d;
    if (r9w >= r13w) {
        r11 = rdi;
    }
    edx += edx;
    __asm ("shrd r9w, r14w, 0xa");
    di = rbx - 0x442d03c;
    __asm ("clc");
    rsi += r12;
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
    rbx = 0xec2aa91ca8265f16;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4028b8 */
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
 
int64_t log_size_4_var_017 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x4a01e131927a988a;
    rbx = 0xd9cf4e97da724f31;
    rcx = 0x7d466c2459bff20b;
    rdx = 0x4359c73122e64b43;
    rsi = 0x4ae5952fadbc556c;
    rdi = 0xe6b0bdfd65d3da68;
    r8 = 0x5269b6d55e6329dd;
    r9 = 0xa13fa56e15b30b6b;
    r10 = 0xd2ad947557805520;
    r11 = 0xf1cc02dd9e33108b;
    r12 = 0xe60b4caebfb35c85;
    r13 = 0xda0f282d26b4be57;
    r14 = 0xb2663d84e58bff67;
    r15 = 0x6f987f18e3c31dcd;
    r9 ^= 0x6f3d199b;
    __asm ("lahf");
    r9w -= r8w;
    di = rotate_left16 (di, cl);
    __asm ("btr eax, r13d");
    dx += r15w;
    __asm ("stc");
    sil += 0xcd;
    r12 = r14;
    bp |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / bp;
    dx = dx:ax % bp;
    __asm ("shld r11, r15, cl");
    rbp += rdx;
    dl -= 0xa7;
    __asm ("stc");
    bpl = rotate_right8 (bpl, 1);
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
    rbx = 0x4d8ffcb5f82a2a7a;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x402b29 */
#include <stdint.h>
 
int64_t log_size_4_var_019 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x561fa714fe25e513;
    rbx = 0xd0ba9d8de52a6ca0;
    rcx = 0x940cd5b1ba0aad58;
    rdx = 0x9f2d97a14508782b;
    rsi = 0x45e09b701c0d1c43;
    rdi = 0xc745ddd775ae4a23;
    r8 = 0x23b0f50b49564b9;
    r9 = 0x78909ee9b6692473;
    r10 = 0xd106d53f22c1962e;
    r11 = 0x1b25958516095c89;
    r12 = 0x653c5c8dd49c593f;
    r13 = 0x20375c993a19e574;
    r14 = 0xb63876aba9bbf112;
    r15 = 0x2940dc38f450bb2f;
    __asm ("shrd esi, edi, 1");
    edi = (int32_t) bh;
    bh <<= 0x65;
    edx >>= 1;
    rax += rbp;
    if (rax == 0) {
        r15 = r13;
    }
    esi |= 0xf9fdb5b5;
    __asm ("shld r8d, r8d, 0xfa");
    eax += r12d;
    r14 -= rbx;
    __asm ("cmovo r10w, r9w");
    __asm ("shld r14d, edi, 1");
    __asm ("stc");
    r15 -= rbx;
    bh -= 0xfc;
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
    rbx = 0x62e2fb9bf4a0eb70;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x402d99 */
#include <stdint.h>
 
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_021 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x2cdcbcb9f2a67170;
    rbx = 0xeb3d8469bb5458fd;
    rcx = 0xc1a27dd145b53d11;
    rdx = 0x718c85da185bbc4c;
    rsi = 0xf1300022c3bd6e4d;
    rdi = 0xa132882002ee7bbb;
    r8 = 0x1eeea0ef752599c2;
    r9 = 0x8f4da64a03eb8f7;
    r10 = 0x8fa58c7547b0938e;
    r11 = 0x3237a4e597e94e86;
    r12 = 0xd46828cc6f9a111e;
    r13 = 0x2c2ed8145c23307e;
    r14 = 0xc5b3244d391383ef;
    r15 = 0xc898348f9fd5ee2b;
    rdx = rotate_right64 (rdx, cl);
    __asm ("shrd rax, r11, 0xb");
    al--;
    r13d = edi + edx*8 - 0x205e38c2;
    __asm ("cmpxchg rax, rdi");
    r14w <<= 1;
    __asm ("clc");
    r14 += 0x162587ce;
    rbx = r11 * 3;
    r13 <<= 0x3f;
    ebx = (int32_t) dil;
    __asm ("xadd r13d, r13d");
    di <<= cl;
    dx &= 0x5d3a;
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
    rbx = 0x9eef66fcefbbaaf6;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40300f */
#include <stdint.h>
 
int64_t log_size_4_var_023 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xd75aa84a1fd4b5b;
    rbx = 0x99564eefa3c5e8d3;
    rcx = 0x1f10a54412f21668;
    rdx = 0xd9d70bb20b65cbe2;
    rsi = 0x23b8219b90382ec0;
    rdi = 0x38aefd1d3d001e76;
    r8 = 0xc7f4d13907e610dc;
    r9 = 0x228fa015460761a5;
    r10 = 0xff949628ff8b10d9;
    r11 = 0xf399dc5126f0ecde;
    r12 = 0x4f89f24f43ff9b43;
    r13 = 0x66206519bc1b97d7;
    r14 = 0x8f673dc6f3b55dc9;
    r15 = 0x720be45194989b4f;
    r8d += 0xf12aece1;
    __asm ("cmovs r11, rsi");
    __asm ("clc");
    r8d += 0xa081d0dc;
    __asm ("setnp r11b");
    r14 >>= cl;
    __asm ("bts rbx, 0xd0");
    __asm ("btc di, bp");
    __asm ("clc");
    dl -= 0x6c;
    dl |= r10b;
    __asm ("bsr r14w, ax");
    r15d >>= 1;
    rbp -= r15;
    __asm ("cmovp r10w, dx");
    __asm ("btc ebp, 0xef");
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
    rbx = 0xf7a178678116aba9;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x403268 */
#include <stdint.h>
 
int64_t log_size_4_var_025 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x1268190e535610c;
    rbx = 0x9e702cb91a9904c9;
    rcx = 0xe407d726c22f228;
    rdx = 0x107c0ea729fbc397;
    rsi = 0x4414602099d2cf53;
    rdi = 0x12c4834393c3824c;
    r8 = 0x64b87e439c86b2cb;
    r9 = 0x24139cbb9a9ebd0f;
    r10 = 0xd0affcf662a6706b;
    r11 = 0x7431ee2320042f7f;
    r12 = 0x64c51bd973c27b5f;
    r13 = 0xe2b64bbc19134179;
    r14 = 0xc2336fdbecedee5d;
    r15 = 0xeb32858a46e4c989;
    rax = r13 * 0x35e98253;
    r9w >>= 4;
    r15 = 0xb3dbe2c0b00dd191;
    rdx &= 0xffffffffdf58f8b6;
    __asm ("clc");
    bp -= di;
    r13b -= 0x9b;
    r13w = 0;
    r12b -= 0x7b;
    rdx += r14;
    __asm ("setno r10b");
    ch = (rdx != 0) ? 1 : 0;
    rsi &= 0x6a34ea8b;
    si -= r15w;
    ch = (si <= 0) ? 1 : 0;
    __asm ("cmovns r10, r14");
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
    rbx = 0x79ae1f6abcab777c;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4034dc */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_027 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xaba8f5a38659a30;
    rbx = 0xa76cf8d44a47b72d;
    rcx = 0x2e0e4d36c1532979;
    rdx = 0xa8787535df59150d;
    rsi = 0xaba74f68532c50e7;
    rdi = 0xc1a5404baa7a88fe;
    r8 = 0x2c0e2138ffff2c07;
    r9 = 0x91bbc6fdbcf6ac7e;
    r10 = 0xd3ecee0e9be7abae;
    r11 = 0xc24b5b9fd1502ab;
    r12 = 0x6e2bbb28f583a27b;
    r13 = 0x795b9d181993cdad;
    r14 = 0x2fb0514776b29233;
    r15 = 0x7b54bcaba3afeab8;
    sil >>= 1;
    __asm ("clc");
    r15d += r8d;
    bx = (int16_t) al;
    __asm ("stc");
    rax += r9;
    __asm ("stc");
    r14 -= 0x258ef9df;
    dh = dl;
    __asm ("cmovns bp, dx");
    cl &= 0xf;
    __asm ("shrd ax, r15w, cl");
    r13d = rotate_right32 (r13d, cl);
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
    rbx = 0x67bd78c1c5fa1f38;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40373a */
#include <stdint.h>
 
int64_t log_size_4_var_029 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x7edfed5956eaa6d1;
    rbx = 0xf977b7228afec2ea;
    rcx = 0x163648fcd73cb78c;
    rdx = 0x3dafadabcefe8054;
    rsi = 0x4904dc51e9e77d22;
    rdi = 0xa19464372bb57e6d;
    r8 = 0xc4fe5cfc05e0b42;
    r9 = 0xf134759303f8a36f;
    r10 = 0xf7cf78fdfb4de5e6;
    r11 = 0x1bcc92c4d2c8790b;
    r12 = 0x866fef4c771eac44;
    r13 = 0x7e899719a79afe40;
    r14 = 0x1922fe3c13d6ab2e;
    r15 = 0x339bcdc97a3cdb84;
    __asm ("shrd r9, r11, cl");
    __asm ("btr ax, r10w");
    r9w--;
    if (r9w != 0) {
        r10 = r11;
    }
    r15b >>= cl;
    __asm ("btr si, 0x63");
    __asm ("stc");
    r14 += 0xffffffff9b736993;
    __asm ("shld si, r8w, 0xf");
    r14d >>= cl;
    __asm ("btr r10d, 0x9c");
    cl &= 0xf;
    __asm ("shld r10w, ax, cl");
    __asm ("xadd r12w, r9w");
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
    rbx = 0x509194727030efe6;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x404582 */
#include <stdint.h>
 
int64_t log_size_4_var_041 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x20a843fdd12f173c;
    rbx = 0xac6ae2b8f0053ad6;
    rcx = 0xd8ae01eb49ebd83f;
    rdx = 0x3d365eef8652ea20;
    rsi = 0x7c0e996806042c20;
    rdi = 0x6f391e2c3752c70c;
    r8 = 0x34565e513c3c21e9;
    r9 = 0x8fee06d87fa3e418;
    r10 = 0xd7b314830b0b17e7;
    r11 = 0x831461dadbf32f75;
    r12 = 0xe1988bf3398c448d;
    r13 = 0x2d315774314dd3bb;
    r14 = 0x763286dd7dca8a36;
    r15 = 0xb79835a001810e7a;
    r12 += 0xffffffffc33996f9;
    if (r12 != 0) {
        dx = r12w;
    }
    dh |= al;
    __asm ("stc");
    r9b += r11b;
    __asm ("stc");
    al += r13b;
    __asm ("shld rax, rdi, 0xbe");
    r13 >>= cl;
    if ((bp & cx) < 0) {
        r8 = r10;
    }
    bx >>= 0xbf;
    r8w = -r8w;
    r8b = ~r8b;
    r9w--;
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
    rbx = 0xf376ce26d567f562;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4047ea */
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
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_043 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xa5d5953b1bc3ecca;
    rbx = 0x62ed807d5a21f3a8;
    rcx = 0x663d17f11f01fa94;
    rdx = 0xb33f8a5a9693e8b4;
    rsi = 0x2c35f5407ad05e52;
    rdi = 0x15e28e6449a77984;
    r8 = 0xe1674aedad07c9a4;
    r9 = 0xb427f3b3d34aa865;
    r10 = 0x5a4c9748cf5d4dca;
    r11 = 0xbf9eade9e4c7439b;
    r12 = 0x4a7526395fc4f675;
    r13 = 0x1f2836be42e3c8ab;
    r14 = 0x69d68146c2d2b60c;
    r15 = 0xf97b77b8da11b2b5;
    dl >>= cl;
    r11 = (int64_t) si;
    ax = (int16_t) al;
    di = rotate_right16 (di, 0xec);
    r14b--;
    r9d = rotate_right32 (r9d, 1);
    r12b >>= cl;
    r13d |= r12d;
    r11 = rdx;
    r10b = bpl;
    ecx = rotate_right32 (ecx, 0xf9);
    __asm ("btr dx, bx");
    al++;
    di = ~di;
    rbx = rotate_left64 (rbx, cl);
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
    rbx = 0x5a7e27bbd8f574ce;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x404a3c */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_045 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x623bb85dffe4a17d;
    rbx = 0x488cc7c4729a77a;
    rcx = 0x7ccd93b2528e700d;
    rdx = 0xf83c9c5c2ca423c2;
    rsi = 0xcd7e1832227dbaa3;
    rdi = 0x853e8e0bb1e361d8;
    r8 = 0x290a72d0d10f00ff;
    r9 = 0x56b735ca33b5f366;
    r10 = 0xbf0d0a9cd870af94;
    r11 = 0x63147e8e828fd896;
    r12 = 0x9277a18e51fc9d2b;
    r13 = 0xb2552f6117c414ca;
    r14 = 0x5ea72324c5c8b2f0;
    r15 = 0x8c97249985ad41aa;
    r11 = rotate_left64 (r11, cl);
    r13 = r9;
    rax ^= rbp;
    ebx = (int32_t) r11b;
    ax <<= cl;
    r13d &= r12d;
    rdi++;
    ch = (rdi < 0) ? 1 : 0;
    rbx = (int64_t) bpl;
    r13w -= r13w;
    r12d >>= 1;
    __asm ("stc");
    ch += bh;
    rdi <<= 1;
    __asm ("clc");
    sil += r12b;
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
    rbx = 0x819fe80263ebe97d;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x404c9c */
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
 
int64_t log_size_4_var_047 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xa70a5be91bfeae15;
    rbx = 0x9fb1386d0830f8c9;
    rcx = 0x225ec6726769e127;
    rdx = 0x278f68977fc1e751;
    rsi = 0x46e34808af2b92dc;
    rdi = 0x78bbf33596e4619c;
    r8 = 0x64833531c30ba389;
    r9 = 0x776a56d67dc29987;
    r10 = 0x318e78a3312e6d2f;
    r11 = 0x1b725d96dd06f3a9;
    r12 = 0xe5eb13fb23e9505f;
    r13 = 0xa477bb4eb4222daa;
    r14 = 0x9ff101c912dcf2a9;
    r15 = 0x3b9783f9e7a343b2;
    dx = (int16_t) dil;
    ah <<= cl;
    r15d = rotate_right32 (r15d, cl);
    __asm ("cmpxchg r11d, r8d");
    __asm ("shrd r8w, r13w, 4");
    al--;
    rdi >>= cl;
    r13w = (int16_t) r12b;
    r11w = rotate_right16 (r11w, 0xb5);
    r10d >>= 0xd4;
    r14w &= 0xcf6c;
    __asm ("cmovo r14, rbp");
    bp = ax * 0xc13f;
    __asm ("bts si, r8w");
    __asm ("clc");
    if (r14w >= 0) {
        si = ax;
    }
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
    rbx = 0xdd64a70e90eec6f5;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x404f0a */
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
 
int64_t log_size_4_var_049 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x5431b9ac2a0efcbe;
    rbx = 0x8c194ff4ab92e764;
    rcx = 0x24c709e5be9a848;
    rdx = 0xee47746813f9fd96;
    rsi = 0x2ebff17095cedd0d;
    rdi = 0x9c7a63648249e0fb;
    r8 = 0x364800def97bee45;
    r9 = 0x77df729649437ed5;
    r10 = 0xc7feb056ff975db7;
    r11 = 0x5b610282bbdacb38;
    r12 = 0xd99060bdbac5f5f8;
    r13 = 0xad710a594593082a;
    r14 = 0xdb2d5de0f35402e1;
    r15 = 0x2ef9e33f1bc3a123;
    r12++;
    r12w = rotate_right16 (r12w, cl);
    r15d &= r12d;
    bx = rotate_left16 (bx, 0x8b);
    tmp_0 = r9;
    r9 = r12;
    r12 = tmp_0;
    rbp ^= 0xffffffffc53844d6;
    ax = rotate_left16 (ax, 1);
    __asm ("cmpxchg rdx, rbx");
    __asm ("cwd");
    __asm ("xadd bl, cl");
    tmp_1 = cl;
    cl = dl;
    dl = tmp_1;
    r10b = (r13 <= 0xffffffff86156a45) ? 1 : 0;
    if (r13 != 0xffffffff86156a45) {
        eax = r13d;
    }
    r9 = (int64_t) al;
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
    rbx = 0xfa55a89c9d28c2a3;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40503f */
#include <stdint.h>
 
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_050 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xffd4e220c207b959;
    rbx = 0x43b27646b7243a9a;
    rcx = 0x69f633e3fbb376f4;
    rdx = 0xdba26976dcc962cc;
    rsi = 0x201c8bf1460955cc;
    rdi = 0xaaeedabf78e83ec0;
    r8 = 0xa2ae0213d4d9d5c5;
    r9 = 0x78e637d590e2aa06;
    r10 = 0xfff5596d967c2bba;
    r11 = 0x9c407fa66ac0d0d;
    r12 = 0x873b67e8b29c539c;
    r13 = 0x716c465a2e356fa7;
    r14 = 0x5a088f3da16feef6;
    r15 = 0xef79fd7e525ccd6e;
    bl <<= 2;
    r9b = rotate_right64 (r9b, 1);
    ebx = rotate_right32 (ebx, cl);
    r9 = r9d - 0x5737e0a5;
    r11d |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / r11d;
    edx = edx:eax % r11d;
    r11d ^= r15d;
    __asm ("shld r13d, r14d, 0xab");
    __asm ("bsr r12w, r10w");
    dx += r13w;
    r14w <<= 1;
    r11w >>= cl;
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
    rbx = 0x4789c4f9d454adfc;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4052a9 */
#include <stdint.h>
 
int64_t log_size_4_var_052 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xa124d96480b5cad5;
    rbx = 0xc9b5d97c9ac60901;
    rcx = 0x39d5fca241dbe1fb;
    rdx = 0x8043f6ab212afc8a;
    rsi = 0x2d7ceb374471191c;
    rdi = 0x36d803abd6b40324;
    r8 = 0x1576a6bde712ff30;
    r9 = 0xfb61babed2e50c7;
    r10 = 0xedb18ed58f7a6a1;
    r11 = 0x5e140f02e6f78825;
    r12 = 0xdc9241337d928987;
    r13 = 0x8023915a74561655;
    r14 = 0x3035ea10d1e9059e;
    r15 = 0x7245f0edfd908cf4;
    sil <<= 1;
    rax >>= 1;
    r15d |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / r15d;
    edx = edx:eax % r15d;
    tmp_0 = ch;
    ch = bl;
    bl = tmp_0;
    __asm ("xadd rdi, r13");
    ah |= al;
    if (ah < 0) {
        rdi = rbx;
    }
    edx:eax = eax * r13d;
    tmp_1 = bl;
    bl = dh;
    dh = tmp_1;
    __asm ("xadd r13w, cx");
    r10d -= edx;
    r12w -= 0xcfd8;
    if (r12w < 0) {
    }
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
    rbx = 0xc19f9b31f492f017;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40551c */
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
 
int64_t log_size_4_var_054 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x170de789fe576b38;
    rbx = 0xde337bde99691ca6;
    rcx = 0xdb0e90e66200408;
    rdx = 0x8b6b94395b34c50e;
    rsi = 0xfcf3b159edb72789;
    rdi = 0xc40e15084d8456ad;
    r8 = 0x6f6f23b58cb058bc;
    r9 = 0xd13a6ca530f913cf;
    r10 = 0x9bf2fa55169fb77b;
    r11 = 0x1f2536032437c02e;
    r12 = 0xb8cf3fe71356d4ea;
    r13 = 0xeef630728ca6c9d9;
    r14 = 0xb859c72b166f3bcd;
    r15 = 0x6873f28d0607ae99;
    ebx <<= 0xe3;
    r10b >>= cl;
    __asm ("shrd rax, rbx, 1");
    r15 <<= 1;
    rdx -= 0xed83de7;
    if (rdx >= 0) {
        r13d = edx;
    }
    if (rdx >= 0) {
        di = dx;
    }
    __asm ("clc");
    rdx += 0xffffffffb30d8690;
    bx += r12w;
    __asm ("stc");
    r11d = rotate_right32 (r11d, 1);
    r13 = rotate_left64 (r13, cl);
    r11b ^= r14b;
    r8 >>= cl;
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
    rbx = 0x1ccf815800d976a0;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x405786 */
#include <stdint.h>
 
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_056 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xaed8b7561452c7ec;
    rbx = 0xd30f6b896a4ff7c;
    rcx = 0x3a3c0a6d56fd90f6;
    rdx = 0x3e9d6e6abac8bcb7;
    rsi = 0xa2d4359878b42edd;
    rdi = 0xcacf06549621f64e;
    r8 = 0xbd6f16386651a9f8;
    r9 = 0xa75f8671d96d452e;
    r10 = 0xcf9323a0023825ec;
    r11 = 0x3384848a4ae1a63c;
    r12 = 0x4a4fbad853aca1a5;
    r13 = 0x369dff508e8d2236;
    r14 = 0x378ec23040655aad;
    r15 = 0x38a10a22cba222d8;
    r8b = rotate_right64 (r8b, 1);
    __asm ("bsr rbp, rsi");
    __asm ("cwd");
    ch = 0x8c;
    r12 = rcx * 0xffffffff8b28c64b;
    __asm ("btc r8w, 0xe9");
    __asm ("clc");
    rbx += rbp;
    cl &= 0xf;
    __asm ("shld cx, r11w, cl");
    ah <<= 1;
    r11d = (int32_t) bx;
    __asm ("cmpxchg bp, r9w");
    __asm ("stc");
    bl += al;
    r13w = 0x34f2;
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
    rbx = 0xa5b14444d7dd8026;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4059ef */
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
 
int64_t log_size_4_var_058 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x1ff61ba81cf35f05;
    rbx = 0xba322a03afcf74f;
    rcx = 0x7684257d09c9d45b;
    rdx = 0x589ae5e01a601cbd;
    rsi = 0xb68bd5c18876df79;
    rdi = 0x38a9fbff85342674;
    r8 = 0x40ab152432ac7943;
    r9 = 0xf93185b7b0894b64;
    r10 = 0x863ffb09fcdcc2ea;
    r11 = 0x42cf2b631ec7e967;
    r12 = 0xfe297f2eb9111c9;
    r13 = 0xe75a10555fa0ec35;
    r14 = 0xea20c3bb8b30566e;
    r15 = 0x67973b8da1eb8944;
    r8d = r13 + r12*8;
    if (((r11w >> 0x39) & 1) < 0) {
        esi = r10d;
    }
    r14w = rotate_right16 (r14w, 0x7f);
    __asm ("shld rsi, r10, cl");
    __asm ("bsf si, r12w");
    if (r9d >= eax) {
        r13d = edi;
    }
    ax = (int16_t) bl;
    __asm ("stc");
    r12d = rotate_left32 (r12d, 1);
    eax = (int32_t) ax;
    __asm ("clc");
    r12d += 0x4b3742d7;
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
    rbx = 0x930237210d58dfc;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x405c52 */
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
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_060 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x7fdc9da148e63bc;
    rbx = 0x3c2234bf45b46b06;
    rcx = 0x5e5007e66cb21ff6;
    rdx = 0x3750348c90350d8;
    rsi = 0x6877d6e0f56aad63;
    rdi = 0xd27bd873916f8098;
    r8 = 0x8693efc637eea000;
    r9 = 0x4ac921e5db81d88;
    r10 = 0xe702e07e187ecd4c;
    r11 = 0x5dcf1204168a5a0c;
    r12 = 0x9253f725f2b93309;
    r13 = 0x8074a818451cf7cb;
    r14 = 0x34c4a56b092d2ca3;
    r15 = 0xa94d9433b8a2480d;
    di &= 0x1be6;
    __asm ("cmpxchg r10d, r10d");
    r12d++;
    r10w >>= 1;
    tmp_0 = r14b;
    r14b = r10b;
    r10b = tmp_0;
    __asm ("bsf r11d, r9d");
    r13b = rotate_left64 (r13b, cl);
    dil |= 0x37;
    __asm ("bsr rbp, r8");
    r12d = rotate_left32 (r12d, 1);
    sil = rotate_left8 (sil, 1);
    dx:ax = ax * r14w;
    rdx:rax = rax * r12b;
    r15 = ebx * 9;
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
    rbx = 0x579f2a8988a5a4;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x405ec0 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_062 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x42716586fb3327e8;
    rbx = 0xc45675d73cfc059e;
    rcx = 0x729417779438cfb1;
    rdx = 0x2033e897efcca8ea;
    rsi = 0xc3ce7d6f38754552;
    rdi = 0xe933ebdcfbdc8dbc;
    r8 = 0x341f048611f76858;
    r9 = 0x74a31e0f3a7b60e1;
    r10 = 0x662963d72c2ac0e1;
    r11 = 0x8bdc00f8a23931d7;
    r12 = 0x288a03b5fee23e70;
    r13 = 0x56f51e5499f56c29;
    r14 = 0x28afb5233c125320;
    r15 = 0x5a6f36c4a3f9030e;
    __asm ("shrd esi, ebp, cl");
    ebx >>= 1;
    al = rotate_left8 (al, 1);
    __asm ("clc");
    r14 = rotate_right64 (r14, 1);
    rdi += r8;
    __asm ("btr r14w, 0xd4");
    r13b -= 0x86;
    rcx |= r13;
    __asm ("setno al");
    rsi = ebp - 0x7132a38;
    r12w = 0x7cc1;
    if (rcx > 0) {
        r10d = ecx;
    }
    __asm ("clc");
    edi += 0xe3e503ac;
    __asm ("cmovns r8, rbx");
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
    rbx = 0x966206805af152f6;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x406124 */
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
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_064 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xdb08845479b8ac8f;
    rbx = 0x122d176f8e89e502;
    rcx = 0xd6f3014033e97df2;
    rdx = 0x7fab3a55eda2504;
    rsi = 0xb70a40d75826a6af;
    rdi = 0x8c42f36ced2d6dd0;
    r8 = 0xe4d26b67314540bd;
    r9 = 0x11d6db54eb284de3;
    r10 = 0xda7ba284f83121ca;
    r11 = 0x9b17c8797951a546;
    r12 = 0xc8aa56e9f5cc1ab6;
    r13 = 0x7ed0f020728f59de;
    r14 = 0x22d6b75232d67b8c;
    r15 = 0x4277175917eef6ba;
    r14 *= 0x539cb2d9;
    eax ^= 0x1dee439a;
    al = rotate_right8 (al, 0x66);
    __asm ("xadd r14d, r9d");
    r8d = rotate_left32 (r8d, cl);
    dh &= dl;
    if (dh != 0) {
        ax = r13w;
    }
    r15 = rotate_right64 (r15, cl);
    r10w = (int16_t) dil;
    r14w += cx;
    __asm ("stc");
    bl = rotate_right8 (bl, 1);
    __asm ("clc");
    r14w -= r10w;
    tmp_0 = dl;
    dl = bl;
    bl = tmp_0;
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
    rbx = 0x31e33325a55acbee;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x406387 */
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
 
int64_t log_size_4_var_066 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x3b9efccaab32a7;
    rbx = 0x4409c872eb65fb1a;
    rcx = 0x93633924d52316e2;
    rdx = 0x87be2b47bb50cd9d;
    rsi = 0x33f66deb4a132e44;
    rdi = 0xb885680e9d224c3f;
    r8 = 0xab1c490eb7a05707;
    r9 = 0x1f637cb13f8652c4;
    r10 = 0x7678c41e6b162d1a;
    r11 = 0x45d332679297e25b;
    r12 = 0xda41cfb9c676541e;
    r13 = 0x21e58d50564a1324;
    r14 = 0x97003a8c99666002;
    r15 = 0x1eaf29b03ae73d0c;
    di = esi + r15d*4 - 0x5dc7717a;
    edx:eax = eax * r8d;
    bp++;
    rbx -= 0xffffffffe6211964;
    bh <<= 0x67;
    ebp = (int32_t) bl;
    rdi = rotate_left64 (rdi, 1);
    __asm ("stc");
    r10b -= 0x56;
    bx = (int16_t) sil;
    r13d = r10d + r13d;
    r9 -= rdx;
    __asm ("stc");
    r14d = rotate_left32 (r14d, 1);
    ah |= bh;
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
    rbx = 0xfc2af5520b6417a5;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4065e9 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int64_t log_size_4_var_068 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xa4450109e3bf19c7;
    rbx = 0xfa7fe0efcdde0dfa;
    rcx = 0xfa4d5a5d04a5822c;
    rdx = 0xd4daf6465ab702f4;
    rsi = 0x5f87b773719ab9a6;
    rdi = 0xaa80fe687e704872;
    r8 = 0xa4f30d09e9e74518;
    r9 = 0x1e779dde0a1fa1f0;
    r10 = 0x226a0bc8682eb74f;
    r11 = 0xfbbaed8af70a5f32;
    r12 = 0xf99d9b120673b41d;
    r13 = 0xbb7d33653f68924a;
    r14 = 0x4d36ffa1390e9808;
    r15 = 0xc0452891640f9d0;
    r9d >>= 1;
    rcx += 0x28f9f4b5;
    __asm ("cmpxchg al, dh");
    eax -= 0xd44faca7;
    r10w = (int16_t) dl;
    ch >>= cl;
    __asm ("bsf rsi, r13");
    bl |= ah;
    r12d = SWAP32 (r12d);
    rax &= rdi;
    r11w |= cx;
    __asm ("xadd al, al");
    r9d = SWAP32 (r9d);
    __asm ("bts r10d, 0x29");
    cl--;
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
    rbx = 0x65b6fb1ab0e53f95;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40743e */
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
 
int64_t log_size_4_var_080 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x489d00849e20836b;
    rbx = 0x246f858ca5f3720d;
    rcx = 0x4fb439df5d525311;
    rdx = 0x4d543c0d1cdf03d8;
    rsi = 0x46b1568e3a9bd553;
    rdi = 0x94293d5b39467e51;
    r8 = 0xfdcbb3ba11ce8ec7;
    r9 = 0x8a04d8f889c47dda;
    r10 = 0x9e11cd400c6c13f7;
    r11 = 0x2031b45cf3346e1;
    r12 = 0x1e9b863cbabf4536;
    r13 = 0xa11fd8fd8678910f;
    r14 = 0x5954d6721abe6f32;
    r15 = 0x9d808b93cf0b86e6;
    r15 >>= cl;
    __asm ("bts ebp, 0x56");
    bp = rotate_left16 (bp, 1);
    __asm ("shrd ebp, esi, 0xe4");
    ebx--;
    rbx = rdx * 0x2672e1b7;
    r14 >>= 0xe6;
    rbx |= r14;
    dh = (rbx < 0) ? 1 : 0;
    __asm ("clc");
    r15d = rotate_left32 (r15d, 1);
    r9 = (int64_t) dil;
    if (rbx < 0) {
        edi = r13d;
    }
    edx:eax = (int64_t) eax;
    ah += bl;
    dl |= sil;
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
    rbx = 0x3cbcf60fc8e8cc7e;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4076a8 */
#include <stdint.h>
 
int64_t log_size_4_var_082 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xa721672152ca3987;
    rbx = 0x90ea95058afa43b7;
    rcx = 0x26234bccf75ee7c7;
    rdx = 0x6250fb3af62f1be0;
    rsi = 0x26dd483693f90ee0;
    rdi = 0x14065e1ee0a5508d;
    r8 = 0xf5352b44ac116fd8;
    r9 = 0x1c6573b687c78cb8;
    r10 = 0x9b569ff2602b1c36;
    r11 = 0xe3ac58415c3aaa9b;
    r12 = 0xa7c2bffffd20f0bf;
    r13 = 0xd9f2fb8986119fd7;
    r14 = 0xed743c6d47efbb9d;
    r15 = 0x3c12a40a7edd6ffc;
    __asm ("cmpxchg r11b, cl");
    dl = ((al & 0x11) > 0) ? 1 : 0;
    if ((al & 0x11) > 0) {
        r12 = rdi;
    }
    __asm ("stc");
    bl += 0x58;
    r10b >>= 0x7c;
    __asm ("bts eax, r14d");
    rbx >>= cl;
    dx = (int16_t) ah;
    r11b <<= cl;
    di = 0xbf27;
    __asm ("cmpxchg r10d, ebx");
    si = (int16_t) bh;
    __asm ("clc");
    bp += r10w;
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
    rbx = 0x498fc2a96ce3dd69;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x40790a */
#include <stdint.h>
 
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
 
int64_t log_size_4_var_084 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x18c13bcbefd6af3;
    rbx = 0x7bd74bac756d0806;
    rcx = 0xae988572083a47f8;
    rdx = 0xa19eba03e1c0dc8f;
    rsi = 0x6e52cea150a294b6;
    rdi = 0x2993669ffc41ce44;
    r8 = 0x5e0c9fc894f2072e;
    r9 = 0xeec12d675d6404fe;
    r10 = 0xe74da1a330bda5a4;
    r11 = 0xbc527ec27d93253;
    r12 = 0xf4094393d75704a0;
    r13 = 0x2e7716a7338684ce;
    r14 = 0xd17d0c61327e517f;
    r15 = 0x6ca9cab059b2b786;
    __asm ("btc r14w, bx");
    if (? >= ?) {
    }
    rbp = rotate_left64 (rbp, 1);
    r11b = rotate_right64 (r11b, cl);
    ebx >>= cl;
    r11w = 0xf4b7;
    r14b ^= 0x49;
    if (ebx >= 0) {
        r14d = edx;
    }
    if (ebx > 0) {
        rdi = r9;
    }
    __asm ("shld r12, r12, 0x42");
    rcx += 0xffffffffc1594b05;
    cx = ax * 0x568b;
    __asm ("stc");
    bh -= al;
    r15 = rotate_left64 (r15, 1);
    r10 >>= 0x22;
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
    rbx = 0x737dbff6660c4007;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x407b6d */
#include <stdint.h>
 
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
 
int64_t log_size_4_var_086 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xf3ba1d0f9fd04a50;
    rbx = 0xd3ba0ddb91d40c9e;
    rcx = 0xb2ee5888c648a5cd;
    rdx = 0x2a82a2c54364c54f;
    rsi = 0x846c970330f28f6a;
    rdi = 0xd6fc14ae2af68cae;
    r8 = 0xf1856b9c591b6712;
    r9 = 0x51ec8f1d7e393e22;
    r10 = 0xfd9d11cf51a44fe0;
    r11 = 0xead727e0c37a73c;
    r12 = 0xa1df7a6a8a28ce1;
    r13 = 0x247abc49a72e1c33;
    r14 = 0xf199c22d59808247;
    r15 = 0x4cc9c82e0442c430;
    r10b -= r14b;
    edx:eax = eax * eax;
    __asm ("xadd dl, r9b");
    esi = rotate_left32 (esi, 0xf);
    di = r8w * 0x6b7;
    ebx = rotate_left32 (ebx, 0x36);
    __asm ("sahf");
    __asm ("shld si, dx, 5");
    __asm ("cmpxchg r14d, ebp");
    r10b = rotate_right64 (r10b, cl);
    rdx >>= 1;
    r12d = rotate_left32 (r12d, 1);
    __asm ("btc r8, 0x3a");
    cx ^= r13w;
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
    rbx = 0x998e471279d39bd5;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x407dcd */
#include <stdint.h>
 
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
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_088 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x96364ee80c078b9f;
    rbx = 0x8ebe6bb88d99923c;
    rcx = 0xcec852d43c6be9f0;
    rdx = 0x1cdee21e424931d2;
    rsi = 0xe5f9876c895031d0;
    rdi = 0xc3054a6138668e7a;
    r8 = 0x310ecccde1be157d;
    r9 = 0x16be4dbcc6643105;
    r10 = 0x57d4ad2a072991c;
    r11 = 0x8b8b19400e7ac773;
    r12 = 0xdced6cd99228723a;
    r13 = 0xded8e11177546a9f;
    r14 = 0x200181fe5a35abe0;
    r15 = 0x452d3c6ab6d9effd;
    r14w ^= 0x2ce;
    al |= cl;
    r15 = (int64_t) sil;
    rdx = rotate_right64 (rdx, cl);
    r8b = ((rdx & r13) > 0) ? 1 : 0;
    r15d = (int32_t) r12w;
    cl = rotate_left8 (cl, 0x46);
    eax = SWAP32 (eax);
    cx = (int16_t) ah;
    edx:eax = eax * r15d;
    r11d >>= 0xd9;
    __asm ("shrd rbp, r13, 1");
    __asm ("stc");
    rbp += r13;
    r9d = rotate_left32 (r9d, 0xb5);
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
    rbx = 0x9954a5b6e4b2e6b3;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x408159 */
#include <stdint.h>
 
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
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_091 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xd71db6add1db1a36;
    rbx = 0x6ff8c4a3f8ebe74d;
    rcx = 0x525baa3c2fe3acae;
    rdx = 0x6065285a86a98b5b;
    rsi = 0x2ece156f87900687;
    rdi = 0xef602ef05137a571;
    r8 = 0x283475cb65cfde3b;
    r9 = 0x82626fbfe46b6236;
    r10 = 0x73d37bb457ad1604;
    r11 = 0x997d7a949ecb78e2;
    r12 = 0xc0add0c5a578b6ae;
    r13 = 0xa72be50deed38f92;
    r14 = 0x131e33f3a992c648;
    r15 = 0x9a17f675ba89aef0;
    __asm ("btc ebp, 0x33");
    sil &= 0xc;
    r15w -= 0x8657;
    __asm ("clc");
    r10d -= r9d;
    r11w -= 0xf8e8;
    __asm ("clc");
    si -= 0xa069;
    r15w = rotate_left16 (r15w, 1);
    si = -si;
    __asm ("stc");
    r8 = rotate_left64 (r8, 1);
    r8d = rotate_right32 (r8d, cl);
    r10 >>= 0x8e;
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
    rbx = 0xdf656baa508129a1;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x4083c6 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int64_t log_size_4_var_093 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x9eb0d8fa29e3a14c;
    rbx = 0x1d22a355c40aa843;
    rcx = 0xc9428b6db47ee7ec;
    rdx = 0x662c9ce2d38d5758;
    rsi = 0x49c6e6c5c0dabb9b;
    rdi = 0x3b13bae1c55f2620;
    r8 = 0x89a13f118c559b36;
    r9 = 0x64287d847345aed2;
    r10 = 0xf011674f85d89828;
    r11 = 0x1ed155542340987b;
    r12 = 0xce1059f385f83094;
    r13 = 0xadcc9c8c319e0d0f;
    r14 = 0x42a14ac05a9925ed;
    r15 = 0x388f6f4711be3994;
    __asm ("sahf");
    if (? == ?) {
        bx = si;
    }
    r12w = rotate_right16 (r12w, cl);
    r15w *= 0x8eb9;
    r10b >>= 0x2a;
    r8d |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / r8d;
    edx = edx:eax % r8d;
    r9d += 0x40ca14c1;
    r9b += 0xf9;
    bp |= r12w;
    __asm ("cmovp rdi, r13");
    rdi = rcx;
    __asm ("sahf");
    r9 = -r9;
    __asm ("cmovno r11d, r12d");
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
    rbx = 0x5b1b05e42ba52cdc;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x408631 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_095 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x80e9ee18da6405b1;
    rbx = 0x2bcb46e51e1f3a73;
    rcx = 0x3852be286d8a107d;
    rdx = 0x88c0a6f7607d3c96;
    rsi = 0x1b4e6002bfe70654;
    rdi = 0x33f1d09f815200dd;
    r8 = 0xefe652a98314734;
    r9 = 0xa94d3089bb4d7e1c;
    r10 = 0x58e3b25f23fcf590;
    r11 = 0x31b0c0d12c3c762d;
    r12 = 0x1f788503dbaf4df3;
    r13 = 0xac2c7c684d1df5c1;
    r14 = 0x83ecd9e7a2b8fe1e;
    r15 = 0x69f0264466a4dccb;
    r9d = rotate_left32 (r9d, cl);
    r9 >>= 0xed;
    r9 >>= cl;
    bx |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / bx;
    dx = dx:ax % bx;
    al &= 0x4c;
    __asm ("btr rax, r14");
    __asm ("shrd rax, r8, 0xf1");
    r13d -= esi;
    r11b &= bpl;
    __asm ("xadd r15w, r13w");
    tmp_0 = ch;
    ch = dh;
    dh = tmp_0;
    if (r11b < 0) {
        r10 = r12;
    }
    eax = (int32_t) cl;
    ebp = (int32_t) r15w;
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
    rbx = 0xa99c0cd83fc1a157;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x408892 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_097 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0xb9fceec5a38e86be;
    rbx = 0xdfdb9557db888c50;
    rcx = 0xe8a09518292a6dea;
    rdx = 0x1ada3bf02427f19f;
    rsi = 0x98b0be0dc7100b19;
    rdi = 0x8b0c980d35827fbf;
    r8 = 0x400f4483bf4befbe;
    r9 = 0x9feec2832ab60f89;
    r10 = 0x6f30b7bc3487a70a;
    r11 = 0x4c5e56f6c38b6a77;
    r12 = 0x9e810ff00d856562;
    r13 = 0x9398ad44ea0f480d;
    r14 = 0x7f31ecf063935a51;
    r15 = 0x1f38b4719d4166e3;
    __asm ("shrd r10d, ebp, cl");
    tmp_0 = r12b;
    r12b = bpl;
    bpl = tmp_0;
    dl = ~dl;
    r13b = -r13b;
    r10w = rotate_left16 (r10w, 1);
    r13 >>= cl;
    __asm ("shld bp, r11w, 1");
    ah = (r13 < 0) ? 1 : 0;
    rbx <<= 1;
    r15w += r13w;
    __asm ("seto r11b");
    __asm ("shld r12, rcx, cl");
    edx:eax = eax * ecx;
    __asm ("stc");
    r10w = rotate_left16 (r10w, 1);
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
    rbx = 0x5e4d24147dab90a5;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x408aee */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t log_size_4_var_099 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = 0x3b97b458f703516c;
    rbx = 0xe83b04207a507675;
    rcx = 0x4369b26417c64ecb;
    rdx = 0x9774e1ab689c3133;
    rsi = 0xcab9dedb6e7d5e23;
    rdi = 0x337eff5edf30420b;
    r8 = 0x7c49c05d1c25ecdc;
    r9 = 0xe3a99a8f1719f247;
    r10 = 0x197c5725a2c5c36f;
    r11 = 0xf9e5ae1956edb310;
    r12 = 0x3ac3dcb3ea6209f2;
    r13 = 0x591cd24f8c316294;
    r14 = 0xe60778f61646df01;
    r15 = 0xeb6d30c55e71f272;
    r8w <<= 0xd6;
    __asm ("shld esi, ebx, 1");
    __asm ("clc");
    r10d += 0x3008d4ad;
    r13 = (int64_t) r13b;
    r13b -= 0xc2;
    cx <<= 0xed;
    r13d = (int32_t) ax;
    si = ~si;
    ecx >>= 1;
    __asm ("stc");
    r12d -= r13d;
    r9b = rotate_left64 (r9b, 0xf3);
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
    rbx = 0xacf3431ae8739746;
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
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401030 */
#include <stdint.h>
 
void assert_fail (void) {
    assert_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_x64/x64_elf_complex_with_base_100_funcs_of_size_16/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] -r-x section size 27 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
