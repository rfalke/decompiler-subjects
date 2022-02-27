/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049250 */
#include <stdint.h>
 
void entry0 (int32_t arg_4h) {
    return start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80493e4 */
#include <stdint.h>
 
void start_main (int32_t arg_4h) {
    ecx = esp + eax*4 + 4;
    eax = _get_GOT ();
    ebx += 0x2c11;
    ebx = *((ebx - 0xc));
    *(ebx) = ecx;
    edx = esp;
    eax = void (*ebp)(uint32_t, uint32_t, uint32_t) (eax, edx, ecx);
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804929f */
#include <stdint.h>
 
void loc_get_GOT (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049382 */
#include <stdint.h>
 
uint32_t exit (void) {
    eax = loc_system_call ();
    *(ecx) += eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80492a3 */
#include <stdint.h>
 
void loc_system_call (int32_t arg_20h, int32_t arg_28h, int32_t arg_2ch, int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch) {
    int32_t var_ch;
    int32_t var_1ch;
    __asm ("pushal");
    eax = *((esp + 0xc));
    eax = *(eax);
    eax = *(eax);
    if (al != 0) {
        if (al >= 0) {
            _get_GOT ();
            ebx += 0x2d48;
            ebx = *((ebx - 4));
            if (*(ebx) != 0) {
                goto label_0;
            }
        }
        ebx = *((esp + 0x28));
        ecx = *((esp + 0x2c));
        edx = *((esp + 0x30));
        esi = *((esp + 0x34));
        edi = *((esp + 0x38));
        ebp = *((esp + 0x3c));
        goto label_1;
label_0:
        ebx = *((esp + 0x1c));
        tmp_0 = edx;
        edx = ecx;
        ecx = tmp_0;
        esi = *((esp + 0x28));
        edi = *((esp + 0x2c));
        ebp = *((esp + 0x30));
    }
label_1:
    eax = *((esp + 0xc));
    eax = *(eax);
    eax = *((eax + 1));
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax >= 0xfffff001) {
        eax = -eax;
        eax = _get_GOT ();
        ebx += 0x2cf1;
        ebx = *((ebx - 8));
        *(ebx) = eax;
        eax |= 0xffffffff;
    }
    *((esp + 0x20)) = eax;
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804939e */
#include <stdint.h>
 
void ioctl (void) {
    loc_system_call ();
    esi += *(esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80493dd */
#include <stdint.h>
 
void getgid (int32_t arg_4h) {
    loc_system_call ();
    *(edi) += ch;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049600 */
#include <stdint.h>
 
uint32_t printf (const char * format) {
    char * s;
    int32_t var_101ch;
    __asm ("pushal");
    ebp = *((esp + 0x1020));
    esi = esp + 0x20;
    eax = sprintf (esi);
    *(esp) = ebp;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0xea);
    *((esp + 0x101c)) = eax;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804958b */
#include <stdint.h>
 
int32_t sprintf (const char * format,  ..., int32_t arg_2ch) {
    int32_t var_1ch;
    __asm ("pushal");
    edx = esp + 0x2c;
    esi = *((esp + 0x28));
    edi = *((esp + 0x24));
    do {
label_1:
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_2;
        }
        if (al == 0x25) {
            goto label_3;
        }
label_0:
        *(es:edi) = al;
        es:edi++;
    } while (1);
label_3:
    ebx = *(edx);
    al = *(esi);
    esi++;
    ecx = 0xa;
    if (al == 0x64) {
        goto label_4;
    }
    ecx = 0x10;
    if (al == 0x78) {
        goto label_4;
    }
    ecx = 8;
    if (al == 0x6f) {
        goto label_4;
    }
    ecx = 2;
    if (al == 0x62) {
        goto label_4;
    }
    if (al == 0x63) {
        goto label_0;
    }
    if (al != 0x73) {
        goto label_1;
    }
    if (ebx == 0) {
        goto label_5;
    }
    do {
        al = *(ebx);
        if (al == 0) {
            goto label_5;
        }
        *(es:edi) = al;
        es:edi++;
        ebx++;
    } while (1);
label_4:
    __asm ("pushal");
    eax = ebx;
    al = loc_itoa_printB ();
    *(edi) = 0;
    __asm ("popal");
    do {
        edi++;
    } while (edi >= 0);
    edi--;
label_5:
    edx += 4;
    goto label_1;
label_2:
    al = 0;
    *(es:edi) = al;
    es:edi++;
    edi -= edx;
    edi--;
    *((esp + 0x1c)) = edi;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80494b6 */
#include <stdint.h>
 
uint32_t getenv (int32_t arg_24h) {
    int32_t var_1ch;
    __asm ("pushal");
    edi = eax;
    _get_GOT ();
    ebx += 0x2b41;
    ebx = *((ebx - 4));
    if (*(ebx) == 0) {
        edi = *((esp + 0x24));
    }
    eax = _get_GOT ();
    ebx += 0x2b26;
    ebx = *((ebx - 0xc));
    ebx = *(ebx);
    edx = edi;
    eax = 0;
    ecx |= 0xffffffff;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    ecx--;
    eax = ecx;
    do {
        esi = edx;
        edi = *(ebx);
        if (edi == 0) {
            goto label_0;
        }
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        if (edi == 0) {
            goto label_1;
        }
        ebx += 4;
    } while (1);
label_1:
    edi++;
label_0:
    *((esp + 0x1c)) = edi;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049390 */
#include <stdint.h>
 
void execve (void) {
    loc_system_call ();
    ecx += *(ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049453 */
#include <stdint.h>
 
void memcpy (const void * s2, size_t n, size_t arg_2ch) {
    __asm ("pushal");
    edi = eax;
    esi = edx;
    _get_GOT ();
    ebx += 0x2ba2;
    ebx = *((ebx - 4));
    if (*(ebx) == 0) {
        edi = *((esp + 0x24));
        esi = *((esp + 0x28));
        ecx = *((esp + 0x2c));
    }
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80493d6 */
#include <stdint.h>
 
uint32_t getuid (int32_t arg_4h) {
    eax = loc_system_call ();
    *(eax) += bl;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804953c */
#include <stdint.h>
 
int32_t itoa (int32_t arg_24h, int32_t arg_28h, int32_t arg_2ch) {
    __asm ("pushal");
    edi = edx;
    _get_GOT ();
    ebx += 0x2abb;
    ebx = *((ebx - 4));
    if (*(ebx) == 0) {
        eax = *((esp + 0x24));
        edi = *((esp + 0x28));
        ecx = *((esp + 0x2c));
    }
    loc_itoa_printB ();
    *(edi) = 0;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804956d */
#include <stdint.h>
 
uint32_t loc_itoa_printB (void) {
    do {
        edx -= edx;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        if (eax == 0) {
            goto label_0;
        }
        loc_itoa_printB ();
    } while (1);
label_0:
    dl += 0x30;
    if (dl > 0x39) {
        dl += 0x27;
    }
    *(edi) = dl;
    edi++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804937b */
#include <stdint.h>
 
uint32_t rmdir (void) {
    eax = loc_system_call ();
    *(eax) += ebp;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049343 */
#include <stdint.h>
 
void lseek (void) {
    loc_system_call ();
    edx += *(ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049351 */
#include <stdint.h>
 
void chown (void) {
    return loc_system_call ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804934a */
#include <stdint.h>
 
void chmod (void) {
    loc_system_call ();
    cl += *(edi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80493a5 */
#include <stdint.h>
 
void alarm (void) {
    loc_system_call ();
    *(ebx) += ebx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804968a */
#include <stdint.h>
 
uint32_t strtol (char * * endptr, char * * base, char * * arg_1ch) {
    edi = eax;
    esi = edx;
    eax = _get_GOT ();
    ebx += 0x2968;
    ebx = *((ebx - 4));
    if (*(ebx) == 0) {
        edi = *((esp + 0x14));
        esi = *((esp + 0x18));
        ecx = *((esp + 0x1c));
    }
    if (ecx == 0) {
        ecx = 0xa;
    }
    eax = 0;
    ebx = 0;
    do {
        if (*(edi) != 0x20) {
            goto label_0;
        }
        edi++;
    } while (1);
label_0:
    if (*(edi) != 0x7830) {
        goto label_1;
    }
    ecx = 0x10;
    edi += 2;
    do {
label_1:
        bl = *(edi);
        bl -= 0x30;
        if (bl < 0) {
            goto label_2;
        }
        if (bl > 9) {
            bl -= 7;
            if (bl <= 0x23) {
                goto label_3;
            }
            bl -= 0x20;
        }
label_3:
        edx:eax = eax * ecx;
        eax += ebx;
        edi++;
    } while (edi != esi);
label_2:
    ecx = 0x10;
    ebx = 0x10;
    esi = 0x10;
    edi = 0x10;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049358 */
#include <stdint.h>
 
void pipe (void) {
    loc_system_call ();
    *(edx) += ebp;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049397 */
#include <stdint.h>
 
void uname (void) {
    return loc_system_call ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80493ac */
#include <stdint.h>
 
void nanosleep (void) {
    return loc_system_call ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80493c1 */
#include <stdint.h>
 
uint8_t wait4 (void) {
    al = loc_system_call ();
    al += 0x72;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804933c */
#include <stdint.h>
 
uint32_t write (void) {
    eax = loc_system_call ();
    eax += *((eax + ebp*8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80493c8 */
#include <stdint.h>
 
void fstat (void) {
    loc_system_call ();
    __asm ("insb byte es:[edi], dx");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80493b3 */
#include <stdint.h>
 
void kill (void) {
    return loc_system_call ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80493cf */
#include <stdint.h>
 
void lstat (int32_t arg_4h) {
    loc_system_call ();
    ch += *((ebx - 0x18));
    return loc_system_call ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x80493ba */
#include <stdint.h>
 
uint32_t signal (void) {
    eax = loc_system_call ();
    dh += *(eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049335 */
#include <stdint.h>
 
uint32_t read (void) {
    eax = loc_system_call ();
    eax += *(ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804936d */
#include <stdint.h>
 
void unlink (void) {
    loc_system_call ();
    *(edx) += ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049481 */
#include <stdint.h>
 
uint32_t memcmp (const void * s2, size_t n, size_t arg_18h) {
    eax = _get_GOT ();
    ebx += 0x2b76;
    ebx = *((ebx - 4));
    if (*(ebx) == 0) {
        esi = *((esp + 0x10));
        edi = *((esp + 0x14));
        ecx = *((esp + 0x18));
    }
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    if (*(ebx) != 0) {
        eax -= eax;
        eax |= 1;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049389 */
#include <stdint.h>
 
uint8_t fork (void) {
    al = loc_system_call ();
    *(edx) += al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049366 */
#include <stdint.h>
 
void symlink (void) {
    loc_system_call ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049420 */
#include <stdint.h>
 
int32_t memset (int32_t c, size_t n, size_t arg_18h) {
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    _get_GOT ();
    ebx += 0x2bd6;
    ebx = *((ebx - 4));
    if (*(ebx) == 0) {
        edx = *((esp + 0x10));
        eax = *((esp + 0x14));
        ecx = *((esp + 0x18));
    }
    edi = edx;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    eax = edi;
    ecx = edi;
    edx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t dbg_main (char ** argv) {
    char * ptmp;
    char[10] tmp;
    char[10] inp;
    int32_t i;
    int32_t len;
    int32_t var_8h;
    int32_t argc;
    char ** envp;
    /* int main(int argc,char ** argv,char ** envp); */
    ecx = esp + 4;
    ebx = ecx;
    eax = 0;
    fastcall (ecx, ebx, ebp);
    printf ("\n\tprintf() test\nhex: %x, octal: %o, decimal: %d\n");
    printf ("\n\tstrtol() test\nInput some decimal number: ");
    eax = read (0, ebp - 0x1a, 0xa);
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    memcpy (ebp - 0x24, ebp - 0x1a, eax);
    eax = *((ebp - 0xc));
    edx = eax - 1;
    eax = ebp - 0x24;
    eax += edx;
    *((ebp - 0x28)) = eax;
    eax = strtol (ebp - 0x24, ebp - 0x28, 0xa);
    printf ("You have entered %d\n");
    printf ("\n\tmemset() test\n");
    memset (ebp - 0x24, 0, 0xa);
    eax = ebp - 0x24;
    eax += 5;
    *((ebp - 0x28)) = eax;
    *((ebp - 0xc)) = 9;
    while (*((ebp - 0xc)) > 0) {
        eax = *((ebp - 0xc));
        eax += 0x30;
        memset (ebp - 0x24, eax, 5);
        eax = strtol (ebp - 0x24, ebp - 0x28, 0xa);
        printf (0x804a086);
        *((ebp - 0xc))--;
    }
    printf ("\n\n\tvariable test\n");
    write (0xffffffffffffffff, 0, 0);
    eax = *(loc.errno);
    printf ("errno: %d\n");
    printf ("\n\tenvironment test\nPress ENTER to print envrionment\n");
    read (0, ebp - 0x1a, 1);
    *((ebp - 0xc)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0xc));
        edx = eax*4;
        eax = *((ebx + 8));
        eax += edx;
        eax = *(eax);
        printf (0x804a0dd);
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
        edx = eax*4;
        eax = *((ebx + 8));
        eax += edx;
        eax = *(eax);
    }
    eax = getenv ("HOME");
    printf ("\n\tgetenv(\"HOME\") test\n%s\n");
    if (*(ebx) <= 1) {
        goto label_0;
    }
    printf ("\n\targuments test\n");
    *((ebp - 0x10)) = 0;
    while (eax < *(ebx)) {
        eax = *((ebp - 0x10));
        edx = eax*4;
        eax = *((ebx + 4));
        eax += edx;
        eax = *(eax);
        printf (0x804a0dd);
        *((ebp - 0x10))++;
        eax = *((ebp - 0x10));
    }
label_0:
    printf ("\n\tall tests done\n");
    eax = 0;
    esp = ebp - 8;
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804935f */
#include <stdint.h>
 
void link (void) {
    loc_system_call ();
    cl += *(ecx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804940a */
#include <stdint.h>
 
uint32_t fastcall (void) {
    eax = _get_GOT ();
    ebx += 0x2bf0;
    ebx = *((ebx - 4));
    *(ebx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049511 */
#include <stdint.h>
 
int32_t strlen (int32_t arg_8h) {
    _get_GOT ();
    ebx += 0x2ae8;
    ebx = *((ebx - 4));
    if (*(ebx) == 0) {
        eax = *((esp + 8));
    }
    edx = *((esp + 8));
    eax = 0;
    do {
        eax++;
    } while (eax >= 0);
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049327 */
#include <stdint.h>
 
void open (void) {
    loc_system_call ();
    __asm ("std");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x8049374 */
#include <stdint.h>
 
void mkdir (void) {
    loc_system_call ();
    *(edi) += esp;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/test2/ia32_elf_static/subject.exe @ 0x804932e */
#include <stdint.h>
 
uint32_t close (void) {
    eax = loc_system_call ();
    *(esi) += eax;
}
