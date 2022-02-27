/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x8048420 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 1012 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, 0x8048770, 0x80487e0, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x80483b0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x80483c0 */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x80483d0 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x80483e0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x80483f0 */
#include <stdint.h>
 
void sscanf (void) {
    sscanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x8048400 */
#include <stdint.h>
 
void strncmp (void) {
    strncmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x8048410 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x80486ee */
#include <stdint.h>
 
int32_t main (int32_t argc) {
    int32_t var_78h;
    int32_t var_bp_4h;
    int32_t var_4h;
    fcn_08048766 ();
    ebx += 0x18f7;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    eax = ebx - 0x178b;
    printf (eax);
    eax = ebx - 0x1772;
    printf (eax);
    eax = ebp - 0x78;
    eax = ebx - 0x1767;
    scanf (eax, eax);
    eax = *((ebp + 0x10));
    eax = ebp - 0x78;
    return fcn_08048616 (eax, eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x8048766 */
#include <stdint.h>
 
void fcn_08048766 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x8048616 */
#include <stdint.h>
 
int32_t fcn_08048616 (char * s, int32_t arg_ch) {
    char * var_11h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    char * format;
    int32_t var_sp_8h;
    fcn_08048766 ();
    ebx += 0x19d2;
    *((ebp - 0xc)) = 0;
    *((ebp - 0x10)) = 0;
    do {
        eax = *((ebp + 8));
        eax = strlen (eax);
        if (*((ebp - 0x10)) >= eax) {
            goto label_0;
        }
        eax = *((ebp - 0x10));
        eax += *((ebp + 8));
        eax = *(eax);
        *((ebp - 0x11)) = al;
        eax = ebp - 8;
        eax = ebx - 0x17a2;
        eax = ebp - 0x11;
        sscanf (eax, eax, eax);
        edx = *((ebp - 8));
        eax = ebp - 0xc;
        *(eax) += edx;
        if (*((ebp - 0xc)) == 0x10) {
            eax = *((ebp + 0xc));
            eax = *((ebp + 8));
            fcn_08048589 (eax, eax);
        }
        eax = ebp - 0x10;
        *(eax)++;
    } while (1);
label_0:
    return fcn_0804855d ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x8048444 */
#include <stdint.h>
 
void fcn_08048444 (void) {
    void (*0x804844d)() ();
    ebx += 0x1ba7;
    eax = *((ebx - 8));
    if (eax != 0) {
        void (*eax)() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x80484a0 */
#include <stdint.h>
 
int32_t fcn_080484a0 (void) {
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x80487f0 */
#include <stdint.h>
 
void fcn_080487f0 (void) {
    ebx = segment.GNU_RELRO;
    eax = *(segment.GNU_RELRO);
    while (eax != -1) {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x80484d4 */
#include <stdint.h>
 
int32_t fcn_080484d4 (char * s1) {
    int32_t var_ch;
    int32_t var_8h;
    char ** s2;
    size_t * n;
    fcn_08048766 ();
    ebx += 0x1b14;
    *((ebp - 8)) = 0;
    do {
        eax = *((ebp - 8));
        edx = eax*4;
        eax = *((ebp + 0xc));
        if (*((edx + eax)) == 0) {
            goto label_0;
        }
        eax = *((ebp - 8));
        edx = eax*4;
        ecx = *((ebp + 0xc));
        eax = ebp - 8;
        *(eax)++;
        eax = ebx - 0x17bc;
        eax = *((edx + ecx));
        eax = strncmp (eax, eax, 3);
    } while (eax != 0);
    eax = *((ebx - 4));
    *(eax) = 1;
    *((ebp - 0xc)) = 1;
    goto label_1;
label_0:
    exit (0xffffffff);
label_1:
    eax = *((ebp - 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x8048589 */
#include <stdint.h>
 
uint32_t fcn_08048589 (char * s, char * arg_ch) {
    int32_t var_ch;
    int32_t var_8h;
    char * format;
    int32_t var_sp_8h;
    fcn_08048766 ();
    ebx += 0x1a5f;
    eax = ebp - 8;
    eax = ebx - 0x17a2;
    eax = *((ebp + 8));
    sscanf (eax, eax, eax);
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp - 8));
    eax = fcn_080484d4 (eax);
    if (eax == 0) {
        goto label_0;
    }
    *((ebp - 0xc)) = 0;
    do {
        if (*((ebp - 0xc)) > 9) {
            goto label_0;
        }
        eax = *((ebp - 8));
        eax &= 1;
        if (eax == 0) {
            eax = *((ebx - 4));
            if (*(eax) == 1) {
                eax = ebx - 0x179f;
                printf (eax);
            }
            exit (0);
        }
        eax = ebp - 0xc;
        *(eax)++;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x804855d */
#include <stdint.h>
 
uint32_t fcn_0804855d (void) {
    fcn_08048766 ();
    ebx += 0x1a8b;
    eax = ebx - 0x17b7;
    printf (eax);
    return exit (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x8048388 */
#include <stdint.h>
 
void fcn_08048388 (void) {
    /* [11] -r-x section size 23 named .init */
    fcn_08048444 ();
    fcn_080484a0 ();
    fcn_080487f0 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x804881d */
#include <stdint.h>
 
void fcn_0804881d (void) {
    ebx += 0x17d7;
    fcn_08048470 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_elf/subject.exe @ 0x8048470 */
#include <stdint.h>
 
int32_t fcn_08048470 (void) {
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
