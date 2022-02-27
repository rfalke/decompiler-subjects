/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rc6crypt/ia32_elf/subject.exe @ 0x80480fb */
#include <stdint.h>
 
int32_t entry0 (void) {
    while (al != 0x65) {
        edx = 0;
        dl = 0x90;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804804c, edx);
label_0:
        ebx = 0;
        eax = 1;
        eax = sys_exit (ebx);
        ebx = 1;
        ebx = 1;
        al = *(ebx);
        *(0x8055014) = al;
        if (al == 0x64) {
            goto label_3;
        }
    }
label_3:
    ebx = 1;
    fcn_080482b7 (ebx);
    fcn_08048329 (0x8055041, 0x100);
label_1:
    if (ebx == 0) {
        goto label_0;
    }
    ecx = 2;
    eax = 5;
    eax = sys_open (0x8055041, 0x2, edx);
    if (eax < 0) {
        goto label_1;
    }
    eax = 0;
    *(0x8055015) = eax;
label_2:
    edx = 0;
    dh = 0x20;
    eax = 3;
    eax = sys_read (0xeb, 0x8051014, edx);
    if (eax < 0) {
        edx = 0x13;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x80480dc, 0x13);
        goto label_0;
    }
    if (eax == 0) {
        goto label_4;
    }
    __asm ("pushal");
    ecx = eax;
    ecx >>= 4;
    if (ecx == 0) {
        goto label_5;
    }
    edx = ecx;
    esi = 0x8051014;
    edi = 0x8053014;
    do {
        if (*(0x8055014) != 0x64) {
            fcn_080483de ();
        } else {
            eax = fcn_08048460 ();
        }
        esi += 0x10;
        edi += 0x10;
        ecx--;
    } while (ecx != 0);
    edx <<= 4;
    *(0x8055015) += edx;
    __asm ("pushal");
    esi = edx;
    edi = 0;
    edi -= eax;
    edx = 1;
    eax = 0x13;
    eax = sys_lseek (0xeb, 0xed, 0x1);
    eax = 4;
    eax = sys_write (0xeb, 0x8053014, 0xe);
    __asm ("popal");
label_5:
    __asm ("popal");
label_4:
    if (eax == 0x2000) {
        goto label_2;
    }
    if (*(0x8055014) != 0x65) {
        esi = 0x8051014;
        eax &= 0xfffffff0;
        edi = *((esi + eax));
        eax = 0x5d;
        eax = sys_ftruncate (0xeb, 0xe0);
    } else {
        eax &= 0xf;
        if (eax != 0) {
            *(0x8055015) += eax;
            edi = eax;
            esi = 0x8051014;
            eax = 3;
            eax = sys_read (0xeb, 0xe, 0xed);
            esi = 0;
            esi -= edi;
            edx = 1;
            eax = 0x13;
            eax = sys_lseek (0xeb, 0xe, 0x1);
            ecx = 0;
            eax = 5;
            eax = sys_open (0x80480ef, ecx, edx);
            eax = 0x10;
            eax -= edi;
            ecx = edi + 0x8051014;
            eax = 3;
            eax = sys_read (0xea, ecx, 0xea);
            fcn_080483de ();
            edx = 0x10;
            eax = 4;
            eax = sys_write (0xeb, 0x8053014, 0x10);
        }
        eax = *(0x8055015);
        esi = 0x8053014;
        *(esi) = eax;
        edx = 4;
        eax = 4;
        eax = sys_write (0xeb, 0xe, 0x4);
    }
    eax = 6;
    eax = sys_close (0xeb);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rc6crypt/ia32_elf/subject.exe @ 0x80482b7 */
#include <stdint.h>
 
uint32_t fcn_080482b7 (int32_t arg_8h) {
    __asm ("pushal");
    ecx = 0;
    edi = *((ebp + 8));
    do {
        ecx++;
    } while (ecx >= 0);
    ecx--;
    fcn_080487a5 ();
    ebx = ecx;
    ecx >>= 1;
    esi = edi;
    fcn_080487fc ();
    edi = 0x8055019;
    fcn_08048826 ();
    edx = ebx;
    fcn_080487a5 ();
    ebx = ecx;
    if ((edx & 1) != 0) {
        ecx++;
    }
    esi = edi + ebx;
    fcn_080487fc ();
    edi = 0x805502d;
    eax = fcn_08048826 ();
    esi = 0x8055019;
    edi = 0x8055041;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    eax = *(esi);
    esi += 4;
    eax ^= *((esi + 4));
    memset (edi, eax, ecx);
    eax = *(esi);
    esi += 4;
    eax ^= *((esi + 4));
    memset (edi, eax, ecx);
    esi += 8;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rc6crypt/ia32_elf/subject.exe @ 0x80487a5 */
#include <stdint.h>
 
int32_t fcn_080487a5 (void) {
    __asm ("pushal");
    edi = 0x80488a0;
    eax = 0x67452301;
    memset (edi, eax, ecx);
    eax = 0xefcdab89;
    memset (edi, eax, ecx);
    eax = 0x98badcfe;
    memset (edi, eax, ecx);
    eax = 0x10325476;
    memset (edi, eax, ecx);
    eax = 0xc3d2e1f0;
    memset (edi, eax, ecx);
    eax = 0;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    ecx = 0x10;
    memset (edi, eax, ecx);
    esi = 0x80484e2;
    ecx = 0xa;
label_0:
    ebx = *(esi);
    edx = *((esi + 4));
    esi += 8;
    ecx = 0x10;
    do {
        ax = *(esi);
        esi += 2;
        *(edi) = ebx;
        *((edi + 4)) = edx;
        *((edi + 8)) = ax;
        edi += 0xa;
        __asm ("loop 0x80487e7");
    } while (1);
    ecx = 0x10;
    __asm ("loop 0x80487db");
    goto label_0;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rc6crypt/ia32_elf/subject.exe @ 0x80487fc */
#include <stdint.h>
 
int32_t fcn_080487fc (void) {
    __asm ("pushal");
    edi = esi;
    edx = ecx;
    ecx >>= 6;
    if (ecx == 0) {
        goto label_0;
    }
    do {
        fcn_080486af ();
        edi += 0x40;
        __asm ("loop 0x8048806");
    } while (1);
label_0:
    esi = 0x80488b4;
    eax = *(esi);
    ecx = *(esi);
    eax += edx;
    if (eax < ecx) {
        *((esi + 4))++;
    }
    *(esi) = eax;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rc6crypt/ia32_elf/subject.exe @ 0x8048826 */
#include <stdint.h>
 
int32_t fcn_08048826 (void) {
    __asm ("pushal");
    esi = 0x8048f3c;
    eax = *(0x80488b4);
    ecx = eax;
    edx = eax;
    eax &= 0x1fc0;
    esi += eax;
    ecx &= 0x3f;
    edi = 0x80488bc;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    ebx = edx;
    ecx = edx;
    edx >>= 2;
    edx &= 0xf;
    ecx &= 3;
    ecx = ecx*8 + 7;
    eax = 0;
    eax++;
    eax <<= cl;
    *((edi + edx*4)) ^= eax;
    ebx &= 0x3f;
    if (ebx > 0x37) {
        eax = fcn_080486af ();
        eax = 0;
        ecx = 0x10;
        memset (edi, eax, ecx);
        edi = 0x10;
    }
    eax = 0x10;
    eax <<= 3;
    *((edi + 0x38)) = eax;
    eax = *(0x80488b8);
    eax >>= 0x1d;
    *((edi + 0x3c)) = eax;
    fcn_080486af ();
    ecx = 5;
    esi = 0x80488a0;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rc6crypt/ia32_elf/subject.exe @ 0x80486af */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_080486af (void) {
    __asm ("pushal");
    esi = 0x80488a0;
    edi = ebp - 0x28;
    ecx = 5;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    esi = ecx;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    edi = ecx;
    esi += 0x48;
    ecx = 2;
label_1:
    ecx = 0x10;
label_0:
    eax = *((ebp - 0x28));
    ebx = *((ebp - 0x24));
    ecx = *((ebp - 0x20));
    do {
        edx = *((ebp - 0x1c));
    } while (ecx != 0);
    eax = uint32_t (*esi)(uint32_t, uint32_t, uint32_t, uint32_t) (ecx, 0x10, ecx, 2);
    eax += *((ebp - 0x18));
    *((ebp - 0x28)) = eax;
    *((ebp - 0x20)) = rotate_left32 (*((ebp - 0x20)), 0xa);
    eax = *((ebp - 0x18));
    ebx = *((ebp - 0x28));
    ecx = *((ebp - 0x24));
    edx = *((ebp - 0x20));
    eax = uint32_t (*esi)() ();
    eax += *((ebp - 0x1c));
    *((ebp - 0x18)) = eax;
    *((ebp - 0x24)) = rotate_left32 (*((ebp - 0x24)), 0xa);
    eax = *((ebp - 0x1c));
    ebx = *((ebp - 0x18));
    ecx = *((ebp - 0x28));
    edx = *((ebp - 0x24));
    eax = uint32_t (*esi)() ();
    eax += *((ebp - 0x20));
    *((ebp - 0x1c)) = eax;
    *((ebp - 0x28)) = rotate_left32 (*((ebp - 0x28)), 0xa);
    eax = *((ebp - 0x20));
    ebx = *((ebp - 0x1c));
    ecx = *((ebp - 0x18));
    edx = *((ebp - 0x28));
    eax = uint32_t (*esi)() ();
    eax += *((ebp - 0x24));
    *((ebp - 0x20)) = eax;
    *((ebp - 0x18)) = rotate_left32 (*((ebp - 0x18)), 0xa);
    eax = *((ebp - 0x24));
    ebx = *((ebp - 0x20));
    ecx = *((ebp - 0x1c));
    edx = *((ebp - 0x18));
    eax = uint32_t (*esi)() ();
    eax += *((ebp - 0x28));
    *((ebp - 0x24)) = eax;
    *((ebp - 0x1c)) = rotate_left32 (*((ebp - 0x1c)), 0xa);
    __asm ("loop 0x80486d5");
    goto label_0;
    ebp += 0x14;
    ecx--;
    if (ecx != 0) {
        goto label_1;
    }
    ebp -= 0x28;
    edi = 0x80488a0;
    eax = *((ebp - 8));
    eax += *((ebp - 0x20));
    eax += *((edi + 4));
    eax = *((ebp - 4));
    eax += *((ebp - 0x1c));
    eax += *((edi + 8));
    *((edi + 4)) = eax;
    eax = *((ebp - 0x14));
    eax += *((ebp - 0x18));
    eax += *((edi + 0xc));
    *((edi + 8)) = eax;
    eax = *((ebp - 0x10));
    eax += *((ebp - 0x28));
    eax += *((edi + 0x10));
    *((edi + 0xc)) = eax;
    eax = *((ebp - 0xc));
    eax += *((ebp - 0x24));
    eax += *(edi);
    *((edi + 0x10)) = eax;
    *(edi) = eax;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rc6crypt/ia32_elf/subject.exe @ 0x8048329 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_08048329 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    edi = 0x8050f3c;
    *(edi) = 0xb7e15163;
    ecx = 0;
    ecx++;
    do {
        eax = *((edi + ecx*4 - 4));
        eax += 0x9e3779b9;
        *((edi + ecx*4)) = eax;
        ecx++;
    } while (ecx < 0x2c);
    ecx = 0;
    esi = *((ebp + 8));
    edx = *((ebp + 0xc));
    edx >>= 5;
    do {
        eax = *((esi + ecx*4));
        *((edi + ecx*4)) = eax;
        ecx++;
    } while (ecx < edx);
    esi = 0x8050ff0;
    edx--;
    ecx = 0;
    *((ebp - 4)) = ecx;
    *((ebp - 8)) = ecx;
    *((ebp - 0xc)) = ecx;
    *((ebp - 0x10)) = ecx;
    do {
        ebx = *((ebp - 0xc));
        eax = *((edi + ebx*4));
        eax += *((ebp - 4));
        eax += *((ebp - 8));
        eax = rotate_left32 (eax, 3);
        *((ebp - 8)) += eax;
        *((ebp - 4)) = eax;
        ebx = *((ebp - 0x10));
        eax = *((esi + ebx*4));
        eax += *((ebp - 8));
        ecx = *((ebp - 8));
        eax = rotate_left32 (eax, cl);
        *((ebp - 8)) = eax;
        eax = *((ebp - 4));
        ebx = *((ebp - 0xc));
        *((edi + ebx*4)) = eax;
        eax = *((ebp - 8));
        ebx = *((ebp - 0x10));
        *((esi + ebx*4)) = eax;
        eax = *((ebp - 0xc));
        eax++;
        if (eax == 0x2b) {
            eax = 0;
        }
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0x10));
        eax++;
        if (eax == edx) {
            eax = 0;
        }
        *((ebp - 0x10)) = eax;
        ecx++;
    } while (ecx < 0x84);
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rc6crypt/ia32_elf/subject.exe @ 0x80483de */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_080483de (void) {
    __asm ("pushal");
    esi = *((ebp + 0xc));
    edi = *((ebp + 8));
    esi = 0x8050f3c;
    eax = *(edi);
    ebx = *((edi + 4));
    ebx += *(esi);
    ecx = *((edi + 8));
    edx = *((edi + 0xc));
    edx += *((esi + 4));
    ebp = esi + 8;
    do {
        esi = edx + edx + 1;
        esi *= edx;
        esi = rotate_left32 (esi, 5);
        edi = ebx + ebx + 1;
        edi *= ebx;
        edi = rotate_left32 (edi, 5);
        ecx = esi;
        eax ^= edi;
        eax = rotate_left32 (eax, cl);
        eax += *(ebp);
        tmp_0 = eax;
        eax = ecx;
        ecx = tmp_0;
        ecx = edi;
        eax ^= esi;
        eax = rotate_left32 (eax, cl);
        eax += *((ebp + 4));
        tmp_1 = eax;
        eax = ecx;
        ecx = tmp_1;
        eax = ebx;
        ebx = ecx;
        ecx = edx;
        edx = eax;
        ebp += 8;
    } while (ebp != 0x8050fe4);
    edi = eax;
    esi = 0x8050f3c;
    eax += *((esi + 0xa8));
    *(edi) = eax;
    *((edi + 4)) = ebx;
    ecx += *((esi + 0xac));
    *((edi + 8)) = ecx;
    *((edi + 0xc)) = edx;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rc6crypt/ia32_elf/subject.exe @ 0x8048460 */
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
 
int32_t fcn_08048460 (void) {
    __asm ("pushal");
    esi = *((ebp + 0xc));
    edi = *((ebp + 8));
    esi = 0x8050f3c;
    edx = *((edi + 0xc));
    ecx = *((edi + 8));
    ecx -= *((esi + 0xac));
    ebx = *((edi + 4));
    eax = *(edi);
    eax -= *((esi + 0xa8));
    ebp = esi + 0xa0;
    do {
        edx = ecx;
        ecx = ebx;
        ebx = eax;
        eax = edx;
        esi = edx + edx + 1;
        esi *= edx;
        esi = rotate_left32 (esi, 5);
        edi = ebx + ebx + 1;
        edi *= ebx;
        edi = rotate_left32 (edi, 5);
        tmp_0 = eax;
        eax = ecx;
        ecx = tmp_0;
        ecx = edi;
        eax -= *((ebp + 4));
        eax = rotate_right32 (eax, cl);
        eax ^= esi;
        tmp_1 = eax;
        eax = ecx;
        ecx = tmp_1;
        ecx = esi;
        eax -= *(ebp);
        eax = rotate_right32 (eax, cl);
        eax ^= edi;
        ebp -= 8;
    } while (ebp != 0x8050f3c);
    esi = ebp;
    edi = ecx;
    edx -= *((esi + 4));
    *((edi + 0xc)) = edx;
    *((edi + 8)) = ecx;
    ebx -= *(esi);
    *((edi + 4)) = ebx;
    *(edi) = eax;
    __asm ("popal");
    return eax;
}
