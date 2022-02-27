/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nohup/ia32_elf/subject.exe @ 0x804807c */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_4h) {
    do {
label_1:
        ebx = 1;
        eax = 1;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
label_2:
        eax = 0x36;
        eax = sys_ioctl (0xea, 0x5401, 0x8048177);
        ebx = 0x36;
        eax |= eax;
        if (eax >= 0) {
            eax = 6;
            eax = sys_close (ebx);
            eax = 0x29;
            eax = sys_dup (0x804819b);
        }
        return eax;
        ecx = 0x29;
        ebp = esp + ecx*4;
        ebp += 4;
        ecx--;
    } while (ecx == 0);
    ecx = 1;
    ebx = 1;
    eax = 0x30;
    eax = sys_signal (0x1, 0x1);
    eax = 5;
    eax = sys_open (0x804816e, 0x442, 0x180);
    eax |= eax;
    if (eax >= 0) {
        goto label_5;
    }
    ecx = 0;
    do {
label_0:
        esi = *((ebp + ecx*4));
        ecx++;
        eax = *(esi);
        esi += 4;
    } while (eax != 0x454d4f48);
    al = *(esi);
    esi++;
    if (al != 0x3d) {
        goto label_0;
    }
    eax = 0xc;
    eax = sys_chdir (0xe);
    eax = 5;
    eax = sys_open (0x804816e, 0x442, 0x180);
    eax |= eax;
    if (eax < 0) {
        goto label_1;
    }
label_5:
    *(0x804819b) = eax;
    eax = 1;
    void (*0x8048054)() ();
    goto label_2;
    eax = 2;
    void (*0x8048054)() ();
    goto label_2;
    eax = 6;
    eax = sys_close (0x804819b);
    ecx = 0;
label_3:
    esi = *((ebp + ecx*4));
    esi |= esi;
    if (esi == 0) {
        goto label_1;
    }
    eax = *(esi);
    esi += 4;
    ecx++;
    if (eax != 0x48544150) {
        goto label_3;
    }
    al = *(esi);
    esi++;
    if (al != 0x3d) {
        goto label_3;
    }
    eax = 0;
    ecx = 0;
    ecx--;
    edi = esi;
    __asm ("repne scasb al, byte es:[edi]");
    edx = ecx;
    ecx = 0;
    ecx--;
    edi = *(esp);
    __asm ("repne scasb al, byte es:[edi]");
    ecx += edx;
label_4:
    edi = esp + ecx;
    do {
        al = *(esi);
        esi++;
        if (al == 0x3a) {
            goto label_6;
        }
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
label_6:
    esi = *((esp + 4));
    al = 0x2f;
    *(es:edi) = al;
    es:edi++;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    ebx = esp + ecx + 4;
    edi = ecx;
    eax = 0xb;
    eax = sys_execve (ebx, 0xe, 0xeb, esi);
    ecx = edi;
    goto label_4;
}
