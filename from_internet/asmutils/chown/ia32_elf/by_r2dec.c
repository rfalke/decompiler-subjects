/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/chown/ia32_elf/subject.exe @ 0x8048057 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    *(0x8048139) = 0xffffffff;
    ebp = 0;
    ebx--;
    if (ebx == 0) {
        goto label_0;
    }
    al = fcn_08048129 ();
    al = *(esi);
    esi++;
    if (al <= 0x2f) {
        goto label_0;
    }
    if (al >= 0x3a) {
        goto label_0;
    }
    esi--;
    edx--;
    ebp++;
    if (*((esi + edx)) == 0x2e) {
        goto label_0;
    }
    edx++;
    ebp--;
    ecx = 0;
    do {
        al = *(esi);
        esi++;
        ecx++;
        if (ecx > edx) {
            goto label_1;
        }
    } while (al != 0x2e);
    *(0x804853d) = 1;
label_1:
    *(0x804813d) = esi;
    ecx--;
    *((esi + ecx)) = 0;
    *(0x8048139) = esi;
    esi = *(0x804813d);
    eax = void (*0x8048115)() ();
    *(0x804813d) = eax;
    esi = *(0x8048139);
    eax = void (*0x8048115)() ();
    *(0x8048139) = eax;
    if (*(0x804853d) == 1) {
        goto label_2;
    }
    eax = fcn_0804804c ();
    do {
label_2:
        esi |= esi;
        if (esi == 0) {
            goto label_0;
        }
        *(0x8048141) = esi;
        edx = *(0x804813d);
        ecx = *(0x8048139);
        ebx = *(0x8048141);
        eax = 0;
        al = 0xb6;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    } while (1);
label_0:
    eax = 1;
    eax = sys_exit (0xeb);
    eax = 0;
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_3;
        }
        al -= 0x30;
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_3:
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/chown/ia32_elf/subject.exe @ 0x8048129 */
#include <stdint.h>
 
int32_t fcn_08048129 (void) {
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
/* SUBJECTS/from_internet/asmutils/chown/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void fcn_0804804c (void) {
    *(0x804813d) = 0xffffffff;
}
