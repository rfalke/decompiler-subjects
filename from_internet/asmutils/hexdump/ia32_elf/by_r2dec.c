/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/hexdump/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void entry0 (void) {
    ebx = 0;
    eax--;
    if (eax != 0) {
label_1:
        ebx |= ebx;
        if (ebx == 0) {
            goto label_2;
        }
        ecx = 0;
        eax = 5;
        eax = sys_open (ebx, ecx, edx);
        eax |= eax;
        if (eax < 0) {
            goto label_3;
        }
        tmp_0 = eax;
        eax = ebx;
        ebx = tmp_0;
    }
    ebp = 0;
label_0:
    edi = 0x80480f0;
    esi = 0x80480f0;
    ecx = 0x33;
    al = 0x20;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    edx = 0x10;
    eax = 3;
    eax = sys_read (ebx, 0xed, 0x10);
    eax |= eax;
    if (eax < 0) {
        goto label_3;
    }
    if (eax == 0) {
        goto label_4;
    }
    __asm ("pushal");
    edx:eax = (int64_t) eax;
    tmp_1 = edi;
    edi = esi;
    esi = tmp_1;
    tmp_2 = eax;
    eax = ebp;
    ebp = tmp_2;
    void (*0x80480d8)(uint32_t) (eax);
    ecx++;
    ecx++;
    void (*0x80480d8)() ();
    al = 0x3a;
    *(es:edi) = al;
    es:edi++;
    do {
        edx ^= 1;
        edi += edx;
        al = *(esi);
        esi++;
        if (al != 0x7f) {
            if (al >= 0x20) {
                goto label_5;
            }
        }
        *((esi - 1)) = 0x2e;
label_5:
        eax = void (*ecx)() ();
        ebp--;
    } while (ebp != 0);
    *(esi) = 0xa;
    __asm ("popal");
    ebp += eax;
    edx = eax + 0x34;
    ecx = esi;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, edx);
    ebx = 4;
    eax |= eax;
    if (eax > 0) {
        goto label_0;
    }
label_4:
    eax = 6;
    eax = sys_close (ebx);
    goto label_1;
label_3:
    eax = -eax;
    tmp_3 = eax;
    eax = ebx;
    ebx = tmp_3;
label_2:
    eax = 1;
    eax = sys_exit (ebx);
    ecx++;
    eax = rotate_left32 (eax, 8);
    __asm ("aam 0x10");
    al = void (*0x80480e4)() ();
    tmp_4 = ah;
    ah = al;
    al = tmp_4;
    if (al > 9) {
        al += 7;
    }
    al += 0x30;
    *(es:edi) = al;
    es:edi++;
}
