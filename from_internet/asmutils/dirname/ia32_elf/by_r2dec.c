/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dirname/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int8_t entry0 (void) {
    ecx--;
    ecx--;
    if (ecx == 0) {
        void (*0x80480a5)() ();
        fcn_080480b1 ();
        edi += edx;
        edi--;
        ecx = edx;
        al = 0x2f;
        __asm ("repne scasb al, byte es:[edi]");
        if (edi == 0) {
            if (ecx == 0) {
                ecx++;
            }
            edx = ecx;
            fcn_080480b1 ();
            edx--;
            edx++;
            *((edx + edi)) = 0xa;
            edx++;
            ebx = 1;
            eax = 4;
            eax = sys_write (0x1, 0xed, edx);
            eax = 1;
            eax = sys_exit (ebx);
        }
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x80480a3, 0x2);
    }
    eax = 1;
    eax = sys_exit (ebx);
    cl |= *(cs:);
    do {
        edx++;
    } while (*(edx) != 0);
    edx -= edi;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dirname/ia32_elf/subject.exe @ 0x80480b1 */
#include <stdint.h>
 
int8_t fcn_080480b1 (void) {
    al = 0x2f;
    tmp_0 = edx;
    edx = edi;
    edi = tmp_0;
    edi += edx;
    edi--;
    __asm ("std");
    do {
        if (edi == edx) {
            goto label_0;
        }
        __asm ("scasb al, byte es:[edi]");
    } while (edi == edx);
    edi++;
label_0:
    edi -= edx;
    edi++;
    tmp_1 = edx;
    edx = edi;
    edi = tmp_1;
    return al;
}
