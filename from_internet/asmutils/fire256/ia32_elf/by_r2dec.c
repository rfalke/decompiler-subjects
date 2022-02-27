/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/fire256/ia32_elf/subject.exe @ 0x8048050 */
#include <stdint.h>
 
int32_t entry0 (void) {
    edi = 0x4b000;
    ebx = ebp;
    ecx = 2;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        goto label_1;
    }
    *(0x8093ac4) = eax;
    ebx = ebp;
    eax = 0x36;
    eax = sys_ioctl (0xea, 0x4602, 0xeb);
    if (eax < 0) {
        goto label_1;
    }
    eax = *(0x8093ac4);
    ebx = ebp;
    ecx = 0;
    ch = 0x46;
    eax = 0x36;
    eax = sys_ioctl (0xea, ecx, 0xeb);
    if (eax < 0) {
        goto label_1;
    }
    eax = *(0x8093ac4);
    ecx = 0x4b000;
    ebp = 0;
    edi = eax;
    esi = 1;
    edx = 3;
    ebx = 0;
    eax = 0;
    al = 0xc0;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        goto label_1;
    }
    *(0x80933ea) = eax;
    *(0x80933ee) = edi;
    *(0x80933fc) = 0x280;
    *(0x8093400) = 0x1e0;
    *(0x8093404) = 0x280;
    *(0x8093408) = 0x1e0;
    *(0x8093414) = 8;
    eax = *(0x8093ac4);
    ebx = ebp;
    eax = 0x36;
    eax = sys_ioctl (0xea, 0x4601, 0xeb);
    if (eax < 0) {
        goto label_1;
    }
    *(0x809349c) = 0;
    *(0x80934a0) = 0x100;
    eax = 0x80934b4;
    *(0x80934a4) = eax;
    eax = 0x80936b4;
    *(0x80934a8) = eax;
    eax = 0x80938b4;
    *(0x80934ac) = eax;
    *(0x80934b0) = 0;
    eax = *(0x8093ac4);
    ebx = ebp;
    eax = 0x36;
    eax = sys_ioctl (0xea, 0x4604, 0xeb);
    if (eax < 0) {
        goto label_1;
    }
    eax = 0x80934b4;
    *(0x80934a4) = eax;
    eax = 0x80936b4;
    *(0x80934a8) = eax;
    eax = 0x80938b4;
    *(0x80934ac) = eax;
    esi = *(0x80934a4);
    edi = *(0x80934a8);
    ebx = *(0x80934ac);
    ebp = 0;
    edx = 0;
    ecx = edx;
    do {
        eax = edx;
        eax <<= 8;
        *(esi) = ax;
        *(edi) = dx;
        *(ebx) = dx;
        *((esi + 0x80)) = 0x3f00;
        *((edi + 0x80)) = ax;
        *((ebx + 0x80)) = dx;
        *((esi + 0x100)) = 0x3f00;
        *((edi + 0x100)) = 0x3f00;
        ax += ax;
        *((ebx + 0x100)) = ax;
        *((esi + 0x180)) = 0x3f00;
        *((edi + 0x180)) = 0x3f00;
        *((ebx + 0x180)) = 0x3f00;
        esi += 2;
        edi += 2;
        ebx += 2;
        ecx++;
    } while (ecx != 0x40);
    eax = *(0x8093ac4);
    ebx = ebp;
    eax = 0x36;
    eax = sys_ioctl (0xea, 0x4605, 0xeb);
    if (eax < 0) {
        goto label_1;
    }
    eax = 0x8088405;
    *(0x8093ac8) = eax;
    eax = 0x1234567;
    *(0x8093acc) = eax;
    ecx = 0;
    eax = 0x4e;
    eax = sys_gettimeofday (0x8093ab4, ecx);
    ecx = 0x3e8;
label_0:
    esi = 0x80483bc;
    esi += 0x4ad80;
    ecx = 0xa0;
    do {
        eax = *(0x8093acc);
        edx:eax = eax * *(0x8093ac8);
        eax++;
        *(0x8093acc) = eax;
        *(esi) = eax;
        esi += 4;
        ecx--;
    } while (ecx != 0);
    edi = *(0x80933ea);
    ecx = 0x95b0;
    mm7 = *(0x80483a0);
    mm6 = *(0x80483a8);
    do {
        mm0 = *((esi + 0x280));
        __asm ("paddusb mm0, qword [esi + 0x4ff]");
        __asm ("paddusb mm0, qword [esi + 0x500]");
        __asm ("paddusb mm0, qword [esi + 0x501]");
        *(edi) = mm0;
        ebp &= 3;
        if (ebp == 0) {
            __asm ("psubusb mm0, mm6");
        }
        __asm ("psrlq mm0, 2");
        mm0 &= mm7;
        *(esi) = mm0;
        esi += 8;
        edi += 8;
        ecx--;
    } while (ecx != 0);
    ecx = esi;
    ecx--;
    if (ecx != 0) {
        goto label_0;
    }
    ecx = 0;
    eax = 0x4e;
    eax = sys_gettimeofday (0x8093abc, ecx);
    eax = *(0x8093abc);
    eax -= *(0x8093ab4);
    ecx = 0x3e8;
    edx:eax = eax * ecx;
    ebx = eax;
    edx = 0;
    eax = *(0x8093ac0);
    eax -= *(0x8093ab8);
    edx:eax = (int64_t) eax;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    eax += ebx;
    ebx = eax;
    eax = 0xf4240;
    edx = 0;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    ecx = 0x8093adc;
    void (*0x8048376)() ();
    edx = 1;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048398, 0x1);
    __asm ("emms");
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
label_1:
    eax = 1;
    eax = sys_exit (0xea);
    __asm ("pushal");
    ebx = 0;
    bl = 0xa;
    do {
        ecx--;
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl |= 0x30;
    } while (eax != 0);
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xd, edx);
    __asm ("popal");
    return eax;
}
