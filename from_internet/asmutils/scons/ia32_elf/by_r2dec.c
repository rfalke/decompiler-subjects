/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/scons/ia32_elf/subject.exe @ 0x8048067 */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_2eh, int32_t arg_72h, int32_t arg_4h, int32_t arg_ch_2, int32_t arg_8h, int32_t arg_ch, int32_t arg_11h, int32_t arg_12h) {
    ecx--;
    if (ecx == 0) {
        goto label_1;
    }
    ebx = 3;
    eax = 0x30;
    eax = sys_signal (0x3, 0x804804e);
    eax = 5;
    eax = sys_open (0xe, 0x102, edx);
    eax |= eax;
    if (eax < 0) {
        goto label_2;
    }
    *(0x804826c) = eax;
    eax = 0x36;
    eax = sys_ioctl (0xea, 0x5401, 0xe);
    eax = 0x36;
    eax = sys_ioctl (0x804826c, 0x5402, 0xe);
    ebx = 0;
    eax = 0x36;
    eax = sys_ioctl (ebx, 0x5401, 0x8048270);
    ebx = 0;
    eax = 0x36;
    eax = sys_ioctl (ebx, 0x5401, 0xe);
    edi = esp + 0x11;
    ecx = 0x13;
    eax = 0;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    *((esp + 0x12)) = 0x1c;
    ebx = 0;
    eax = 0x36;
    eax = sys_ioctl (ebx, 0x5402, 0xe);
    edx = 2;
    eax = 4;
    eax = sys_write (0x804826c, 0x804804c, 0x2);
    do {
label_0:
        edi = esp;
        edx = 0x186a0;
        ecx = 2;
        ebx = edi;
        eax = 0;
        al = 0xa8;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        if ((*((esp + 4)) & 0x10000) == 0) {
            goto label_3;
        }
        if ((*((esp + 0xc)) & 0x10000) == 0) {
            goto label_4;
        }
    } while (1);
label_3:
    edx = 0x64;
    ebx = 0;
    eax = 3;
    eax = sys_read (ebx, 0x8048208, 0x64);
    eax = 4;
    eax = sys_write (0x804826c, 0x8048208, 0xea);
    goto label_0;
label_4:
    edx = 0x64;
    eax = 3;
    eax = sys_read (0x804826c, 0x8048208, 0x64);
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048208, 0xea);
    goto label_0;
label_2:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80481ec, 0x1c);
    ebx = 1;
    eax = 1;
    eax = sys_exit (0x1);
label_1:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80481ca, 0x22);
    ebx = 2;
    eax = 1;
    eax = sys_exit (0x2);
    al &= 0x40;
    *((ebx + 0x65)) &= dh;
    if (*((ebx + 0x65)) >= 0) {
        __asm ("popal");
        __asm ("insb byte es:[edi], dx");
        if (*((ebx + 0x65)) <= 0) {
            goto label_5;
        }
        __asm ("arpl word [ebp + 0x20], sp");
        *((ebp + 0x2e)) -= ah;
        *(cs:bx) &= ch;
        if (*(cs:bx) > 0) {
            if (*(cs:bx) == 0) {
                goto label_6;
            }
            if (*(cs:bx) >= 0) {
                goto label_7;
            }
            *(ecx) ^= ch;
            al |= *((ebp + 0x72));
            if (al < 0) {
                goto label_8;
            }
            if (al >= 0) {
                __asm ("outsd dx, dword [esi]");
                if (al overflow 0) {
                    goto label_9;
                }
                __asm ("outsb dx, byte [esi]");
                ebp = *((esi + 0x67)) * 0x72657320;
                esp = *((ecx + 0x6c)) * 0x76656420;
                esp = *((ebx + 0x65)) * 0xa;
                *(eax) += al;
                *(eax) += al;
                *(eax) += al;
                *(eax) += al;
            }
            *(eax) += al;
        }
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
    *(eax) += al;
label_7:
    *(eax) += al;
    *(eax) += al;
label_5:
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
label_9:
    *(eax) += al;
label_6:
    *(eax) += al;
    *(eax) += al;
label_8:
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
    bh += bh;
}
