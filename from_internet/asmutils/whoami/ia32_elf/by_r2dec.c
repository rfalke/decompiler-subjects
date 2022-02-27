/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/whoami/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_1ch;
    uint32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    *(esp) = 0x8048161;
    eax = 0x18;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    *((esp + 4)) = eax;
    ecx = 0;
    eax = 5;
    eax = sys_open (0x8048155, ecx, edx);
    if (eax < 0) {
        goto label_0;
    }
    *((esp + 8)) = eax;
    edx = 2;
    ecx = 0;
    eax = 0x13;
    eax = sys_lseek (0xe, ecx, 0x2);
    *((esp + 0xc)) = eax;
    edx = 0;
    ecx = 0;
    eax = 0x13;
    eax = sys_lseek (0xe, ecx, edx);
    eax = *(esp);
    eax += *((esp + 0xc));
    eax++;
    eax = 0x2d;
    eax = sys_brk (0xea);
    eax = *(esp);
    *(eax) = 0xa;
    eax = *(esp);
    eax++;
    eax = 3;
    eax = sys_read (0xe, 0xea, 0xec);
    eax = 6;
    eax = sys_close (0xe);
    edi = *(esp);
    ecx = *((esp + 0xc));
    do {
        al = 0x3a;
        __asm ("repne scasb al, byte es:[edi]");
        __asm ("repne scasb al, byte es:[edi]");
        esi = edi;
        __asm ("repne scasb al, byte es:[edi]");
        edi--;
        *(edi) = 0;
        eax = void (*0x8048120)() ();
        if (eax == *((esp + 4))) {
            goto label_1;
        }
        al = 0xa;
        __asm ("repne scasb al, byte es:[edi]");
    } while (1);
label_1:
    __asm ("std");
    al = 0xa;
    edi = esi;
    __asm ("repne scasb al, byte es:[edi]");
    edi++;
    edi++;
    al = 0x3a;
    __asm ("repne scasb al, byte es:[edi]");
    edi--;
    *(edi) = 0xa;
    esi = edi;
    eax = fcn_0804813c ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0xea);
label_0:
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    __asm ("pushal");
    eax = 0;
    ebx = 0;
    do {
        bl = *(esi);
        if (bl == 0) {
            goto label_2;
        }
        bl &= 0xcf;
        eax *= 0xa;
        eax += ebx;
        esi++;
    } while (1);
label_2:
    *((esp + 0x1c)) = eax;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/whoami/ia32_elf/subject.exe @ 0x804813c */
#include <stdint.h>
 
int32_t fcn_0804813c (void) {
    int32_t var_1ch;
    __asm ("pushal");
    ecx = 0;
    cl = 0xc8;
    edi = esi;
    eax = 0;
    __asm ("repne scasb al, byte es:[edi]");
    eax = 0;
    al = 0xc8;
    eax -= ecx;
    eax--;
    *((esp + 0x1c)) = eax;
    __asm ("popal");
    return eax;
}
