/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x80485a0 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_8h;
    /* [09] -r-x section size 1048 named .text */
    ebx = esp;
    eax = esp;
    edx = ecx;
    edx += edx;
    edx += edx;
    eax += edx;
    eax += 4;
    ebp = 0;
    eax = sys_personality (0x0);
    eax = *((esp + 8));
    *(obj.__environ) = eax;
    eax = *(obj.__fpu_control);
    setfpucw ();
    return libc_init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048578 */
#include <stdint.h>
 
void setfpucw (void) {
    setfpucw ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x80484f8 */
#include <stdint.h>
 
void libc_init (void) {
    libc_init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x80484a0 */
#include <stdint.h>
 
void init (void) {
    /* [07] -r-x section size 8 named .init */
    fcn_08048980 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048980 */
#include <stdint.h>
 
int32_t fcn_08048980 (void) {
    int32_t var_4h;
    ebx = section..ctors;
    if (*(section..ctors) == -1) {
        goto label_0;
    }
    do {
        eax = *(ebx);
        void (*eax)() ();
        ebx += 0xfffffffc;
    } while (*(ebx) != -1);
label_0:
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x80489c0 */
#include <stdint.h>
 
void fini (void) {
    /* [10] -r-x section size 8 named .fini */
    fcn_08048620 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048620 */
#include <stdint.h>
 
int32_t fcn_08048620 (void) {
    int32_t var_4h;
    ebx = 0x80499f8;
    if (*(0x80499f8) == 0) {
        goto label_0;
    }
    do {
        eax = *(ebx);
        void (*eax)() ();
        ebx += 4;
    } while (*(ebx) != 0);
label_0:
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048548 */
#include <stdint.h>
 
void sprintf (void) {
    sprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x80484b8 */
#include <stdint.h>
 
void strcpy (void) {
    strcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048508 */
#include <stdint.h>
 
void strcat (void) {
    strcat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048538 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048528 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x80484c8 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x80484d8 */
#include <stdint.h>
 
void perror (void) {
    perror ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048568 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048518 */
#include <stdint.h>
 
void fread (void) {
    fread ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x80484e8 */
#include <stdint.h>
 
void xstat (void) {
    xstat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048588 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048558 */
#include <stdint.h>
 
void atexit (void) {
    atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x80488e0 */
#include <stdint.h>
 
int32_t fcn_080488e0 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 8)) = 0;
    *((ebp - 4)) = 1;
    do {
        eax = *((ebp - 4));
        if (*((ebp + 8)) <= eax) {
        } else {
            eax = *((ebp - 4));
            edx = *((ebp - 4));
            eax = edx*4;
            edx = *((ebp + 0xc));
            eax = *((edx + eax));
            eax = fcn_080487f0 (eax);
            *((ebp - 8)) += eax;
            *((ebp - 4))++;
        }
    } while (1);
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x80487f0 */
#include <stdint.h>
 
uint32_t fcn_080487f0 (char * filename) {
    size_t var_5ch;
    int32_t var_58h;
    uint32_t var_44h;
    file* stream;
    int32_t var_14h;
    void * ptr;
    eax = *((ebp + 8));
    eax = fcn_08048950 (eax, ebp - 0x58);
    if (eax == 0) {
        eax = *((ebp + 8));
        perror (eax);
        eax = 1;
        goto label_0;
    }
    eax = *((ebp + 8));
    eax = fopen (eax, 0x80489e4);
    *((ebp - 0x18)) = eax;
    if (*((ebp - 0x18)) == 0) {
        eax = *((ebp + 8));
        perror (eax);
        eax = 1;
        goto label_0;
    }
    *((ebp - 0x14)) = 0;
    do {
        eax = *((ebp - 0x14));
        if (*((ebp - 0x44)) <= eax) {
        } else {
            eax = *((ebp - 0x18));
            eax = fread (ebp - 0x10, 1, 0x10, eax);
            *((ebp - 0x5c)) = eax;
            if (*((ebp - 0x5c)) == 0) {
            } else {
                eax = *((ebp - 0x5c));
                eax = *((ebp - 0x14));
                fcn_08048660 (ebp - 0x10, eax, eax);
                edx = *((ebp - 0x5c));
                *((ebp - 0x14)) += edx;
            } while (1);
        }
    }
    eax = *((ebp - 0x18));
    eax = fclose (eax);
    eax = 0;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048950 */
#include <stdint.h>
 
uint32_t fcn_08048950 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    ebx = *((ebp + 8));
    esi = *((ebp + 0xc));
    eax = xstat ();
    edx = eax;
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/ia32_elf_stripped/subject.exe @ 0x8048660 */
#include <stdint.h>
 
int32_t fcn_08048660 (void * arg_8h, int32_t arg_ch, size_t arg_10h) {
    int32_t var_5ch;
    size_t dest;
    char * var_54h;
    char * s1;
    eax = *((ebp + 0xc));
    sprintf (ebp - 0x50, "%08lX:", eax);
    if (*((ebp + 0x10)) > 0x10) {
        *((ebp + 0x10)) = 0x10;
    }
    *((ebp - 0x54)) = 0;
    do {
        eax = *((ebp - 0x54));
        if (*((ebp + 0x10)) <= eax) {
        } else {
            eax = *((ebp + 8));
            eax += *((ebp - 0x54));
            edx = *(eax);
            eax = ebp - 0x50;
            ecx = *((ebp - 0x54));
            edx = *((ebp - 0x54));
            edx += edx;
            edx += ecx;
            eax += edx;
            sprintf (eax + 9, " %02lX", edx);
            *((ebp - 0x54))++;
        } while (1);
    }
    do {
        eax = *((ebp - 0x54));
        *((ebp - 0x54))++;
        if (eax > 0xf) {
        } else {
            strcat (ebp - 0x50, 0x80489d6);
        } while (1);
    }
    eax = strlen (ebp - 0x50);
    *((ebp - 0x58)) = eax;
    eax = ebp - 0x50;
    edx = eax;
    edx += *((ebp - 0x58));
    strcpy (edx, 0x80489da);
    *((ebp - 0x54)) = 0;
    do {
        eax = *((ebp - 0x54));
        if (*((ebp + 0x10)) <= eax) {
        } else {
            eax = *((ebp - 0x58));
            eax += *((ebp - 0x54));
            edx = ebp - 0x50;
            ecx = *((ebp + 8));
            ecx += *((ebp - 0x54));
            if (*(ecx) > 0x1f) {
                ecx = *((ebp + 8));
                ecx += *((ebp - 0x54));
                if (*(ecx) <= 0x7e) {
                    ebx = *((ebp + 8));
                    ebx += *((ebp - 0x54));
                    cl = *(ebx);
                }
            } else {
                cl = 0x2e;
            }
            *((eax + edx)) = cl;
            *((ebp - 0x54))++;
        } while (1);
    }
    do {
        if (*((ebp - 0x54)) > 0xf) {
        } else {
            eax = *((ebp - 0x58));
            eax += *((ebp - 0x54));
            edx = ebp - 0x50;
            *((eax + edx)) = 0x20;
            *((ebp - 0x54))++;
        }
    } while (1);
    eax = ebp - 0x50;
    edx = eax;
    edx += *((ebp - 0x58));
    eax = edx;
    eax += *((ebp - 0x54));
    strcpy (eax, 0x80489de);
    eax = ebp - 0x50;
    printf (0x80489e0);
    ebx = *((ebp - 0x5c));
    return eax;
}
