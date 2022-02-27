/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x8048400 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 900 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, 0x80486e0, 0x8048750, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x8048388 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x8048398 */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x80483a8 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x80483b8 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x80483c8 */
#include <stdint.h>
 
void sscanf (void) {
    sscanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x80483d8 */
#include <stdint.h>
 
void strncmp (void) {
    strncmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x80483e8 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x804867d */
#include <stdint.h>
 
int32_t main (int32_t argc) {
    int32_t var_78h;
    int32_t var_4h;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    printf ("IOLI Crackme Level 0x07\n");
    printf ("Password: ");
    eax = ebp - 0x78;
    scanf (0x80487fd, eax);
    eax = *((ebp + 0x10));
    eax = ebp - 0x78;
    return fcn_080485b9 (eax, eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x80485b9 */
#include <stdint.h>
 
int32_t fcn_080485b9 (char * s, int32_t arg_ch) {
    char * var_dh;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_bp_4h;
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
        sscanf (eax, 0x80487c2, eax);
        edx = *((ebp - 4));
        eax = ebp - 8;
        *(eax) += edx;
        if (*((ebp - 8)) == 0x10) {
            eax = *((ebp + 0xc));
            eax = *((ebp + 8));
            fcn_08048542 (eax, eax);
        }
        eax = ebp - 0xc;
        *(eax)++;
    } while (1);
label_0:
    return fcn_08048524 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x8048424 */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x8048480 */
#include <stdint.h>
 
int32_t fcn_08048480 (void) {
    eax = *(section..jcr);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        gmon_start_ (section..jcr);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x8048760 */
#include <stdint.h>
 
void fcn_08048760 (void) {
    ebx = segment.GNU_RELRO;
    eax = *(segment.GNU_RELRO);
    while (eax != -1) {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x80484b4 */
#include <stdint.h>
 
int32_t fcn_080484b4 (char * s1) {
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
    *(0x804a02c) = 1;
    *((ebp - 8)) = 1;
    goto label_1;
label_0:
    *((ebp - 8)) = 0;
label_1:
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x8048542 */
#include <stdint.h>
 
uint32_t fcn_08048542 (char * s, char * arg_ch) {
    int32_t var_bp_8h;
    int32_t var_4h;
    char * format;
    int32_t var_8h;
    eax = ebp - 4;
    eax = *((ebp + 8));
    sscanf (eax, 0x80487c2, eax);
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp - 4));
    eax = fcn_080484b4 (eax);
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
            if (*(0x804a02c) == 1) {
                printf ("Password OK!\n");
            }
            exit (0);
        }
        eax = ebp - 8;
        *(eax)++;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x8048524 */
#include <stdint.h>
 
void fcn_08048524 (void) {
    printf ("Password Incorrect!\n");
    return exit (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x8048755 */
#include <stdint.h>
 
void fcn_08048755 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x8048360 */
#include <stdint.h>
 
void fcn_08048360 (void) {
    /* [11] -r-x section size 23 named .init */
    fcn_08048424 ();
    fcn_08048480 ();
    fcn_08048760 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x804878d */
#include <stdint.h>
 
void fcn_0804878d (void) {
    ebx += 0x1867;
    fcn_08048450 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x07/ia32_elf/subject.exe @ 0x8048450 */
#include <stdint.h>
 
int32_t fcn_08048450 (void) {
    if (*(section..bss) == 0) {
        goto label_0;
    }
    goto label_1;
    do {
        eax += 4;
        *(0x804a024) = eax;
        void (*edx)() ();
label_0:
        eax = *(0x804a024);
        edx = *(eax);
    } while (edx != 0);
    *(section..bss) = 1;
label_1:
    return eax;
}
