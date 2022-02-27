/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/od/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    ebx--;
    do {
        ebx++;
    } while (*(ebx) != 0);
    if (*((ebx - 2)) == 0x78) {
        *(0x804881c) = 2;
    }
label_0:
    ebp--;
    if (ebp == 0) {
        goto label_1;
    }
    if (*(ebx) == 0x6f2d) {
        goto label_2;
    }
    if (*(ebx) == 0x632d) {
        goto label_3;
    }
    if (*(ebx) == 0x782d) {
        goto label_4;
    }
    ecx = 0;
    eax = 5;
    eax = sys_open (ebx, ecx, edx);
    if (eax < 0) {
        void (*0x80480de)() ();
    }
    *(0x80483bb) = eax;
    goto label_0;
label_2:
    *(0x804881c) = 0;
    goto label_0;
label_3:
    *(0x804881c) = 1;
    goto label_0;
label_4:
    *(0x804881c) = 2;
    goto label_0;
label_1:
    if (*(0x804881c) != 1) {
        goto label_5;
    }
    do {
        void (*0x80480f8)() ();
        void (*0x804817c)() ();
    } while (1);
label_5:
    if (*(0x804881c) != 0) {
        goto label_6;
    }
    do {
        void (*0x80480f8)() ();
        fcn_08048281 ();
    } while (1);
    do {
label_6:
        void (*0x80480f8)() ();
        fcn_080482f0 ();
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/od/ia32_elf/subject.exe @ 0x8048281 */
#include <stdint.h>
 
int32_t fcn_08048281 (void) {
    ebx = *(0x80483c7);
    *((ebx + 0x80483cb)) = 0;
    edi = 0;
label_0:
    eax = *(0x80483bf);
    eax += edi;
    al &= 0xf;
    if (al == 0) {
        cl = 0x15;
        eax = fcn_08048264 ();
    }
    do {
        eax = 0;
        ax = *((edi + 0x80483cb));
        cl = 0x12;
        fcn_08048264 ();
        edi++;
        edi++;
        if (edi >= *(0x80483c7)) {
            goto label_1;
        }
        eax = edi;
        eax += *(0x80483bf);
        eax &= 0xf;
        if (eax == 0) {
            goto label_2;
        }
    } while (1);
label_1:
    eax = *(0x80483c7);
    eax &= 1;
    if (eax != 0) {
        edi--;
    }
    *(0x80483bf) += edi;
    al = 0xa;
    void (*0x8048138)() ();
label_2:
    al = 0xa;
    fcn_08048138 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/od/ia32_elf/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
int32_t fcn_080482f0 (void) {
    ebx = *(0x80483c7);
    *((ebx + 0x80483cb)) = 0;
    edi = 0;
label_0:
    eax = *(0x80483bf);
    eax += edi;
    al &= 0xf;
    if (al == 0) {
        cl = 0x20;
        eax = fcn_0804835d ();
    }
    do {
        ax = *((edi + 0x80483cb));
        cl = 0x10;
        fcn_0804835d ();
        edi++;
        edi++;
        if (edi >= *(0x80483c7)) {
            goto label_1;
        }
        eax = edi;
        eax += *(0x80483bf);
        eax &= 0xf;
        if (eax == 0) {
            goto label_2;
        }
    } while (1);
label_1:
    eax = *(0x80483c7);
    eax &= 1;
    if (eax != 0) {
        edi--;
    }
    *(0x80483bf) += edi;
    al = 0xa;
    void (*0x8048138)() ();
label_2:
    al = 0xa;
    fcn_08048138 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/od/ia32_elf/subject.exe @ 0x804835d */
#include <stdint.h>
 
int8_t fcn_0804835d (void) {
    esi = eax;
    do {
        cl -= 4;
        ebx = esi;
        ebx >>= cl;
        ebx &= 0xf;
        al = *((ebx + 0x8048381));
        fcn_08048138 ();
        cl |= cl;
        if (cl == 0) {
            goto label_0;
        }
    } while (1);
label_0:
    al = 0x20;
    return void (*0x8048138)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/od/ia32_elf/subject.exe @ 0x8048264 */
#include <stdint.h>
 
int32_t fcn_08048264 (void) {
    esi = eax;
    do {
        cl -= 3;
        if (cl < 0) {
            goto label_0;
        }
        eax = esi;
        eax >>= cl;
        al &= 7;
        al += 0x30;
        fcn_08048138 ();
    } while (1);
label_0:
    al = 0x20;
    return void (*0x8048138)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/od/ia32_elf/subject.exe @ 0x8048138 */
#include <stdint.h>
 
void fcn_08048138 (void) {
    do {
        ecx = 0x80483a9;
        edx = 0x12;
        ebx = 2;
        eax = 4;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        ebx = 1;
        eax = 1;
        eax = sys_exit (0x1);
        eax = 3;
        eax = sys_read (0x80483bb, 0x80483cb, 0x400);
label_0:
    } while (eax < 0);
    if (eax == 0) {
        goto label_5;
    }
    *(0x80483c7) = eax;
    return;
label_1:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80487cc, 0x80483c3);
    if (eax < 0) {
        goto label_0;
    }
    eax = 0;
    *(0x80483c3) = eax;
    return eax;
label_2:
    ebx = *(0x80483c3);
    *((ebx + 0x80487cc)) = al;
    ebx++;
    *(0x80483c3) = ebx;
    if (al == 0xa) {
        goto label_1;
    }
    return eax;
label_5:
    eax = *(0x80483bf);
    if (*(0x804881c) == 2) {
        cl = 0x20;
        fcn_0804835d ();
    } else {
        cl = 0x15;
        fcn_08048264 ();
    }
    al = 0xa;
    fcn_08048138 ();
    goto label_2;
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    edi = 0;
label_3:
    eax = *(0x80483bf);
    eax += edi;
    al &= 0xf;
    if (al == 0) {
        cl = 0x15;
        eax = fcn_08048264 ();
    }
    do {
        al = *((edi + 0x80483cb));
        if (al < 0x20) {
            goto label_6;
        }
        if (al > 0x7e) {
            goto label_7;
        }
        al = 0x20;
        fcn_08048138 ();
        goto label_2;
        fcn_08048138 ();
        goto label_2;
        al = 0x20;
        fcn_08048138 ();
        goto label_2;
        al = 0x20;
        fcn_08048138 ();
        goto label_2;
label_4:
        edi++;
        if (edi == *(0x80483c7)) {
            goto label_8;
        }
        eax = edi;
        al &= 0xf;
        al |= al;
    } while (al != 0);
label_8:
    al = 0xa;
    fcn_08048138 ();
    goto label_2;
    if (edi != *(0x80483c7)) {
        goto label_3;
    }
    eax = *(0x80483bf);
    eax += edi;
    *(0x80483bf) = eax;
    return;
label_6:
    esi = 0x8048391;
    if (al != 0xa) {
        if (al == 9) {
            goto label_9;
        }
        if (al == 0xa) {
            goto label_10;
        }
        if (al == 0) {
            goto label_11;
        }
        if (al == 0xc) {
            goto label_12;
        }
        if (al == 8) {
            goto label_13;
        }
label_7:
        eax &= 0xff;
        al = 0x5c;
        esi = eax;
        eax = esi;
        esi &= 0x3f;
        eax >>= 6;
        al += 0x30;
        fcn_08048138 ();
        goto label_2;
        eax = esi;
        esi &= 7;
        al >>= 3;
        al += 0x30;
        fcn_08048138 ();
        goto label_2;
        eax = esi;
        al += 0x30;
        fcn_08048138 ();
        goto label_2;
        goto label_4;
    }
    esi += 0xc;
    goto label_11;
label_9:
    esi += 0x14;
    goto label_11;
label_10:
    esi += 0x10;
    goto label_11;
label_12:
    esi += 8;
    goto label_11;
label_13:
    esi += 4;
label_11:
    ah = 4;
    do {
        al = *(esi);
        fcn_08048138 ();
        goto label_2;
        esi++;
        ah--;
    } while (ah != 0);
    goto label_4;
}
