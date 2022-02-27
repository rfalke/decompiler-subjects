/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ksyms/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint32_t entry0 (int32_t arg_4h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_4h_2;
    if (*((ebp + 4)) >= 2) {
        esi = *((ebp + 0xc));
        if (*(esi) == 0x562d) {
            esi = 0x804826b;
            fcn_0804824a ();
            goto label_2;
        }
        if (*(esi) != 0x682d) {
            esi = 0x8048281;
            fcn_0804824a ();
        }
        esi = *((ebp + 0xc));
        if (*(esi) != 0x6f2d) {
            goto label_3;
        }
        if (*((ebp + 4)) < 3) {
            esi = 0;
            void (*0x80480f1)() ();
            goto label_2;
        }
        esi = *((ebp + 0x10));
        eax = void (*0x80480f1)() ();
        goto label_2;
    }
label_3:
    edi = 0x80a82ce;
    esi = 0x20000;
    edx = 0x80482ca;
    ecx = 1;
    ebx = 0;
    eax = 0;
    al = 0xa7;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        goto label_4;
    }
    ecx = *(0x80a82ce);
    esi = edx;
label_0:
    al = void (*0x80480f1)() ();
    do {
        al = *(esi);
        esi++;
    } while (al != 0);
    __asm ("loop 0x80480c5");
    goto label_0;
    if (*((ebp + 4)) >= 2) {
        esi = *((ebp + 0xc));
        if (*(esi) == 0x612d) {
            esi = 0;
            eax = void (*0x80480f1)() ();
        }
label_2:
        eax = 0;
    }
label_4:
    eax = 1;
    eax = sys_exit (0xea);
    *((ebp - 4)) = esi;
    __asm ("pushal");
    edi = 0x80a82ca;
    esi = 0x20000;
    edx = 0x80882ca;
    ecx = 4;
    ebx = *((ebp - 4));
    eax = 0;
    al = 0xa7;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        edi = 0x80682ca;
        ecx = 0x10;
        fcn_08048214 ();
        edx = 8;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x80682ca, 0x8);
        esi = 0x80482b9;
        fcn_0804824a ();
        esi = 0x80482c3;
        fcn_0804824a ();
        esi = *((ebp - 4));
        fcn_0804824a ();
        esi = 0x80482bf;
        fcn_0804824a ();
        goto label_5;
    }
    ecx = *(0x80a82ca);
    edx = 0x80882ca;
    *((ebp - 8)) = edx;
    *((ebp - 0xc)) = edx;
label_1:
    eax = *((ebp - 8));
    eax = *(eax);
    edi = 0x80682ca;
    ecx = 0x10;
    fcn_08048214 ();
    edx = 8;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80682ca, 0x8);
    esi = 0x80482c3;
    fcn_0804824a ();
    esi = *((ebp - 8));
    esi = *((esi + 4));
    esi += *((ebp - 0xc));
    eax = fcn_0804824a ();
    esi = *((ebp - 4));
    if (esi == 0) {
        goto label_6;
    }
    ecx = 0x20;
    ecx -= eax;
    if (ecx <= 0) {
        goto label_7;
    }
    do {
        esi = 0x80482c1;
        fcn_0804824a ();
        __asm ("loop 0x80481c2");
    } while (1);
label_7:
    esi = 0x80482c3;
    fcn_0804824a ();
    esi = 0x80482c6;
    fcn_0804824a ();
    esi = *((ebp - 4));
    fcn_0804824a ();
    esi = 0x80482c8;
    fcn_0804824a ();
label_6:
    esi = 0x80482bf;
    fcn_0804824a ();
    edx = *((ebp - 8));
    edx += 8;
    *((ebp - 8)) = edx;
    __asm ("loop 0x804820c");
    goto label_5;
    goto label_1;
label_5:
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ksyms/ia32_elf/subject.exe @ 0x804824a */
#include <stdint.h>
 
void fcn_0804824a (void) {
    if (esi == 0) {
        goto label_0;
    }
    ecx = 0;
    do {
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_1;
        }
        ecx++;
    } while (1);
label_1:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0xec);
    eax = 4;
    ecx = 4;
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ksyms/ia32_elf/subject.exe @ 0x8048214 */
#include <stdint.h>
 
int8_t fcn_08048214 (void) {
    fcn_0804822c ();
    al = 9;
    *(es:edi) = al;
    es:edi++;
    if (cl == 0x10) {
        edx -= edi;
        if (dl <= 0xf9) {
            goto label_0;
        }
        *(es:edi) = al;
        es:edi++;
    }
label_0:
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ksyms/ia32_elf/subject.exe @ 0x804822c */
#include <stdint.h>
 
uint32_t fcn_0804822c (void) {
    do {
        edx -= edx;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        if (eax == 0) {
            goto label_0;
        }
        fcn_0804822c ();
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
