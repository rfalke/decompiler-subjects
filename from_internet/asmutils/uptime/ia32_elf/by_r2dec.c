/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/uptime/ia32_elf/subject.exe @ 0x8048092 */
#include <stdint.h>
 
void entry0 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    ebx = esp;
    ecx = 0;
    eax = 0x4e;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax = *(ebx);
    edi = 0x804821b;
    *((edi - 1)) = 0x20;
    ebp = 0;
    edx = 0;
    ebx = 0x1e13380;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    eax = edx;
    edx = 0;
    ebx = 0x15180;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    eax = edx;
    edx = 0;
    ebx = 0xe10;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    if (eax > 0xc) {
        eax -= 0xc;
        ebp++;
    }
    fcn_0804804c ();
    al = 0x3a;
    *(es:edi) = al;
    es:edi++;
    edx = 0;
    ebx = 0x3c;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    fcn_0804805f ();
    ebp |= ebp;
    ax = 0x6d61;
    if (ebp != 0) {
        ax = 0x6d70;
    }
    *(es:edi) = ax;
    es:edi += 2;
    eax = 0x70752020;
    memset (edi, eax, ecx);
    ax = 0x2020;
    *(es:edi) = ax;
    es:edi += 2;
    eax = 0x74;
    eax = sys_sysinfo (0xe);
    eax = *(ebx);
    edx = 0;
    ebx = 0x1e13380;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    eax = edx;
    edx = 0;
    ebx = 0x15180;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    eax |= eax;
    if (eax != 0) {
        fcn_0804804c ();
        eax = 0x79616420;
        memset (edi, eax, ecx);
        eax = 0x20202c73;
        memset (edi, eax, ecx);
    }
    edx = 0;
    ebx = 0xe10;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    fcn_0804804c ();
    al = 0x3a;
    *(es:edi) = al;
    es:edi++;
    edx = 0;
    ebx = 0x3c;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    fcn_0804805f ();
    ax = 0x202c;
    *(es:edi) = ax;
    es:edi += 2;
    ebp = 0;
    ecx = 0;
    eax = 5;
    eax = sys_open (0x804820c, ecx, edx);
    eax |= eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x804826a) = eax;
    do {
        eax = 3;
        eax = sys_read (0x804826a, 0xe, 0x180);
        if (*(esp) == 7) {
            ebp++;
        }
        eax |= eax;
    } while (eax != 0);
label_0:
    eax = ebp;
    fcn_0804804c ();
    *(edi) = 0x65737520;
    *((edi + 4)) = 0x202c7372;
    *((edi + 8)) = 0x64616f6c;
    *((edi + 0xc)) = 0x65766120;
    *((edi + 0x10)) = 0x65676172;
    *((edi + 0x15)) = 0x203a;
    edi += 0x17;
    eax = *((esp + 4));
    fcn_0804806e ();
    ax = 0x202c;
    *(es:edi) = ax;
    es:edi += 2;
    eax = *((esp + 8));
    fcn_0804806e ();
    ax = 0x202c;
    *(es:edi) = ax;
    es:edi += 2;
    eax = *((esp + 0xc));
    fcn_0804806e ();
    al = 0xa;
    *(es:edi) = al;
    es:edi++;
    edx = 0x50;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804821a, 0x50);
    eax = 1;
    eax = sys_exit (0xea);
    __asm ("das");
    if (edi <= 0) {
        void (*0x8048270)() ();
    }
    if (edi < 0) {
        goto label_1;
    }
    if (edi < 0) {
        void (*0x8048288)() ();
    }
    __asm ("outsb dx, byte [esi]");
    __asm ("das");
    if (edi != 0) {
        void (*0x804828b)() ();
    }
    __asm ("insd dword es:[edi], dx");
    if (edi !overflow 0) {
    }
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
label_1:
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/uptime/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t fcn_0804804c (void) {
    edx = 0;
    ebx = 0xa;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    eax |= eax;
    if (eax != 0) {
        al += 0x30;
        *(es:edi) = al;
        es:edi++;
    }
    eax = edx + 0x30;
    *(es:edi) = al;
    es:edi++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/uptime/ia32_elf/subject.exe @ 0x804805f */
#include <stdint.h>
 
int32_t fcn_0804805f (void) {
    edx = 0;
    ebx = 0xa;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    al += 0x30;
    *(es:edi) = al;
    es:edi++;
    eax = edx + 0x30;
    *(es:edi) = al;
    es:edi++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/uptime/ia32_elf/subject.exe @ 0x804806e */
#include <stdint.h>
 
void fcn_0804806e (void) {
    eax >>= 5;
    eax += 0xa;
    eax >>= 0xb;
    fcn_0804804c ();
    al = 0x2e;
    *(es:edi) = al;
    es:edi++;
    eax &= 0x7ff;
    eax *= 0x64;
    eax >>= 0xb;
    fcn_0804805f ();
}
