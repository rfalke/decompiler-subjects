/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ls/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int8_t entry0 (void) {
    int32_t var_1bh;
    int32_t var_13h;
    int32_t var_5h;
    int32_t var_4h;
    int32_t var_3h;
    *((ebp - 0x1b)) = 0x80534ac;
    edx = ebp;
    ecx = 0x5401;
    ebx = 1;
    eax = 0x36;
    eax = sys_ioctl (ebx, ecx, edx);
    *((ebp - 4)) = al;
    edx = 0;
    esi = 0x36;
    esi = 0x36;
    do {
        esi = 0x36;
        esi |= esi;
        if (esi == 0) {
            goto label_1;
        }
        if (*(esi) != 0x2d) {
            goto label_2;
        }
        al = *(esi);
        esi++;
        if (al == *(esi)) {
            goto label_3;
        }
label_0:
        al = *(esi);
        esi++;
        al |= al;
    } while (al == 0);
    edi = 0x80483e8;
    ecx = edx + 0xc;
    __asm ("repne scasb al, byte es:[edi]");
    *((ebp + ecx - 0xf)) = al;
    if (al != 0x43) {
        goto label_0;
    }
    *((ebp - 5)) = edx;
    goto label_0;
label_3:
    esi = 0x36;
    esi |= esi;
    if (esi == 0) {
label_1:
        esi = esp;
    }
label_2:
    edx = *(esp);
    do {
        fcn_080480c7 (edx);
        esi |= esi;
    } while (esi != 0);
    *((ebp - 3)) = 0x3a;
    esi = 0x80534ac;
    fcn_08048395 ();
    eax = 1;
    eax = sys_exit (ebp - 0x13);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ls/ia32_elf/subject.exe @ 0x8048395 */
#include <stdint.h>
 
void fcn_08048395 (int32_t arg_4h) {
    int32_t var_1bh;
    do {
        return;
label_0:
        fcn_080482a0 ();
        edx = *((ebp - 0x1b));
label_1:
    } while (esi >= edx);
    edx = 0;
    fcn_080480c7 (edx);
    esi = *((esp + 4));
    fcn_08048395 ();
    goto label_0;
    *((ebp - 0x1b)) = edx;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ls/ia32_elf/subject.exe @ 0x804827f */
#include <stdint.h>
 
int32_t fcn_0804827f (void) {
    int32_t var_5bh;
    int32_t var_55h;
    ecx = ebp - 0x5b;
    eax = 0x6b;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax = -eax;
    if (? < ?) {
        void (*0x8048261)() ();
    }
    ecx = *((ebp - 0x55));
    ecx >>= 0x1c;
    ecx &= 0xfffffffb;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ls/ia32_elf/subject.exe @ 0x8048354 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_08048354 (void) {
    int32_t var_ch;
    edx = *((ebp - 0xc));
    do {
        al = *(esi);
        esi++;
        dl |= dl;
        if (dl == 0) {
            ah = 0x5c;
            if (al != ah) {
                if (al == 0x22) {
                    goto label_0;
                }
                if (al <= 0x7e) {
                    if (al >= 0x20) {
                        goto label_1;
                    }
                }
                dh |= dh;
                if (dh == 0) {
                    goto label_2;
                }
                eax = rotate_right32 (eax, 8);
                *(es:edi) = al;
                es:edi++;
                al = 0xc;
                eax = rotate_left32 (eax, 2);
                *(es:edi) = al;
                es:edi++;
                eax >>= 0x1a;
                __asm ("aam 8");
                ax += 0x3030;
            }
label_0:
            dh |= dh;
            if (dh == 0) {
                goto label_1;
            }
            *(edi) = ah;
            edi++;
            goto label_1;
label_2:
            al = 0x3f;
        }
label_1:
        *(es:edi) = al;
        es:edi++;
        ecx--;
    } while (ecx != 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ls/ia32_elf/subject.exe @ 0x80482a0 */
#include <stdint.h>
 
void fcn_080482a0 (void) {
    uint32_t var_1h;
    edx = 0;
    edx++;
    if (dh != *((ebp - 1))) {
        *((ebp - 1)) = dh;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0xeb, edx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ls/ia32_elf/subject.exe @ 0x80480c7 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void fcn_080480c7 (int32_t arg_1h) {
    int32_t var_57h;
    int32_t var_55h;
    int32_t var_53h;
    int32_t var_51h;
    int32_t var_4bh;
    int32_t var_4ah;
    int32_t var_47h;
    int32_t var_3fh;
    int32_t var_33h;
    int32_t var_1bh;
    int32_t var_13h;
    uint32_t var_eh;
    uint32_t var_dh;
    uint32_t var_ah;
    uint32_t var_9h;
    uint32_t var_7h;
    uint32_t var_6h;
    uint32_t var_5h;
    uint32_t var_4h;
    int32_t var_3h;
    int32_t var_2h;
    int32_t var_1h;
    edi = ebp;
    al = 0xa;
    *(es:edi) = al;
    es:edi++;
    ebx = edi;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    esi = ebx;
    edi -= ebx;
    edi--;
    al = fcn_0804827f ();
    if (edi < 0) {
        goto label_6;
    }
    if (edi != 0) {
        goto label_3;
    }
    if (al != *((ebp - 0xe))) {
        goto label_3;
    }
    edx |= edx;
    if (edx == 0) {
        goto label_7;
    }
label_2:
    edi = *((ebp - 0x1b));
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    *((ebp - 0x1b)) = edi;
    ebx = edi + 0x1000;
    eax = 0x2d;
    eax = sys_brk (ebx);
label_6:
    return;
label_3:
    eax = 0x804946c;
    esi = 0x80483b9;
    tmp_0 = eax;
    eax = edi;
    edi = tmp_0;
    edx:eax = (int64_t) eax;
    if (dh != *((ebp - 9))) {
        eax = *((ebp - 0x57));
        dl = 8;
        void (*esi)() ();
        al = 0x20;
        *(es:edi) = al;
        es:edi++;
    }
    if (dh != *((ebp - 7))) {
        eax = *((ebp - 0x3f));
        eax >>= 1;
        dl = 4;
        void (*esi)() ();
        al = 0x20;
        *(es:edi) = al;
        es:edi++;
    }
    if (dh == *((ebp - 5))) {
        goto label_8;
    }
    edx = *((ebp - 0x53));
    al = dh;
    al >>= 4;
    ebx = esi + 0x26;
    __asm ("xlatb");
    *(es:edi) = al;
    es:edi++;
    ebx = esi + 0x22;
    ecx = 0x124;
    dh = rotate_right8 (dh, 1);
    do {
        al = 7;
        if (al < 0) {
            al &= cl;
        }
        if ((cl & 1) != 0) {
            dh <<= 1;
            if ((dh & 8) == 0) {
                goto label_9;
            }
            al += cl;
            al &= 0x1f;
            eax++;
        }
label_9:
        __asm ("xlatb");
        *(es:edi) = al;
        es:edi++;
        ecx >>= 1;
        if (ecx == 0) {
            goto label_10;
        }
        dl = rotate_left8 (dl, 1);
    } while (1);
label_8:
    goto label_11;
label_10:
    ebx = ecx + 3;
    edx = ecx + 4;
    esi = ebp - 0x51;
    ax = *(esi);
    esi += 2;
    do {
        ax = uint32_t (*esp)(uint32_t) (esi);
        ax = *(esi);
        esi += 2;
        dl = 7;
        ebx--;
    } while (ebx != 0);
    al &= 0xfb;
    eax = *((ebp - 0x47));
    dl = 0xa;
    if (al == 2) {
        dl = 5;
        eax = *((ebp - 0x4a));
        void (*esi)() ();
        al = *((ebp - 0x4b));
    }
    eax = void (*esi)() ();
    tmp_1 = eax;
    eax = ecx;
    ecx = tmp_1;
    eax = 0x4e;
    eax = sys_gettimeofday (0xed, ecx);
    eax = *(edi);
    eax -= *((ebp - 0x33));
    ebx = esi + 0x3d;
    do {
        edx:eax = (int64_t) eax;
        ebx--;
        cl = *((ebx + 4));
        ecx |= ecx;
        if (ecx == 0) {
            goto label_12;
        }
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        eax |= eax;
    } while (eax != 0);
    tmp_2 = eax;
    eax = edx;
    edx = tmp_2;
label_12:
    dl = 5;
    al = void (*esi)() ();
    __asm ("xlatb");
    *(es:edi) = al;
    es:edi++;
    al = 0x20;
    *(es:edi) = al;
    es:edi++;
label_11:
    fcn_08048354 ();
    eax = *((ebp - 0x55));
    eax >>= 0x1d;
    if (al == 5) {
        if (ah != *((ebp - 5))) {
            eax = 0x203e2d20;
            memset (edi, eax, ecx);
            ebx = ebp + 1;
            edx:eax = (int64_t) eax;
            dh = 0x10;
            eax = 0x55;
            eax = sys_readlink (ebx, ebp - 0x1b, edx);
            tmp_3 = eax;
            eax = ecx;
            ecx = tmp_3;
            tmp_4 = eax;
            eax = esi;
            esi = tmp_4;
            fcn_08048354 ();
        }
    } else {
        if (ah == *((ebp - 6))) {
            goto label_13;
        }
        al = *((eax + 0x80483d5));
        if (al == 0x2a) {
            if ((*((ebp - 0x53)) & 0x49) == 0) {
                goto label_13;
            }
        }
        *(es:edi) = al;
        es:edi++;
    }
label_13:
    al = 0xa;
    if (*((ebp - 4)) == 0) {
        ecx = edi;
        ecx -= *(esp);
        ecx >>= 3;
        ecx++;
        dl = *((ebp - 1));
        dl += cl;
        if (al < dl) {
            fcn_080482a0 ();
        }
        al = 9;
        if (al <= dl) {
            eax++;
            dl = 0;
        }
        if ((dl & 1) != 0) {
            *(es:edi) = al;
            es:edi++;
            edx++;
        }
        *((ebp - 1)) = dl;
    }
    *(es:edi) = al;
    es:edi++;
    *((ebp - 2)) = al;
    edx -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, 0xed);
    return;
    do {
        *((ebp - 0x13)) = eax;
        fcn_080482a0 ();
        *((edi + esi)) = 0xa3f3f20;
        edx = edi + 4;
        ebx = 2;
        eax = 4;
        eax = sys_write (0x2, 0xe, edx);
        __asm ("stc");
        return;
label_1:
        eax = 6;
        eax = sys_close (ebx);
        eax = 6;
label_0:
        eax = -eax;
    } while (edx < 0);
label_7:
    eax = 5;
    eax = sys_open (ebx, ecx, edx);
    eax |= eax;
    if (eax < 0) {
        goto label_0;
    }
    eax = *((ebp - 3));
    al |= al;
    if (al != 0) {
        *((ebp - 2)) = al;
        ecx = esi;
        edx = edi + 2;
        ah |= ah;
        ah = 0xa;
        *((esi + edi)) = eax;
        if (ah != 0) {
            ecx--;
            edx++;
        }
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, ecx, edx);
    }
    *((esi + edi)) = 0x2f;
    edi++;
    ebx = 4;
label_4:
    ecx = 0x80514ac;
    edx = 0;
    dh = 0x20;
    eax = 0;
    al = 0x8d;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax |= eax;
    if (eax <= 0) {
        goto label_1;
    }
label_5:
    __asm ("pushal");
    edx:eax = (int64_t) eax;
    edi += esi;
    ebx = esi;
    esi = ecx + 0xa;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        edx++;
        al |= al;
    } while (al != 0);
    edi = edx - 1;
    if (*(esi) == 0x2e) {
        if (al == *((ebp - 0xd))) {
            goto label_14;
        }
    }
    al = fcn_0804827f ();
    if (al >= *((ebp - 0xd))) {
        if (al == *((ebp - 0xd))) {
            if (al == *((ebp - 0xa))) {
                goto label_15;
            }
            al = *(esi);
            esi++;
            if (al == 0x2e) {
                al = *(esi);
                esi++;
                if (al == 0x2e) {
                    al = *(esi);
                    esi++;
                }
                al |= al;
                if (al == 0) {
                    goto label_16;
                }
            }
            esi = ebx;
            void (*0x80480f2)(uint32_t) (edi);
            goto label_2;
label_16:
        }
label_15:
        eax = void (*0x804810a)() ();
        goto label_3;
    }
label_14:
    __asm ("popal");
    edx = *((ecx + 8));
    ecx += edx;
    eax -= edx;
    if (eax <= 0) {
        goto label_4;
    }
    goto label_5;
}
