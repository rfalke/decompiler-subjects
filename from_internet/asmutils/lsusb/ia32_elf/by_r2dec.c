/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lsusb/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint32_t entry0 (void) {
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    ecx = 0;
    ebx = 0x8048300;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax >= 0) {
        *((ebp - 4)) = eax;
        eax = 3;
        eax = sys_read (0xea, 0x804839b, 0x40000);
        if (eax != 0) {
            eax = 6;
            eax = sys_close (ebp - 4);
            ecx = 6;
            esi = 0x8048316;
            fcn_080482df ();
            esi = 0x804839b;
            eax = void (*0x804809d)() ();
        }
    } else {
        eax = 1;
        eax = sys_exit (0xea);
    }
    *((ebp - 4)) = esi;
    *((ebp - 8)) = ecx;
    *((ebp - 0xc)) = 0;
label_0:
    ecx = *((ebp - 8));
    if (ecx == 0) {
        goto label_1;
    }
    esi = *((ebp - 4));
    edi = 0x808839b;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        if (al == 0xa) {
            goto label_2;
        }
        __asm ("loop 0x80480c3");
    } while (1);
label_2:
    al = 0;
    *(es:edi) = al;
    es:edi++;
    *((ebp - 4)) = esi;
    *((ebp - 8)) = ecx;
    esi = *((ebp - 4));
    edi = 0x8048379;
    ecx = 8;
    eax = fcn_080482cf ();
    if (eax != 0) {
        goto label_3;
    }
    *((ebp - 0xc)) = 1;
    esi += 8;
    do {
        al = *(esi);
        esi++;
    } while (al != 0x20);
    esi--;
    *(esi) = 0;
    fcn_080482df ();
    esi = 0x8048389;
    al = fcn_080482df ();
    esi += 0x17;
    do {
        al = *(esi);
        esi++;
    } while (al != 0x20);
    esi--;
    *(esi) = 0;
    fcn_080482df ();
    esi = 0x8048389;
    al = fcn_080482df ();
    esi += 0xf;
    do {
        al = *(esi);
        esi++;
    } while (al == 0x20);
    do {
        al = *(esi);
        esi++;
    } while (al != 0x20);
    esi--;
    *(esi) = 0;
    fcn_080482df ();
    esi = 0x8048390;
    al = fcn_080482df ();
    esi += 8;
    do {
        al = *(esi);
        esi++;
    } while (al != 0x20);
    esi--;
    *(esi) = 0;
    eax = fcn_080482df ();
    ecx = 4;
    ecx -= eax;
    if (ecx <= 0) {
        goto label_4;
    }
    esi = 0x804838b;
    do {
        fcn_080482df ();
        __asm ("loop 0x804817c");
    } while (1);
label_4:
    esi = 0x8048398;
    fcn_080482df ();
    esi = 0x8048392;
    fcn_080482df ();
    esi = 0x804838b;
    fcn_080482df ();
    goto label_0;
label_3:
    esi = *((ebp - 4));
    edi = 0x8048370;
    ecx = 9;
    eax = fcn_080482cf ();
    if (eax != 0) {
        goto label_5;
    }
    esi += 9;
    do {
        al = *(esi);
        esi++;
    } while (al != 0x20);
    esi--;
    *(esi) = 0;
    if (*((ebp - 0xc)) > 0) {
        goto label_6;
    }
    ecx = 0x12;
    esi = 0x804838b;
    do {
        fcn_080482df ();
        __asm ("loop 0x80481de");
    } while (1);
label_6:
    fcn_080482df ();
    esi = 0x804838b;
    fcn_080482df ();
    goto label_0;
label_5:
    esi = *((ebp - 4));
    edi = 0x8048349;
    ecx = 0x11;
    eax = fcn_080482cf ();
    if (eax != 0) {
        goto label_7;
    }
    esi += 0x11;
    do {
        al = *(esi);
        esi++;
    } while (al != 0xa);
    esi--;
    *(esi) = 0;
    edi = esi;
    esi = 0x8048390;
    fcn_080482df ();
    fcn_080482df ();
    *(edi) = 0xa;
    esi = 0x8048392;
    fcn_080482df ();
    goto label_0;
label_7:
    esi = *((ebp - 4));
    edi = 0x804835a;
    ecx = 0xc;
    eax = fcn_080482cf ();
    if (eax != 0) {
        goto label_8;
    }
    esi += 0xc;
    do {
        al = *(esi);
        esi++;
    } while (al != 0xa);
    esi--;
    *(esi) = 0;
    edi = esi;
    fcn_080482df ();
    *(edi) = 0xa;
    goto label_0;
label_8:
    esi = *((ebp - 4));
    edi = 0x8048366;
    ecx = 0xa;
    eax = fcn_080482cf ();
    if (eax != 0) {
        goto label_0;
    }
    esi += 0x3e;
    do {
        al = *(esi);
        esi++;
    } while (al != 0xa);
    esi--;
    *(esi) = 0;
    edi = esi;
    esi = 0x8048394;
    fcn_080482df ();
    fcn_080482df ();
    *(edi) = 0xa;
    esi = 0x8048396;
    fcn_080482df ();
    esi = 0x8048387;
    fcn_080482df ();
    goto label_0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lsusb/ia32_elf/subject.exe @ 0x80482df */
#include <stdint.h>
 
void fcn_080482df (void) {
    if (esi == 0) {
        goto label_0;
    }
    ecx = 0;
    do {
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_1;
        }
        ecx++;
    } while (1);
label_1:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0xec);
    eax = 4;
    ecx = 4;
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lsusb/ia32_elf/subject.exe @ 0x80482cf */
#include <stdint.h>
 
int32_t fcn_080482cf (void) {
    eax = 0;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    if (? != ?) {
        eax -= eax;
        eax |= 1;
    }
    edi = esi;
    return eax;
}
