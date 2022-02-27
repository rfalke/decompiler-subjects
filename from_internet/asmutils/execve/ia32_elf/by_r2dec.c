/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/execve/ia32_elf/subject.exe @ 0x80481ca */
#include <stdint.h>
 
void entry0 (int32_t arg_4h) {
    *(0x80482b6) = eax;
    eax = 0x80482b6;
    __asm ("pushfd");
    *((eax + 4)) = ebx;
    *((eax + 8)) = ecx;
    *((eax + 0xc)) = edx;
    *((eax + 0x10)) = esi;
    *((eax + 0x14)) = edi;
    *((eax + 0x18)) = ebp;
    *((eax + 0x1c)) = esp;
    *((eax + 0x24)) = cs;
    *((eax + 0x28)) = ds;
    *((eax + 0x2c)) = es;
    *((eax + 0x30)) = fs;
    *((eax + 0x34)) = gs;
    *((eax + 0x38)) = ss;
    *((eax + 0x3c)) = ebp;
    *((eax + 0x40)) = esi;
    *((eax + 0x44)) = edi;
    edx = *((esp + ebp*4));
    *((eax + 0x48)) = edx;
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    if (*((esi - 5)) != 0x73676572) {
        goto label_0;
    }
    ecx = 0x13;
    fcn_080480a7 ();
    do {
        ebx = 0;
        eax = 1;
        eax = sys_exit (ebx);
label_0:
        ebp--;
    } while (ebp == 0);
    esi = 1;
    ebx = *(esp);
    ecx = esp;
    edx = esp + ebp*4 + 4;
    esi = 0x11223344;
    edi = 0x55667788;
    eax = 0x80482b6;
    *((eax + 4)) = ebx;
    *((eax + 8)) = ecx;
    *((eax + 0xc)) = edx;
    *((eax + 0x10)) = esi;
    *((eax + 0x14)) = edi;
    *((eax + 0x18)) = ebp;
    __asm ("pushal");
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80481a1, 0x12);
    eax = 4;
    eax = sys_write (ebx, 0x8048185, 0x1c);
    ecx = 0xf;
    fcn_080480a7 ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80481b3, 0x17);
    eax = 4;
    eax = sys_write (ebx, 0x8048185, 0x1c);
    __asm ("popal");
    eax = 0xb;
    eax = sys_execve (ebx, ecx, edx, esi);
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
/* SUBJECTS/from_internet/asmutils/execve/ia32_elf/subject.exe @ 0x804805c */
#include <stdint.h>
 
int32_t fcn_0804805c (void) {
    __asm ("pushal");
    *(edi) = 0x7830;
    edi++;
    edi++;
    esi = edi;
    *(ebp) = eax;
    ecx = 0x10;
    esi = 0;
    do {
        esi++;
        edx = 0;
        eax = *(ebp);
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        *(ebp) = eax;
        al = dl;
        al -= 0x69;
        __asm ("das");
        *(es:edi) = al;
        es:edi++;
        eax = 0;
    } while (eax != *(ebp));
    *(es:edi) = al;
    es:edi++;
    ecx = 0x10;
    tmp_0 = esi;
    esi = ecx;
    ecx = tmp_0;
    ecx >>= 1;
    if (ecx == 0) {
        goto label_0;
    }
    tmp_1 = esi;
    esi = edi;
    edi = tmp_1;
    esi--;
    esi--;
    do {
        al = *(edi);
        tmp_2 = esi;
        esi = al;
        al = tmp_2;
        *(es:edi) = al;
        es:edi++;
        esi--;
        __asm ("loop 0x804809a");
    } while (1);
label_0:
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/execve/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void fcn_0804804c (void) {
    edx = edi;
    edi--;
    do {
        edi++;
    } while (*(edi) != 0);
    tmp_0 = edi;
    edi = edx;
    edx = tmp_0;
    edx -= edi;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/execve/ia32_elf/subject.exe @ 0x80480a7 */
#include <stdint.h>
 
void fcn_080480a7 (void) {
    esi = 0x80482b6;
label_0:
    ecx = ebp;
    do {
        ebp++;
    } while (*(ebp) != 0);
    edx -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, 0xeb);
    ebp++;
    eax = *(esi);
    esi += 4;
    edi = 0x8048302;
    fcn_0804805c ();
    fcn_0804804c ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xed, edx);
    edx = 1;
    eax = 4;
    eax = sys_write (ebx, 0x8048185, 0x1);
    ecx = 4;
    __asm ("loop 0x80480b1");
    goto label_0;
}
