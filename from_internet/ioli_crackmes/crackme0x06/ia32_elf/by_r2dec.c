/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x8048400 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 788 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x8048388 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x8048450 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.1) == 0) {
        goto label_0;
    }
    goto label_1;
    do {
        eax += 4;
        *(obj.p.0) = eax;
        void (*edx)() ();
label_0:
        eax = *(obj.p.0);
        edx = *(eax);
    } while (edx != 0);
    *(obj.completed.1) = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x8048480 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        _comment (obj.__JCR_LIST__);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x80486f0 */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    ebx = .ctors;
    eax = .ctors;
    while (eax != -1) {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x80486e0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x804851a */
#include <stdint.h>
 
uint32_t parell (char * s, char * arg_ch) {
    int32_t var_bp_8h;
    int32_t var_4h;
    char * format;
    int32_t var_8h;
    eax = ebp - 4;
    eax = *((ebp + 8));
    sscanf (eax, 0x804873d, eax);
    eax = *((ebp + 0xc));
    eax = *((ebp - 4));
    eax = dummy (eax, eax);
    if (eax == 0) {
        goto label_0;
    }
    *((ebp - 8)) = 0;
    do {
        if (*((ebp - 8)) > 9) {
            goto label_0;
        }
        eax = *((ebp - 4));
        eax &= 1;
        if (eax == 0) {
            printf ("Password OK!\n");
            exit (0);
        }
        eax = ebp - 8;
        *(eax)++;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x80483c8 */
#include <stdint.h>
 
void sscanf (void) {
    sscanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x80484b4 */
#include <stdint.h>
 
int32_t dummy (char ** s1) {
    int32_t var_8h;
    int32_t var_4h;
    char * s2;
    size_t * n;
    *((ebp - 4)) = 0;
    do {
        eax = *((ebp - 4));
        edx = eax*4;
        eax = *((ebp + 0xc));
        if (*((edx + eax)) == 0) {
            goto label_0;
        }
        eax = *((ebp - 4));
        ecx = eax*4;
        edx = *((ebp + 0xc));
        eax = ebp - 4;
        *(eax)++;
        eax = *((ecx + edx));
        eax = strncmp (eax, "LOLO", 3);
    } while (eax != 0);
    *((ebp - 8)) = 1;
    goto label_1;
label_0:
    *((ebp - 8)) = 0;
label_1:
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x80483b8 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x80483e8 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x8048714 */
#include <stdint.h>
 
uint32_t fini (void) {
    /* [14] -r-x section size 26 named .fini */
    eax = void (*0x804871d)(uint32_t) (ebx);
    ebx += 0x18d7;
    _do_global_dtors_aux (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x8048670 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_10h;
    int32_t var_4h;
    int32_t var_8h;
    esi = 0;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1977;
    _init ();
    eax = ebx - 0xe8;
    edx = ebx - 0xe8;
    *((ebp - 0x10)) = eax;
    eax -= edx;
    eax >>= 2;
    if (esi >= eax) {
        goto label_0;
    }
    edi = edx;
    do {
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        uint32_t (*edx + esi*4)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        eax = *((ebp - 0x10));
        esi++;
        edx = edi;
        eax -= edi;
        eax >>= 2;
    } while (esi < eax);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x8048588 */
#include <stdint.h>
 
int32_t check (char * s, int32_t arg_ch) {
    char * var_dh;
    uint32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    char * format;
    int32_t var_sp_8h;
    *((ebp - 8)) = 0;
    *((ebp - 0xc)) = 0;
    do {
        eax = *((ebp + 8));
        eax = strlen (eax);
        if (*((ebp - 0xc)) >= eax) {
            goto label_0;
        }
        eax = *((ebp - 0xc));
        eax += *((ebp + 8));
        eax = *(eax);
        *((ebp - 0xd)) = al;
        eax = ebp - 4;
        eax = ebp - 0xd;
        sscanf (eax, 0x804873d, eax);
        edx = *((ebp - 4));
        eax = ebp - 8;
        *(eax) += edx;
        if (*((ebp - 8)) == 0x10) {
            eax = *((ebp + 0xc));
            eax = *((ebp + 8));
            parell (eax, eax);
        }
        eax = ebp - 0xc;
        *(eax)++;
    } while (1);
label_0:
    printf ("Password Incorrect!\n");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x80486e5 */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x8048607 */
#include <stdint.h>
 
int32_t main (int32_t argc) {
    int32_t var_78h;
    int32_t var_4h;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    printf ("IOLI Crackme Level 0x06\n");
    printf ("Password: ");
    eax = ebp - 0x78;
    scanf (0x8048787, eax);
    eax = *((ebp + 0x10));
    eax = ebp - 0x78;
    check (eax, eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x8048398 */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x8048360 */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 23 named .init */
    fcn_08048424 ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x8048424 */
#include <stdint.h>
 
void fcn_08048424 (void) {
    void (*0x804842d)() ();
    ebx += 0x1bc7;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x80483a8 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/ia32_elf/subject.exe @ 0x80483d8 */
#include <stdint.h>
 
void strncmp (void) {
    strncmp ();
}
