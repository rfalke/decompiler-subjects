/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cmp/ia32_elf/subject.exe @ 0x804807b */
#include <stdint.h>
 
void entry0 (void) {
    if (ecx <= 2) {
        goto label_4;
    }
    ebp = 0;
    do {
label_0:
        esi |= esi;
        if (esi == 0) {
            goto label_5;
        }
        al = *(esi);
        esi++;
        if (al != 0x2d) {
            goto label_6;
        }
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_7;
        }
        if (al == 0x73) {
            goto label_8;
        }
        if (al != 0x6c) {
            goto label_4;
        }
        *(0x80482aa) |= 0x10;
    } while (1);
label_8:
    *(0x80482aa) |= 8;
    goto label_0;
label_7:
    esi--;
    esi--;
    *((ebp*4 + 0x8048286)) = esi;
    ebp |= ebp;
    if (ebp == 0) {
        ebp++;
        goto label_0;
label_6:
        esi--;
        *((ebp*4 + 0x8048286)) = esi;
        ecx = 0;
        eax = 5;
        eax = sys_open (0xe, ecx, edx);
        eax |= eax;
        if (eax < 0) {
            goto label_4;
        }
        *((ebp*4 + 0x804828e)) = eax;
        ebp |= ebp;
        if (ebp != 0) {
            goto label_5;
        }
        ebp++;
        goto label_0;
    }
label_5:
    *(0x80482a6) = 0x80484ae;
    ebp = 0;
    ebp--;
label_1:
    ebp++;
    edx = 2;
    ecx = 0;
    eax = 0x13;
    eax = sys_lseek (0xeb00804828e, ecx, 0x2);
    eax |= eax;
    if (eax != 0) {
        edi = *((ebp*4 + 0x804828e));
        ebp = 0;
        esi = 2;
        edx = 1;
        ecx = eax;
        ebx = 0;
        eax = 0;
        al = 0xc0;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        tmp_0 = eax;
        eax = ecx;
        ecx = tmp_0;
        ecx |= ecx;
        if (ecx >= 0) {
            goto label_9;
        }
    }
    esi = *(0x80482a6);
    do {
        ecx = esi;
        edx = 0x1000;
        esi += edx;
        eax = 0x2d;
        eax = sys_brk (0xe);
        eax = 3;
        eax = sys_read (0xeb00804828e, ecx, edx);
    } while (edx == eax);
    *(0x80482a6) = esi;
    eax += ecx;
    ecx = 3;
    eax -= ecx;
label_9:
    *((ebp*4 + 0x8048296)) = ecx;
    *((ebp*4 + 0x804829e)) = eax;
    ebp |= ebp;
    if (ebp == 0) {
        goto label_1;
    }
    esi = *(0x8048296);
    edi = *(0x804829a);
    ecx = *(0x804829e);
    if (ecx >= *(0x80482a2)) {
        ecx = 0x8048296;
        ecx = *(0x80482a2);
    }
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    edi = 0x804829a;
    edx = ecx;
    ecx |= ecx;
    if (ecx != 0) {
        goto label_10;
    }
    ecx = *(0x804829e);
    if (ecx == *(0x80482a2)) {
        goto label_11;
    }
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048266, 0xc);
    edi = *((edi - 0x10));
    esi = *((edi - 0x10));
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    *((esi - 1)) = 0xa;
    esi -= edi;
    eax = 4;
    eax = sys_write (ebx, 0xed, 0xe);
label_3:
    ebx = 1;
    do {
label_2:
        eax = 1;
        eax = sys_exit (0x1);
label_11:
        ebx = 0;
    } while (1);
label_4:
    ebx = 2;
    goto label_2;
label_10:
    ecx = *((edi + 8));
    ecx -= edx;
    edi = *(edi);
    al = 0xa;
    ebx = 0;
    do {
        ebx++;
        __asm ("repne scasb al, byte es:[edi]");
        ecx |= ecx;
    } while (ecx != 0);
    edi = 0x80482ae;
    esi = *(0x8048286);
    fcn_08048070 ();
    esi = *(0x804828a);
    fcn_08048070 ();
    esi = 0x8048272;
    fcn_08048070 ();
    esi = edi;
    fcn_0804804c ();
    esi = 0x804827f;
    fcn_08048070 ();
    esi = edi;
    fcn_0804804c ();
    al = 0xa;
    *(es:edi) = al;
    es:edi++;
    edi -= 0x80482ae;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80482ae, 0xed);
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cmp/ia32_elf/subject.exe @ 0x8048070 */
#include <stdint.h>
 
int8_t fcn_08048070 (void) {
    al = *(esi);
    esi++;
    do {
        *(es:edi) = al;
        es:edi++;
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    al = 0x20;
    *(es:edi) = al;
    es:edi++;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cmp/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t fcn_0804804c (void) {
    ebx = 0xa;
    ecx = 0x10;
    edi = esi;
    esi += ecx;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl += 0x30;
        *((esi + ecx)) = dl;
        ecx--;
        eax |= eax;
    } while (eax != 0);
    esi += ecx;
    ecx -= 0x10;
    ecx = -ecx;
    esi++;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    return eax;
}
