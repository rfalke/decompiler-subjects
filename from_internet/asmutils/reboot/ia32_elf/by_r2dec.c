/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/reboot/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    edi = 0;
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    ebx = 0xfee1dead;
    ecx = 0x28121969;
    edx = 0x1234567;
    do {
        ebp--;
        if (ebp == 0) {
            goto label_1;
        }
        if (*(eax) == 0x702d) {
            goto label_2;
        }
        if (*(eax) != 0x662d) {
            goto label_1;
        }
        edi++;
    } while (1);
label_1:
    if (*((esi - 5)) == 0x746c6168) {
        edx = 0xcdef0123;
    } else {
        if (*((esi - 3)) != 0x6666) {
            goto label_3;
        }
label_2:
        edx = 0x4321fedc;
    }
    eax = 0x58;
    eax = sys_reboot (ebx, ecx, 0x89abcdef, esi);
    edx = 0x58;
    do {
label_0:
        eax = 0x58;
        eax = sys_reboot (ebx, ecx, edx, esi);
        eax = 1;
        eax = sys_exit (0xea);
label_3:
        edi |= edi;
    } while (edi != 0);
    __asm ("pushal");
    ecx = 2;
    ebx = 1;
    eax = 0x25;
    eax = sys_kill (0x1, 0x2);
    ebx = 0x80480d1;
    eax = 0;
    al = 0xa2;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    __asm ("popal");
    eax = 0x24;
    eax = sys_sync ();
    goto label_0;
}
