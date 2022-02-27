/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/write/ia32_elf/subject.exe @ 0x8048066 */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_4h, int32_t arg_4h_2) {
    do {
label_0:
        edx = 0x1c;
        ecx = 0x80481ed;
        ebx = 1;
        eax = 4;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        ebx = 1;
        eax = 1;
        eax = sys_exit (0x1);
        ecx = 1;
    } while (ecx > 3);
    if (ecx == 1) {
        goto label_0;
    }
    esi = esp + ecx*4 + 4;
    do {
label_1:
        eax = *(esi);
        esi += 4;
        eax |= eax;
        if (eax == 0) {
            goto label_3;
        }
    } while (*(eax) != 0x52455355);
    eax += 5;
    if (*((eax - 1)) != 0x3d) {
        goto label_1;
    }
    *(0x8048274) = eax;
label_3:
    eax = 1;
    esi = 1;
    edi = esi;
    0x8048270 = 1;
    ecx = 0x20;
    edx = 0x20;
    eax = 0;
    __asm ("repne scasb al, byte es:[edi]");
    ecx -= edx;
    ecx = ~ecx;
    if (ecx == 0) {
        goto label_4;
    }
    edx = 0;
    ecx = 0;
    eax = 5;
    eax = sys_open (0x8048243, ecx, edx);
    *(0x8048278) = eax;
    eax = 0xc;
    eax = sys_chdir (0x8048251);
    do {
label_2:
        eax = 3;
        eax = sys_read (0x8048278, 0x8048280, 0x180);
        eax |= eax;
        if (eax == 0) {
            goto label_4;
        }
        edi = 0x80482ac;
        esi = *((esp + 4));
        ecx = *(esp);
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        ecx |= ecx;
    } while (ecx != 0);
    ebx = 0x8048288;
    esi = *(0x8048270);
    esi |= esi;
    if (esi == 0) {
        goto label_5;
    }
    edi = ebx;
    ecx = 6;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    ecx |= ecx;
    if (ecx != 0) {
        goto label_2;
    }
label_5:
    ecx = 1;
    eax = 5;
    eax = sys_open (ebx, 0x1, edx);
    if (eax > 0) {
        goto label_6;
    }
    ecx = *(0x8048270);
    ecx |= ecx;
    if (ecx == 0) {
        goto label_2;
    }
    goto label_7;
label_6:
    *(0x804827c) = eax;
    edi = 0x8048400;
    esi = 0x804825a;
    ecx = 0xd;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    esi = *(0x8048274);
    esi |= esi;
    if (esi == 0) {
        goto label_8;
    }
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    *(edi) = 0xa;
    ecx = edi;
    ecx -= 0x8048400;
    eax = 4;
    eax = sys_write (0x804827c, 0x8048400, 0xec);
label_8:
    eax = 4;
    eax = sys_write (0x804827c, 0x8048267, 0x9);
    do {
        edx = 0;
        dh = 1;
        ebx = 0;
        eax = 3;
        eax = sys_read (ebx, 0x8048400, edx);
        if (eax == 0) {
            goto label_9;
        }
        eax = 4;
        eax = sys_write (0x804827c, 0x8048400, 0xea);
    } while (1);
label_9:
    ecx = 0x8048256;
    edx = 4;
    goto label_10;
label_7:
    ebx = 2;
    ecx = 0x8048231;
    edx = 0x12;
    goto label_10;
label_4:
    ebx = 2;
label_10:
    eax = 4;
    eax = sys_write (0x2, 0x8048209, 0x28);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    if (eax >= 0) {
        goto label_11;
    }
    if (ah > *((gs:bx + si))) {
        goto label_12;
    }
    esi = *((ebp + 0x20)) * 0x72657375;
    *((ebx + 0x74)) &= bl;
    if (*((ebx + 0x74)) == 0) {
        goto label_13;
    }
    __asm ("outsb dx, byte [esi]");
    __asm ("popal");
    __asm ("insd dword es:[edi], dx");
    dl |= *((ebp + 0x73));
    if (dl >= 0) {
        __asm ("outsb dx, byte [esi]");
        __asm ("outsd dx, dword [esi]");
        if (dl == 0) {
            goto label_14;
        }
        __asm ("insb byte es:[edi], dx");
        __asm ("outsd dx, dword [esi]");
        *((fs:bx + di + 0x6e)) &= ch;
        *((edi + 0x72)) &= ch;
        *((eax + 0x65)) &= dh;
        if (*((eax + 0x65)) < 0) {
            goto label_15;
        }
        esi = *((ebx + 0x73)) * 0x206e6f69;
        __asm ("outsb dx, byte gs:[esi]");
        esp = *((ebp + 0x64)) * 0x7265500a;
    }
    dl |= *((fs:eax + 0x65));
    if (dl < 0) {
label_14:
        goto label_16;
    }
    do {
        esi = *((ebx + 0x73)) * 0x206e6f69;
    } while (ecx != 0);
    __asm ("outsb dx, byte gs:[esi]");
    esp = *((ebp + 0x64)) * 0x61762f0a;
    if (dl >= 0) {
        if (dl < 0) {
            goto label_17;
        }
        __asm ("outsb dx, byte [esi]");
        __asm ("das");
        if (dl != 0) {
            goto label_18;
        }
        __asm ("insd dword es:[edi], dx");
        if (dl !overflow 0) {
        }
label_11:
        __asm ("das");
        if (dl > 0) {
        }
        ebp++;
        edi--;
        esi++;
        cl |= *((ebp + 0x65));
        if (cl >= 0) {
            goto label_19;
        }
        __asm ("popal");
        *((gs:bp + 0x72)) &= ah;
        __asm ("outsd dx, dword [esi]");
        __asm ("insd dword es:[edi], dx");
        *(ebx) &= bl;
label_12:
        __asm ("insd dword es:[edi], dx");
        ebx -= *((ebx + 0x34));
        __asm ("insb byte es:[edi], dx");
        al |= *(eax);
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
    }
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
label_13:
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
label_15:
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
label_16:
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
label_17:
    *(eax) += al;
    *(eax) += al;
label_18:
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
label_19:
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
    bh += bh;
}
