/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/paste/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    ebp--;
    if (ebp == 0) {
        goto label_4;
    }
    esi = 0;
    *(0x80495e5) = 9;
    do {
        if (*(edi) == 0x642d) {
            goto label_5;
        }
        ecx = 0;
        eax = 5;
        eax = sys_open (0xed, ecx, edx);
        if (eax < 0) {
            goto label_1;
        }
        *((esi + 0x80485dc)) = eax;
        esi += 4;
label_0:
        ebp--;
    } while (ebp != 0);
    esi |= esi;
    if (esi != 0) {
        goto label_6;
label_5:
        ebp--;
        if (ebp == 0) {
            goto label_4;
        }
        edi = 5;
        cl = *(edi);
        *(0x80495e5) = cl;
        goto label_0;
    }
label_4:
    esi = *(0x80481b9);
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, 0x8048192, 0x80481b9);
    do {
        edi = 0;
        edi++;
        eax = 1;
        eax = sys_exit (0xed);
label_1:
        esi = *(0x80481d8);
        ebx = 2;
        eax = 4;
        eax = sys_write (0x2, 0x80481bd, 0x80481d8);
    } while (1);
label_6:
    *(0x80495e0) = esi;
    ebx = 0;
    *(0x80495dc) = ebx;
    ebp = 0;
    edi = *(0x80485dc);
label_3:
    ecx = *((ebp + 0x80485dc));
    ecx |= ecx;
    if (ecx == 0) {
        goto label_7;
    }
    eax = 0x80495e4;
label_2:
    edx = 0;
    edx++;
    eax = 3;
    eax = sys_read (0xed, 0x80495e4, edx);
    if (eax < 0) {
        goto label_1;
    }
    if (eax != 0) {
        al = *(0x80495e4);
        if (al == 0xa) {
            goto label_7;
        }
        eax = void (*0x8048156)() ();
        goto label_2;
    }
    *(0x80495e0) -= 4;
    if (*(0x80495e0) != 0) {
        *((ebp + 0x80485dc)) = eax;
label_7:
        ebp += 4;
        if (ebp != esi) {
            edi = *((ebp + 0x80485dc));
            al = *(0x80495e5);
            void (*0x8048156)() ();
            goto label_3;
        }
        al = 0xa;
        void (*0x8048156)() ();
        eax = fcn_08048172 ();
        ebp = 0;
        edi = *((ebp + 0x80485dc));
        goto label_3;
    }
    eax = 0;
    eax = 1;
    eax = sys_exit (0xea);
    ebx = *(0x80495dc);
    *((ebx + 0x80481dc)) = al;
    ebx++;
    if (ebx != 0x400) {
        *(0x80495dc) = ebx;
        return eax;
    }
    eax = 0x80481dc;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xea, 0xeb);
    ebx = 0;
    *(0x80495dc) = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/paste/ia32_elf/subject.exe @ 0x8048172 */
#include <stdint.h>
 
void fcn_08048172 (void) {
    ebx = *(0x80495dc);
}
