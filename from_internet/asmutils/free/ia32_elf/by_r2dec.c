/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/free/ia32_elf/subject.exe @ 0x8048080 */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h, int32_t arg_24h, int32_t arg_65h, int32_t arg_73h) {
    edx = 0x49;
    ecx = 0x804813a;
    ebx = 1;
    eax = 4;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax = 0x74;
    eax = sys_sysinfo (0xe);
    edi = esp;
    eax = *((ebp + 0x10));
    eax >>= 0xa;
    fcn_0804804c ();
    eax = *((ebp + 0x10));
    eax -= *((ebp + 0x14));
    eax >>= 0xa;
    fcn_0804804c ();
    eax = *((ebp + 0x14));
    eax >>= 0xa;
    fcn_0804804c ();
    eax = *((ebp + 0x18));
    eax >>= 0xa;
    fcn_0804804c ();
    eax = *((ebp + 0x1c));
    eax >>= 0xa;
    fcn_0804804c ();
    *(edi) = 0xa;
    edi = esp;
    edx = 0x3c;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xed, 0x3c);
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048183, 0xa);
    eax = *((ebp + 0x20));
    eax >>= 0xa;
    fcn_0804804c ();
    eax = *((ebp + 0x20));
    eax -= *((ebp + 0x24));
    eax >>= 0xa;
    fcn_0804804c ();
    eax = *((ebp + 0x24));
    eax >>= 0xa;
    fcn_0804804c ();
    *(edi) = 0xa;
    edx = 0x22;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0x22);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    *(eax) |= esp;
    *(eax) &= ah;
    *(eax) &= ah;
    *(eax) &= ah;
    *(eax) &= ah;
    *(eax) &= ah;
    *(eax) &= ah;
    if (*(eax) == 0) {
        void (*0x80481b8)() ();
    }
    if (*(eax) == 0) {
        void (*0x80481ac)() ();
    }
    __asm ("insb byte es:[edi], dx");
    *(eax) &= ah;
    *(eax) &= ah;
    *(eax) &= ah;
    *((ebp + 0x73)) &= dh;
    *(fs:eax) &= ah;
    *(eax) &= ah;
    *(eax) &= ah;
    *((esi + 0x72)) &= ah;
    *(gs:eax) &= ah;
    *(eax) &= ah;
    *((ebx + 0x68)) &= dh;
    __asm ("popal");
    if (*((ebx + 0x68)) < 0) {
        void (*0x80481d1)() ();
    }
    *(fs:eax) &= ah;
    *(eax) &= ah;
    __asm ("bound esi, qword [ebp + 0x66]");
    if (*(eax) < 0) {
        void (*0x80481eb)() ();
    }
    cl |= *((ebp + 0x65));
    __asm ("insd dword es:[edi], dx");
    *(eax) &= ah;
    *(eax) &= ah;
    *((ebx + 0x77)) &= dl;
    __asm ("popal");
    if (*((ebx + 0x77)) overflow 0) {
        void (*0x80481c2)() ();
    }
    *(eax) &= ah;
    *(eax) &= ah;
    bh &= bh;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/free/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t fcn_0804804c (void) {
    ebx = 0xa;
    ecx = 7;
    eax |= eax;
    if (eax != 0) {
        goto label_0;
    }
    *((edi + ecx)) = 0x30;
    ecx--;
    goto label_1;
    do {
label_0:
        eax |= eax;
        if (eax == 0) {
            goto label_1;
        }
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl += 0x30;
        *((edi + ecx)) = dl;
        ecx--;
    } while (ecx != 0);
label_1:
    edi += ecx;
    ecx++;
    __asm ("std");
    al = 0x20;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    edi += 9;
    ecx = 3;
    *(es:edi) = al;
    ecx--;
    es:edi++;
    return eax;
}
