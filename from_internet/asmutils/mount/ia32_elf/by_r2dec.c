/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mount/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    ecx--;
    if (ecx == 0) {
        goto label_1;
    }
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    if (*((esi - 7)) != 0x75) {
        goto label_3;
    }
    ecx = 0;
    eax = 0x16;
    eax = sys_oldumount (ebx);
    do {
label_0:
        eax = 1;
        eax = sys_exit (0xea);
label_1:
        ecx = 0;
        eax = 5;
        eax = sys_open (0x80481ba, ecx, edx);
        if (eax >= 0) {
            goto label_4;
        }
        eax = 5;
        eax = sys_open (0x80481c7, ecx, edx);
    } while (eax < 0);
label_4:
    edx = 0;
    dh = 0x20;
    eax = 3;
    eax = sys_read (0xea, 0x80481d5, edx);
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, 0xea);
    eax = 0;
    goto label_0;
label_3:
    if (cl < 2) {
        goto label_1;
    }
    if (*(ebx) != 0x6f2d) {
        goto label_5;
    }
label_2:
    esi = ebp;
    do {
        al = *(esi);
        esi++;
        if (al == 0x2c) {
            goto label_6;
        }
        al |= al;
    } while (al != 0);
    *(0x80481d5)++;
label_6:
    ebx = esi;
    ebx -= ebp;
    ebx--;
    ecx = 7;
    edx = 0x8048156;
    do {
        __asm ("pushal");
        esi = ebp;
        edi = *(edx);
        ecx = ebx;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        __asm ("popal");
        if (ebx == 0) {
            eax = *((edx + 4));
            *(0x80481d1) |= eax;
        } else {
            edx += 8;
            __asm ("loop 0x80480d4");
        } while (1);
    }
    if (*(0x80481d5) != 1) {
        goto label_2;
    }
    ebx = 4;
label_5:
    edx = 0x80481d5;
    if (*(ebx) == 0x742d) {
        edx = 4;
        ebx = 4;
    }
    ecx = 4;
    fcn_08048140 ();
    *(0x80481d1) |= 1;
    fcn_08048140 ();
    *(0x80481d1) &= 0xfffffffe;
    *(0x80481d1) |= 4;
    fcn_08048140 ();
    *(0x80481d1) |= 1;
    fcn_08048140 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mount/ia32_elf/subject.exe @ 0x8048140 */
#include <stdint.h>
 
void fcn_08048140 (void) {
    esi = *(0x80481d1);
    edi = 0;
    eax = 0x15;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax >= 0) {
        void (*0x8048064)() ();
    }
}
