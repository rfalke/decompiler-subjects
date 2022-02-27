/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mv/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    if (ecx < 3) {
        goto label_0;
    }
    ecx--;
    ecx--;
    edi = 0;
    tmp_0 = esp + ecx*4;
    esp + ecx*4 = edi;
    edi = tmp_0;
    while (esi != 0) {
        void (*0x8048071)() ();
    }
label_0:
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    __asm ("pushal");
    fcn_080480e7 ();
    if (esi == 0) {
        fcn_0804810e ();
        ax = 0x2f;
        ecx = edx;
        edx--;
        edi = esi;
        edi += edx;
        if (*(edi) == al) {
            *(edi) = ah;
        }
        __asm ("std");
        __asm ("repne scasb al, byte es:[edi]");
        if (*(edi) == al) {
            edi++;
        }
        edi++;
        esi = edi;
        edx = esi;
        esi = edi;
        edi = 0x8048184;
        fcn_080480b8 ();
        esi = ebp;
    }
    eax = 0x26;
    eax = sys_rename (0xe, 0xed);
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mv/ia32_elf/subject.exe @ 0x80480e7 */
#include <stdint.h>
 
uint32_t fcn_080480e7 (void) {
    __asm ("pushal");
    ecx = 0x8048144;
    ebx = edi;
    eax = 0x6a;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax >= 0) {
        eax = *(0x804814c);
        ebx = 0x4000;
        eax &= ebx;
        __asm ("clc");
    } else {
        __asm ("stc");
    }
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mv/ia32_elf/subject.exe @ 0x804810e */
#include <stdint.h>
 
int32_t fcn_0804810e (void) {
    eax = 0;
    edx = eax;
    edx--;
    do {
        edx++;
        al = *(esi);
        esi++;
    } while (al != 0);
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mv/ia32_elf/subject.exe @ 0x80480b8 */
#include <stdint.h>
 
void fcn_080480b8 (void) {
    __asm ("pushal");
    fcn_0804811f ();
    fcn_080480cc ();
    esi = edx;
    fcn_0804812c ();
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mv/ia32_elf/subject.exe @ 0x804811f */
#include <stdint.h>
 
void fcn_0804811f (void) {
    __asm ("pushal");
    fcn_0804810e ();
    edx++;
    ecx = edx;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mv/ia32_elf/subject.exe @ 0x80480cc */
#include <stdint.h>
 
int16_t fcn_080480cc (void) {
    esi = edi;
    fcn_0804810e ();
    edx--;
    ax = 0x2f;
    if (*((edi + edx)) != al) {
        edx++;
        *((edi + edx)) = ax;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mv/ia32_elf/subject.exe @ 0x804812c */
#include <stdint.h>
 
void fcn_0804812c (void) {
    __asm ("pushal");
    tmp_0 = edi;
    edi = esi;
    esi = tmp_0;
    fcn_0804810e ();
    tmp_1 = edi;
    edi = esi;
    esi = tmp_1;
    edi += edx;
    fcn_0804810e ();
    edx++;
    ecx = edx;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    __asm ("popal");
}
