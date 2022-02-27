/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x80492f0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049327 ();
    ebx += 0x2cfc;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2ad0, ebx - 0x2a70);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049327 */
#include <stdint.h>
 
void fcn_08049327 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049350 */
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
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049390 */
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
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x80493d0 */
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
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049400 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049590 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049340 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x80494e9 */
#include <stdint.h>
 
uint32_t sbb_set (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = *((esp + 8));
    __asm ("stc");
    al -= dl;
    edx = 0;
    __asm ("seto dl");
    dh = (al < 0) ? 1 : 0;
    edx <<= 0x10;
    eax &= 0xff;
    eax += edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049598 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2a5b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049410 */
#include <stdint.h>
 
int32_t signed_borrow (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    ecx = *((esp + 8));
    edx = eax;
    al >>= 7;
    edx -= ecx;
    cl >>= 7;
    dl >>= 7;
    eax ^= edx;
    dl = (cl == dl) ? 1 : 0;
    edx = (int32_t) dl;
    eax &= edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x804950c */
#include <stdint.h>
 
uint32_t sbb_clear (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = *((esp + 8));
    __asm ("clc");
    al -= dl;
    edx = 0;
    __asm ("seto dl");
    dh = (al < 0) ? 1 : 0;
    edx <<= 0x10;
    eax &= 0xff;
    eax += edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049530 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2ac3;
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
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049330 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_10h;
    /* [13] -r-x section size 1333 named .text */
    ecx = esp + 4;
    edi = 0;
label_0:
    esi = 0;
    do {
        eax = sub (edi, esi, ecx, ebx, esi, edi, ebp);
        *((ebp - 0x1c)) = eax;
        eax = sbb_clear (edi, esi);
        ebx = eax;
        eax = sbb_set (edi, esi);
        *((ebp - 0x24)) = eax;
        eax = sbb_simu (edi, esi, 1);
        *((ebp - 0x28)) = eax;
        eax = sbb_simu (edi, esi, 0);
        *((ebp - 0x20)) = eax;
        if (*((ebp - 0x1c)) != ebx) {
            printf ("%3d = 0x%2x %3d = 0x%2x ->");
            eax = *((ebp - 0x1c));
            edx = 0x804a00c;
            ecx = 0x804a00f;
            if ((eax & 0x1000000) != 0) {
                ecx = edx;
            }
            edx = 0x804a012;
            eax = 0x804a00f;
            if ((eax & 0x10000) != 0) {
                eax = edx;
            }
            eax = *((ebp - 0x1c));
            printf ("sub=(%3d,%s,%s) ");
            edx = 0x804a00c;
            eax = 0x804a00f;
            ecx = 0x804a00f;
            if ((ebx & 0x1000000) != 0) {
                eax = edx;
            }
            edx = 0x804a012;
            if ((ebx & 0x10000) == 0) {
                edx = ecx;
            }
            eax = (int32_t) bl;
            printf ("sbb_clear=(%3d,%s,%s)\n");
        }
        if (ebx != *((ebp - 0x20))) {
            printf ("%3d = 0x%2x %3d = 0x%2x ->");
            eax = *((ebp - 0x20));
            edx = 0x804a00c;
            ecx = 0x804a00f;
            if ((eax & 0x1000000) != 0) {
                ecx = edx;
            }
            edx = 0x804a012;
            eax = 0x804a00f;
            if ((eax & 0x10000) != 0) {
                eax = edx;
            }
            eax = *((ebp - 0x20));
            printf ("sbb_clear simu=(%3d,%s,%s) ");
            edx = 0x804a00c;
            eax = 0x804a00f;
            ecx = 0x804a00f;
            if ((ebx & 0x1000000) != 0) {
                eax = edx;
            }
            edx = 0x804a012;
            ebx = (int32_t) bl;
            if ((ebx & 0x10000) == 0) {
                edx = ecx;
            }
            printf ("sbb_clear=(%3d,%s,%s)\n");
        }
        ecx = *((ebp - 0x28));
        if (*((ebp - 0x24)) != ecx) {
            ebx = 0x804a00c;
            printf ("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->");
            ecx = *((ebp - 0x1c));
            eax = 0x804a00f;
            edx = ecx;
            edx &= 0x1000000;
            edx = 0x804a00f;
            if (edx != 0) {
                edx = ebx;
            }
            ebx = 0x804a012;
            if ((ecx & 0x10000) != 0) {
                eax = ebx;
            }
            eax = (int32_t) cl;
            printf ("sub=(%3d,%s,%s) ");
            eax = *((ebp - 0x24));
            edx = 0x804a00c;
            ecx = 0x804a00f;
            if ((eax & 0x1000000) != 0) {
                ecx = edx;
            }
            edx = ecx;
            ecx = eax;
            eax = 0x804a00f;
            if ((eax & 0x10000) != 0) {
                eax = ebx;
            }
            eax = (int32_t) cl;
            printf ("sbb_set=(%3d,%s,%s) ");
            ecx = *((ebp - 0x28));
            edx = 0x804a00c;
            eax = 0x804a00f;
            if ((ecx & 0x1000000) != 0) {
                eax = edx;
            }
            edx = 0x804a00f;
            if ((ecx & 0x10000) == 0) {
                ebx = edx;
            }
            eax = (int32_t) cl;
            eax = printf ("sbb_set simu=(%3d,%s,%s)\n");
        }
        esi++;
    } while (esi != 0x100);
    edi++;
    if (edi != 0x100) {
        goto label_0;
    }
    esp = ebp - 0x10;
    eax = 0;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049440 */
#include <stdint.h>
 
int32_t sbb_simu (int32_t arg_18h, uint32_t arg_1ch, int32_t arg_20h) {
    uint32_t var_3h;
    edx = *((esp + 0x18));
    ebp = *((esp + 0x20));
    eax = edx;
    al -= *((esp + 0x1c));
    cl = (dl < *((esp + 0x1c))) ? 1 : 0;
    edi = ecx;
    ecx = ebp;
    bl = (al < cl) ? 1 : 0;
    esi = ebx;
    ebx = eax;
    eax -= ecx;
    bl >>= 7;
    ecx = eax;
    eax = (int32_t) al;
    *((esp + 3)) = bl;
    ebx = ebp;
    cl >>= 7;
    bl >>= 7;
    bl = (bl == cl) ? 1 : 0;
    dl >>= 7;
    ebx = *((esp + 3));
    ecx ^= ebx;
    edx ^= ebx;
    ebx = *((esp + 0x1c));
    ecx &= ebp;
    bl >>= 7;
    bl = (bl == *((esp + 3))) ? 1 : 0;
    edx &= ebx;
    ebx = eax + 0x10000;
    ecx = edi;
    if (cl != dl) {
        eax = ebx;
    }
    ebx = esi;
    cl |= bl;
    edx = eax + 0x1000000;
    if (cl != 0) {
        eax = edx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x80494c7 */
#include <stdint.h>
 
uint32_t sub (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = *((esp + 8));
    al -= dl;
    edx = 0;
    __asm ("seto dl");
    dh = (al < 0) ? 1 : 0;
    edx <<= 0x10;
    eax &= 0xff;
    eax += edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_sbb/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
