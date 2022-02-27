/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x80492f0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049327 ();
    ebx += 0x2cfc;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2ab0, ebx - 0x2a50);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049327 */
#include <stdint.h>
 
void fcn_08049327 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049350 */
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
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049390 */
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
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x80493d0 */
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
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049400 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x80495b0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049340 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x80494dc */
#include <stdint.h>
 
uint32_t add (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = *((esp + 8));
    al += dl;
    edx = 0;
    __asm ("seto dl");
    dh = (al < 0) ? 1 : 0;
    edx <<= 0x10;
    eax &= 0xff;
    eax += edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049410 */
#include <stdint.h>
 
int32_t carry (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = *((esp + 8));
    edx += eax;
    al = (al > dl) ? 1 : 0;
    eax = (int32_t) al;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049460 */
#include <stdint.h>
 
uint32_t adc_simu (int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    esi = 1;
    edi = *((esp + 0x14));
    edx = *((esp + 0x14));
    dl += *((esp + 0x18));
    al = (dl < 0) ? 1 : 0;
    ecx = edx;
    cl += *((esp + 0x1c));
    bl = (cl < 0) ? 1 : 0;
    ebx = *((esp + 0x1c));
    ebp &= 1;
    eax = edi;
    if (al == 0) {
        esi = ebp;
    }
    al >>= 7;
    edi = eax;
    dl >>= 7;
    eax = (int32_t) cl;
    bl >>= 7;
    cl >>= 7;
    ecx ^= edx;
    bl = (bl == dl) ? 1 : 0;
    ecx &= ebx;
    ebx = *((esp + 0x18));
    ecx = edi;
    bl >>= 7;
    ecx = ebp;
    bl = (bl == cl) ? 1 : 0;
    edx ^= edi;
    edx &= ebx;
    ebx = eax + 0x10000;
    if (cl != dl) {
        eax = ebx;
    }
    esi = ebx;
    edi = ebx;
    edx = eax + 0x1000000;
    if (esi != 0) {
        eax = edx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x80495b8 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2a3b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x80494fe */
#include <stdint.h>
 
uint32_t adc_set (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = *((esp + 8));
    __asm ("stc");
    al += dl;
    edx = 0;
    __asm ("seto dl");
    dh = (al < 0) ? 1 : 0;
    edx <<= 0x10;
    eax &= 0xff;
    eax += edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049430 */
#include <stdint.h>
 
int32_t signed_carry (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = *((esp + 8));
    ecx = eax;
    eax += edx;
    dl >>= 7;
    cl >>= 7;
    al >>= 7;
    eax ^= ecx;
    dl = (dl == cl) ? 1 : 0;
    edx = (int32_t) dl;
    eax &= edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049550 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2aa3;
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
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049330 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_10h;
    /* [13] -r-x section size 1365 named .text */
    ecx = esp + 4;
    edi = 0;
label_0:
    esi = 0;
    do {
        eax = add (edi, esi, ecx, ebx, esi, edi, ebp);
        *((ebp - 0x1c)) = eax;
        eax = adc_clear (edi, esi);
        ebx = eax;
        eax = adc_set (edi, esi);
        *((ebp - 0x24)) = eax;
        eax = adc_simu (edi, esi, 1);
        *((ebp - 0x28)) = eax;
        eax = adc_simu (edi, esi, 0);
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
            printf ("add=(%3d,%s,%s) ");
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
            printf ("adc_clear=(%3d,%s,%s)\n");
        }
        if (ebx != *((ebp - 0x20))) {
            printf ("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->");
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
            printf ("adc_clear simu=(%3d,%s,%s) ");
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
            printf ("adc_clear=(%3d,%s,%s)\n");
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
            printf ("add=(%3d,%s,%s) ");
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
            printf ("adc_set=(%3d,%s,%s) ");
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
            eax = printf ("adc_set simu=(%3d,%s,%s)\n");
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
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049521 */
#include <stdint.h>
 
uint32_t adc_clear (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = *((esp + 8));
    __asm ("clc");
    al += dl;
    edx = 0;
    __asm ("seto dl");
    dh = (al < 0) ? 1 : 0;
    edx <<= 0x10;
    eax &= 0xff;
    eax += edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049000 */
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
/* SUBJECTS/from_holdec/i386_adc/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
