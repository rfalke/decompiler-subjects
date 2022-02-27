/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xeba2 */
#include <stdint.h>
 
int16_t entry0 (void) {
    ah = 0x4a;
    bx = 0x186a;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = 0;
    ds = 0;
    fcn_0000e7c8 ();
    cx = 0x64;
    do {
        fcn_0000eac5 ();
        __asm ("loop 0xebb4");
    } while (1);
    fcn_0000e7c8 ();
    fcn_0000eaa0 ();
    al = 0x5e;
    __asm ("out 0x21, al");
    do {
        fcn_0000ea47 ();
        fcn_0000e864 ();
        fcn_0000eac5 ();
        fcn_0000e8c5 ();
        fcn_0000eadc ();
        fcn_0000e9fe ();
        al = fcn_0000e7fb ();
        __asm ("in al, 0x60");
    } while (al != 1);
    al = 0;
    __asm ("out 0x21, al");
    fcn_0000e7c8 ();
    ah = 9;
    dx = 0xe6b4;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ah = 0x4c;
    al = 0;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xe7c8 */
#include <stdint.h>
 
int8_t fcn_0000e7c8 (void) {
    ah = 0;
    al = 3;
    /* BIOS: video service */
    eax = syscall_10h (ebx, ecx, edx, esi, edi, edp);
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xeac5 */
#include <stdint.h>
 
void fcn_0000eac5 (void) {
    dx = 0x3da;
    do {
        __asm ("in al, dx");
    } while ((al & 8) == 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xeaa0 */
#include <stdint.h>
 
int8_t fcn_0000eaa0 (void) {
    fcn_0000e7c1 ();
    fcn_0000e7cf ();
    fcn_0000e7e4 ();
    fcn_0000e8f8 ();
    *(0xdb66) = 0;
    *(0xdb68) = 0;
    dx = 0x3c8;
    al = 0xfe;
    __asm ("out dx, al");
    dx++;
    al = 0;
    __asm ("out dx, al");
    __asm ("out dx, al");
    __asm ("out dx, al");
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xe7c1 */
#include <stdint.h>
 
int8_t fcn_0000e7c1 (void) {
    ah = 0;
    al = 0x13;
    /* BIOS: video service */
    eax = syscall_10h (ebx, ecx, edx, esi, edi, edp);
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xe7cf */
#include <stdint.h>
 
int16_t fcn_0000e7cf (void) {
    ax = 0;
    es = 0;
    dx = 0xd5c0;
    ah = 0x10;
    al = 0x12;
    bx = 0;
    cx = 0xff;
    /* BIOS: video service */
    eax = syscall_10h (ebx, ecx, edx, esi, edi, edp);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xe7e4 */
#include <stdint.h>
 
int16_t fcn_0000e7e4 (void) {
    ax = 0;
    ds = 0;
    si = 0x8c0;
    ax = 0xa000;
    es = 0xa000;
    di = 0x3200;
    cx = 0x9100;
    do {
        *(es:di) = *(si);
        cx--;
        si++;
        es:di++;
    } while (cx != 0);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xe8f8 */
#include <stdint.h>
 
int16_t fcn_0000e8f8 (void) {
    do {
        ax = 0;
        ds = 0;
        si = 0xe055;
        si += *(0xdb6a);
        ax = *(si);
        if (al != 0) {
            goto label_1;
        }
        *(0xdb60) = 0;
        *(0xdb6a) = 0;
    } while (1);
label_1:
    if (al == 0x20) {
        bx = 0xa00;
    } else {
        if (al == 0x30) {
            bx = 0xd0;
        } else {
            if (al == 0x31) {
                bx = 0xd8;
            } else {
                if (al == 0x32) {
                    bx = 0xe0;
                } else {
                    if (al == 0x33) {
                        bx = 0xe8;
                    } else {
                        if (al == 0x34) {
                            bx = 0xf0;
                        } else {
                            if (al == 0x35) {
                                bx = 0xf8;
                            } else {
                                if (al == 0x36) {
                                    bx = 0x100;
                                } else {
                                    if (al == 0x37) {
                                        bx = 0x108;
                                    } else {
                                        if (al == 0x38) {
                                            bx = 0x110;
                                        } else {
                                            if (al == 0x39) {
                                                bx = 0x118;
                                            } else {
                                                if (al == 0x3f) {
                                                    bx = 0x120;
                                                } else {
                                                    if (al == 0x21) {
                                                        bx = 0x128;
                                                    } else {
                                                        if (al == 0x2e) {
                                                            bx = 0x130;
                                                        } else {
                                                            if (al == 0x2c) {
                                                                bx = 0x138;
                                                            } else {
                                                                ax -= 0x41;
                                                                ah = 0;
                                                                dx = 8;
                                                                dx:ax = ax * dx;
                                                                bx = ax;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    ax = 0;
    ds = 0;
    si = 0x99c0;
    si += *(0xdb60);
    si += bx;
    ax = 0xa000;
    es = 0xa000;
    di = 0xd97e;
    al = 0;
    cx = si;
    dx = di;
label_0:
    ah = 8;
    do {
        *(es:di) = *(si);
        si++;
        es:di++;
        si += 0x13f;
        di += 0x13f;
        ah--;
    } while (ah != 0);
    si = cx;
    di = dx;
    si++;
    di++;
    if (al != 1) {
        si = cx;
        si++;
        al = void (*0xe9e7)() ();
        al++;
        goto label_0;
    }
    if (*(0xdb60) != 7) {
        *(0xdb60)++;
        return ax;
    }
    *(0xdb60) = 0;
    *(0xdb6a)++;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xea47 */
#include <stdint.h>
 
int16_t fcn_0000ea47 (void) {
    ax = 0;
    ds = 0;
    si = 0xd8c0;
    si += *(0xdb68);
    ax = *(si);
    ax += 0x64;
    *(0xdb64) = ax;
    si = 0xd920;
    si += *(0xdb66);
    ax = *(si);
    ax += 0x44;
    *(0xdb62) = ax;
    if (*(0xdb68) == 0x5e) {
        *(0xdb68) = 0;
    } else {
        *(0xdb68)++;
        *(0xdb68)++;
    }
    if (*(0xdb66) == 0xfe) {
        *(0xdb66) = 0;
        return ax;
    }
    *(0xdb66)++;
    *(0xdb66)++;
    *(0xdb72) = 0;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xe864 */
#include <stdint.h>
 
int16_t fcn_0000e864 (void) {
    ax = 0;
    ds = 0;
    si = 0;
    ax = 0xa000;
    es = 0xa000;
    bx = *(0xdb62);
    ax = *(0xdb64);
    dx = 0x140;
    dx:ax = ax * dx;
    bx += ax;
    di = bx;
    *(0xdb6c) = si;
    *(0xdb6e) = di;
    *(0xdb5e) = 0;
label_0:
    cx = 0x39;
    do {
        al = *(si);
        if (al != 0) {
            *(es:di) = al;
        }
        si++;
        di++;
        __asm ("loop 0xe892");
    } while (1);
    *(0xdb5e)++;
    ax = *(0xdb5e);
    dx = 0x140;
    dx:ax = ax * dx;
    si = *(0xdb6c);
    di = *(0xdb6e);
    si += ax;
    di += ax;
    if (*(0xdb5e) != 6) {
        goto label_0;
    }
    *(0xdb5e) = 0;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xe8c5 */
#include <stdint.h>
 
int16_t fcn_0000e8c5 (void) {
    ax = 0xa000;
    es = 0xa000;
    ds = ax;
    di = 0xd840;
    si = 0xd842;
    al = 0;
    ah = 8;
label_0:
    cx = 0x13e;
    do {
        *(es:di) = *(si);
        cx--;
        si++;
        es:di++;
    } while (cx != 0);
    di += 2;
    si += 2;
    ah--;
    if (ah != 0) {
        goto label_0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xeadc */
#include <stdint.h>
 
void fcn_0000eadc (void) {
    if (*(0xdb77) != 1) {
        if (*(0xdb7c) != 0x3f) {
            *(0xdb7c)++;
            fcn_0000eace ();
            return;
        }
        if (*(0xdb76) != 0xff) {
            *(0xdb76)++;
            return;
        }
        *(0xdb77) = 1;
        *(0xdb76) = 0;
        return;
    }
    if (*(0xdb7c) != 0) {
        fcn_0000eace ();
        *(0xdb7c)--;
        return;
    }
    fcn_0000eb1f ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xeace */
#include <stdint.h>
 
int8_t fcn_0000eace (void) {
    dx = 0x3c8;
    al = 0xfd;
    __asm ("out dx, al");
    dx++;
    al = *(0xdb7c);
    __asm ("out dx, al");
    __asm ("out dx, al");
    __asm ("out dx, al");
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xeb1f */
#include <stdint.h>
 
int16_t fcn_0000eb1f (void) {
    ax = 0;
    ds = 0;
    si = 0xdb7d;
    si += *(0xdb78);
    ax = *(si);
    if (al == 0x20) {
        bx = 0x1400;
    } else {
        ax--;
        dx = 8;
        dx:ax = ax * dx;
        ah = 0;
        bx = ax;
    }
    ax = 0;
    ds = 0;
    si = 0xadc0;
    si += bx;
    ax = 0xa000;
    es = 0xa000;
    ah = 0;
    al = *(0xdb7b);
    dx = 8;
    dx:ax = ax * dx;
    di = 0xf00;
    di += ax;
    dx = 0x10;
label_0:
    cx = 8;
    do {
        *(es:di) = *(si);
        cx--;
        si++;
        es:di++;
    } while (cx != 0);
    si += 0x138;
    di += 0x138;
    dx--;
    if (dx != 0) {
        goto label_0;
    }
    if (*(0xdb7b) != 0x27) {
        *(0xdb7b)++;
        *(0xdb78)++;
        return ax;
    }
    *(0xdb7b) = 0;
    *(0xdb77) = 0;
    if (*(0xdb78) <= 0x4b0) {
        *(0xdb78)++;
        return ax;
    }
    *(0xdb78) = 0;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xe9fe */
#include <stdint.h>
 
int8_t fcn_0000e9fe (void) {
    do {
label_0:
        if (*(0xdb5d) == 1) {
            goto label_1;
        }
        dx = 0x3c8;
        al = 0xfe;
        __asm ("out dx, al");
        dx++;
        al = *(0xdb5c);
        __asm ("out dx, al");
        __asm ("out dx, al");
        __asm ("out dx, al");
        if (*(0xdb5c) != 0x3f) {
            *(0xdb5c)++;
            return al;
        }
        *(0xdb5d) = 1;
    } while (1);
label_1:
    dx = 0x3c8;
    al = 0xfe;
    __asm ("out dx, al");
    dx++;
    al = *(0xdb5c);
    __asm ("out dx, al");
    __asm ("out dx, al");
    __asm ("out dx, al");
    if (*(0xdb5c) != 0xf) {
        *(0xdb5c)--;
        return al;
    }
    *(0xdb5d) = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xe7fb */
#include <stdint.h>
 
int16_t fcn_0000e7fb (void) {
    ax = 0;
    ds = 0;
    bx = 0x8c0;
    bx += *(0xdb62);
    ax = *(0xdb64);
    ax -= 0x28;
    dx = 0x140;
    dx:ax = ax * dx;
    bx += ax;
    si = bx;
    ax = 0xa000;
    es = 0xa000;
    bx = *(0xdb62);
    ax = *(0xdb64);
    dx = 0x140;
    dx:ax = ax * dx;
    bx += ax;
    di = bx;
    *(0xdb6c) = si;
    *(0xdb6e) = di;
    *(0xdb5e) = 0;
label_0:
    cx = 0x39;
    do {
        *(es:di) = *(si);
        cx--;
        si++;
        es:di++;
    } while (cx != 0);
    *(0xdb5e)++;
    ax = *(0xdb5e);
    dx = 0x140;
    dx:ax = ax * dx;
    si = *(0xdb6c);
    di = *(0xdb6e);
    si += ax;
    di += ax;
    if (*(0xdb5e) != 6) {
        goto label_0;
    }
    *(0xdb5e) = 0;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x6d9c */
#include <stdint.h>
 
void fcn_00006d9c (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x3efc */
#include <stdint.h>
 
int32_t fcn_00003efc (int16_t arg_79h, int16_t arg3, int16_t arg1) {
    int16_t var_6a4ah;
    int16_t var_6666h;
    bx = arg3;
    ax = arg1;
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
    __asm ("das");
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("pushaw");
    __asm ("popaw");
    __asm ("bound sp, dword [bp + di + 0x64]");
    __asm ("das");
    *(0x2fa3) = ax;
    __asm ("insb byte es:[di], dx");
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    __asm ("outsw dx, word [si]");
    if (? overflow ?) {
        void (*0x3ffb)() ();
    }
    if (? !overflow ?) {
        void (*0x3ffe)() ();
    }
    if (? >= ?) {
        void (*0x4002)() ();
    }
    if (? != ?) {
        void (*0x4006)() ();
    }
    if (? > ?) {
        void (*0x400a)() ();
    }
    if (? >= ?) {
        void (*0x400d)() ();
    }
    __asm ("das");
    __asm ("lcall 0x9799:0x9999");
    tmp_0 = ax;
    ax = di;
    di = tmp_0;
    eax = (int32_t) ax;
    tmp_1 = ax;
    ax = si;
    si = tmp_1;
    tmp_2 = ax;
    ax = bx;
    bx = tmp_2;
    tmp_3 = ax;
    ax = cx;
    cx = tmp_3;
    tmp_4 = ax;
    ax = dx;
    dx = tmp_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x3a20 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void fcn_00003a20 (uint32_t arg3, int16_t arg4, int16_t arg2, uint32_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    *((bx + si)) &= ah;
    *((bx + si)) &= ah;
    *((bx + di)) &= sp;
    ah &= *((bp + si));
    al &= 0x24;
    ax &= 0x2626;
    __asm ("daa");
    *((bx + si)) -= ch;
    *((bp + si)) -= bp;
    ch -= *((bp + di));
    al -= 0x2d;
    __asm ("das");
    *((bx + di)) ^= dh;
    *((bp + si)) ^= si;
    si ^= *(si);
    ax ^= 0x3635;
    __asm ("aaa");
    __asm ("aas");
    cx++;
    cx++;
    dx++;
    bx++;
    bp++;
    si++;
    di++;
    ax--;
    ax--;
    cx--;
    dx--;
    bx--;
    bp--;
    si--;
    di--;
    di--;
    ax = di;
    cx = di;
    dx = di;
    bx = di;
    __asm ("pushaw");
    __asm ("popaw");
    __asm ("bound sp, dword [bp + di + 0x64]");
    __asm ("insw word es:[di], dx");
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    __asm ("outsw dx, word [si]");
    if (di !overflow 0) {
        if (di < 0) {
            goto label_0;
        }
        if (di == 0) {
            goto label_1;
        }
        if (di <= 0) {
            goto label_2;
        }
        if (di < 0) {
            goto label_3;
        }
        if (di >= 0) {
            goto label_4;
        }
        __asm ("wait");
        tmp_0 = ax;
        ax = bp;
        bp = tmp_0;
        tmp_1 = ax;
        ax = sp;
        sp = tmp_1;
        tmp_2 = ax;
        ax = sp;
        sp = tmp_2;
        tmp_3 = ax;
        ax = sp;
        sp = tmp_3;
        tmp_4 = ax;
        ax = dx;
        dx = tmp_4;
        tmp_5 = ax;
        ax = cx;
        cx = tmp_5;
        tmp_6 = ax;
        ax = sp;
        sp = tmp_6;
        tmp_7 = ax;
        ax = dx;
        dx = tmp_7;
        tmp_8 = ax;
        ax = cx;
        cx = tmp_8;
        cl = 0x8f;
        __asm ("into");
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        al += bl;
        tmp_9 = ax;
        ax = bp;
        bp = tmp_9;
        cl = 0x94;
        tmp_10 = ax;
        ax = sp;
        sp = tmp_10;
        tmp_11 = ax;
        ax = bx;
        bx = tmp_11;
        cs = *((bx - 0x6b6e));
        tmp_12 = ax;
        ax = sp;
        sp = tmp_12;
        tmp_13 = ax;
        ax = si;
        si = tmp_13;
        edx:eax = (int64_t) eax;
        __asm ("wait");
        __asm ("pushf");
        __asm ("wait");
        if (al >= 0) {
            goto label_5;
        }
        if (al > 0) {
            goto label_5;
        }
        if (al <= 0) {
            goto label_5;
        }
        if (al == 0) {
            goto label_6;
        }
        if (al < 0) {
            goto label_6;
        }
        if (al overflow 0) {
            goto label_6;
        }
        __asm ("outsb dx, byte [si]");
        __asm ("insw word es:[di], dx");
        __asm ("insw word es:[di], dx");
        __asm ("insb byte es:[di], dx");
        bp = *((bp + si + 0x69)) * 0x68;
    }
label_0:
    __asm ("bound esp, qword fs:[bp + si + 0x61]");
label_1:
    __asm ("bound sp, dword [bp + si + 0x61]");
label_2:
    __asm ("pushaw");
label_3:
label_4:
    di--;
    si--;
    bp--;
    bp--;
    bx--;
    bx--;
    dx--;
    cx--;
    ax--;
    di++;
    di++;
    bp++;
    bx++;
    dx++;
    cx++;
    ax++;
    __asm ("aas");
    __asm ("aas");
    __asm ("aaa");
    ax ^= 0x3334;
    si ^= *((bp + si));
    *((bx + si)) ^= si;
    *(bx) ^= ch;
    ax -= 0x2b2c;
    bp -= *((bp + si));
    *((bx + di)) -= bp;
    *(bx) -= ah;
    ax &= 0x2425;
    ah &= *((bp + si));
    *((bx + si)) &= sp;
    *((bx + si)) &= ah;
label_5:
label_6:
    *((bx + si)) &= ah;
    *((bx + di)) &= ah;
    *((bp + si)) &= sp;
    al &= 0x25;
    ax &= 0x2626;
    __asm ("daa");
    *((bx + si)) -= ch;
    *((bp + si)) -= bp;
    bp -= *((bp + di));
    al -= 0x2d;
    __asm ("das");
    __asm ("das");
    *((bx + di)) ^= dh;
    dh ^= *((bp + di));
    si ^= *(si);
    ax ^= 0x3736;
    ax++;
    ax++;
    cx++;
    dx++;
    bx++;
    bx++;
    bp++;
    si++;
    si++;
    di++;
    ax--;
    cx--;
    dx--;
    bx--;
    bp--;
    si--;
    di--;
    ax = di;
    cx = di;
    dx = di;
    bx = di;
    bx = di;
    __asm ("pushaw");
    __asm ("popaw");
    __asm ("bound sp, dword [bp + di + 0x63]");
    __asm ("insw word es:[di], dx");
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    __asm ("outsw dx, word [si]");
    if (di !overflow 0) {
        if (di < 0) {
            goto label_7;
        }
        if (di == 0) {
            goto label_8;
        }
        if (di <= 0) {
            goto label_9;
        }
        if (di > 0) {
            goto label_10;
        }
        if (di >= 0) {
            goto label_11;
        }
        edx:eax = (int64_t) eax;
        edx:eax = (int64_t) eax;
        edx:eax = (int64_t) eax;
        eax = (int32_t) ax;
        tmp_14 = ax;
        ax = si;
        si = tmp_14;
        tmp_15 = ax;
        ax = bp;
        bp = tmp_15;
        tmp_16 = ax;
        ax = sp;
        sp = tmp_16;
        tmp_17 = ax;
        ax = bx;
        bx = tmp_17;
        tmp_18 = ax;
        ax = dx;
        dx = tmp_18;
        tmp_19 = ax;
        ax = cx;
        cx = tmp_19;
        tmp_20 = ax;
        ax = sp;
        sp = tmp_20;
        tmp_21 = ax;
        ax = bx;
        bx = tmp_21;
        tmp_22 = ax;
        ax = dx;
        dx = tmp_22;
        __asm ("scasw ax, word es:[di]");
        cs = sp;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        ch += dl;
        tmp_23 = ax;
        ax = bp;
        bp = tmp_23;
        dl = 0x93;
        tmp_24 = ax;
        ax = sp;
        sp = tmp_24;
        tmp_25 = ax;
        ax = bx;
        bx = tmp_25;
    }
    bp = *((bx + di + 0x68)) * 0x6667;
label_7:
    __asm ("bound esp, qword fs:[bp + si + 0x61]");
label_8:
    __asm ("bound sp, dword [bp + si + 0x61]");
label_9:
    __asm ("pushaw");
label_10:
label_11:
    di--;
    si--;
    bp--;
    bx--;
    dx--;
    cx--;
    ax--;
    di++;
    si++;
    bp++;
    dx++;
    dx++;
    cx++;
    ax++;
    __asm ("aas");
    __asm ("aaa");
    __asm ("aaa");
    ax ^= 0x3334;
    dh ^= *((bx + di));
    *((bx + si)) ^= si;
    __asm ("das");
    ax -= 0x2c2c;
    bp -= *((bp + si));
    *((bx + di)) -= bp;
    *(bx) -= ah;
    ax &= 0x2424;
    ah &= *((bx + di));
    *((bx + si)) &= sp;
    *(bx) &= bl;
    ax -= 0x1d1d;
    ax -= 0x1d1d;
    ax -= 0x1e1d;
    *((bx + si)) &= ah;
    *((bx + di)) &= sp;
    ah &= *((bp + si));
    al &= 0x25;
    __asm ("daa");
    *((bx + di)) -= ch;
    ch -= *((bp + si));
    bp -= *(si);
    ax -= 0x2e2e;
    __asm ("das");
    *((bx + di)) ^= dh;
    *((bp + si)) ^= si;
    si ^= *(si);
    ax ^= 0x3636;
    __asm ("aaa");
    __asm ("aas");
    ax++;
    cx++;
    cx++;
    bx++;
    bp++;
    si++;
    di++;
    ax--;
    cx--;
    dx--;
    dx--;
    bx--;
    bp--;
    si--;
    di--;
    ax = di;
    cx = di;
    cx = di;
    dx = di;
    bx = di;
    __asm ("pushaw");
    __asm ("popaw");
    __asm ("bound sp, dword [bp + si + 0x63]");
    __asm ("insw word es:[di], dx");
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    __asm ("outsw dx, word [si]");
    if (di !overflow 0) {
        if (di < 0) {
            goto label_12;
        }
        if (di >= 0) {
            goto label_13;
        }
        if (di != 0) {
            goto label_14;
        }
        if (di > 0) {
            goto label_15;
        }
        if (di >= 0) {
            goto label_16;
        }
        bx ^= *((bx + di - 0x6666));
        eax = (int32_t) ax;
        tmp_26 = ax;
        ax = bp;
        bp = tmp_26;
        tmp_27 = ax;
        ax = di;
        di = tmp_27;
        tmp_28 = ax;
        ax = si;
        si = tmp_28;
        tmp_29 = ax;
        ax = sp;
        sp = tmp_29;
        tmp_30 = ax;
        ax = dx;
        dx = tmp_30;
        tmp_31 = ax;
        ax = cx;
        cx = tmp_31;
        tmp_32 = ax;
        ax = bx;
        bx = tmp_32;
        tmp_33 = ax;
        ax = bx;
        bx = tmp_33;
        al = 0x8f;
        __asm ("int3");
    }
label_12:
    __asm ("arpl word fs:[bp + si + 0x61], sp");
label_13:
    __asm ("arpl word [bp + si + 0x61], sp");
    __asm ("popaw");
label_14:
    __asm ("pushaw");
    di = 0x6667;
    si = 0x6667;
label_15:
label_16:
    di--;
    si--;
    bp--;
    bx--;
    dx--;
    cx--;
    ax--;
    di++;
    di++;
    si++;
    bp++;
    bx++;
    dx++;
    cx++;
    cx++;
    ax++;
    __asm ("aas");
    __asm ("aaa");
    ax ^= 0x3435;
    si ^= *((bp + si));
    *((bx + si)) ^= si;
    __asm ("das");
    __asm ("das");
    ax -= 0x2b2c;
    bp -= *((bp + si));
    *((bx + si)) -= bp;
    *(bx) -= ah;
    ax &= 0x2424;
    ah &= *((bx + di));
    *((bx + si)) &= sp;
    ax -= 0x1d1d;
    ax -= 0x1c1c;
    al -= 0x1c;
    al -= 0x1c;
    ax -= 0x1d1d;
    ax -= 0x1e1d;
    *((bx + di)) &= ah;
    *((bp + si)) &= sp;
    ah &= *((bp + di));
    al &= 0x24;
    ax &= 0x2726;
    *((bx + si)) -= ch;
    *((bp + si)) -= bp;
    bp -= *((bp + di));
    al -= 0x2d;
    *((cs:bx + si)) ^= dh;
    *((bp + si)) ^= si;
    si ^= *(si);
    al ^= 0x35;
    __asm ("aaa");
    ax++;
    cx++;
    cx++;
    dx++;
    bx++;
    bp++;
    si++;
    di++;
    di++;
    ax--;
    dx--;
    dx--;
    bx--;
    bp--;
    si--;
    di--;
    di--;
    ax = di;
    cx = di;
    dx = di;
    bx = di;
    __asm ("pushaw");
    __asm ("popaw");
    __asm ("popaw");
    __asm ("bound sp, dword [bp + di + 0x64]");
    __asm ("insb byte es:[di], dx");
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    __asm ("outsw dx, word [si]");
    if (di !overflow 0) {
        if (di < 0) {
            goto label_17;
        }
        if (di == 0) {
            goto label_18;
        }
        if (di <= 0) {
            goto label_19;
        }
        if (di > 0) {
            goto label_20;
        }
        if (di >= 0) {
            goto label_21;
        }
        bl ^= *((bx + si - 0x6667));
        tmp_34 = ax;
        ax = di;
        di = tmp_34;
        tmp_35 = ax;
        ax = bp;
        bp = tmp_35;
        tmp_36 = ax;
        ax = bp;
        bp = tmp_36;
        eax = (int32_t) ax;
        tmp_37 = ax;
        ax = di;
        di = tmp_37;
        tmp_38 = ax;
        ax = bx;
        bx = tmp_38;
    }
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
label_17:
    __asm ("das");
    __asm ("das");
    __asm ("das");
label_18:
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
label_19:
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
label_20:
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
label_21:
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    *(bx) ^= ch;
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    __asm ("das");
    ax -= 0x6768;
    __asm ("arpl word fs:[edx + 0x61], sp");
    __asm ("pushaw");
    di = 0x32a2a332;
    si = 0x32a2a332;
    si = 0x32a2a332;
    ax -= 0xb8ba;
    ax -= 0x5557;
    di--;
    si--;
    bp--;
    bp--;
    bx--;
    dx--;
    cx--;
    ax -= 0xc6c6;
    ax -= 0x4344;
    bx++;
    dx++;
    cx++;
    ax++;
    __asm ("aas");
    __asm ("aas");
    __asm ("aaa");
    ax -= 0xd3d3;
    al -= 0x33;
    dh ^= *((bx + di));
    *((bx + si)) ^= dh;
    __asm ("das");
    ax -= 0x2b2c;
    ch -= *((bp + si));
    *((bx + si)) -= bp;
    __asm ("daa");
    ax -= 0xdfde;
    ax -= 0x2222;
    *((bx + si)) &= sp;
    *(bx) &= bl;
    ax -= 0x1c1c;
    bx -= *((bp + di));
    bx -= *((bp + di));
    ax -= 0xeceb;
    ax -= 0x1b1a;
    bx -= *((bp + di));
    al -= 0x1c;
    al -= 0x1c;
    ax -= 0x1e1d;
    *((bx + si)) &= ah;
    *((bp + si)) &= sp;
    ax -= 0xe6e9;
    ax -= 0x2727;
    __asm ("daa");
    *((bx + di)) -= ch;
    ch -= *((bp + di));
    bp -= *(si);
    ax -= 0x2f2e;
    *((bx + di)) ^= dh;
    *((bp + si)) ^= si;
    ax -= 0xd6d6;
    ax -= 0x3736;
    ax++;
    cx++;
    dx++;
    bx++;
    ax -= 0xc9cb;
    ax -= 0x4948;
    dx--;
    bx--;
    bp--;
    bp--;
    di--;
    di--;
    ax -= 0xb7b7;
    ax -= 0x5b5a;
    __asm ("pushaw");
    __asm ("popaw");
    __asm ("bound sp, dword [bp + di + 0x64]");
    eax -= 0x6c2da3a3;
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    __asm ("outsw dx, word [si]");
    __asm ("outsw dx, word [si]");
    if (eax overflow 0) {
        if (eax < 0) {
            goto label_22;
        }
        if (eax == 0) {
            goto label_23;
        }
        if (eax <= 0) {
            goto label_24;
        }
        if (eax > 0) {
            goto label_25;
        }
        if (eax < 0) {
            edx:eax = (int64_t) eax;
            edx:eax = (int64_t) eax;
            __asm ("lcall 0x9797:0x9899");
            tmp_39 = ax;
            ax = si;
            si = tmp_39;
            tmp_40 = ax;
            ax = sp;
            sp = tmp_40;
        }
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bp - 0x6a4a)) = rotate_left8 (*((bp - 0x6a4a)), cl);
        tmp_41 = ax;
        ax = dx;
        dx = tmp_41;
        tmp_42 = ax;
        ax = dx;
        dx = tmp_42;
        tmp_43 = ax;
        ax = cx;
        cx = tmp_43;
        tmp_44 = ax;
        ax = bx;
        bx = tmp_44;
        tmp_45 = ax;
        ax = bx;
        bx = tmp_45;
        tmp_46 = ax;
        ax = bp;
        bp = tmp_46;
        tmp_47 = ax;
        ax = si;
        si = tmp_47;
        tmp_48 = ax;
        ax = di;
        di = tmp_48;
        tmp_49 = ax;
        ax = si;
        si = tmp_49;
        bh -= *((bp + si + 0x79));
        if (bh < 0) {
            goto label_26;
        }
        if (bh > 0) {
            goto label_26;
        }
        if (bh != 0) {
            goto label_26;
        }
        if (bh >= 0) {
            goto label_26;
        }
        if (bh !overflow 0) {
            goto label_26;
        }
        __asm ("outsw dx, word [si]");
        __asm ("outsw dx, word [si]");
        __asm ("outsb dx, byte [si]");
        __asm ("insw word es:[di], dx");
    }
    __asm ("arpl word fs:[edx + 0x61], sp");
label_22:
    __asm ("arpl word fs:[bp + si + 0x61], sp");
label_23:
    __asm ("popaw");
    __asm ("pushaw");
    di = 0x6667;
    si = 0x6667;
label_24:
    si = 0x6667;
label_25:
    di -= *((bx + di + 0x2aba));
    di--;
    si--;
    bp--;
    bx--;
    bx--;
    cx--;
    cx--;
    cl -= al;
label_26:
    bx -= *((bp + di));
    al -= 0x1c;
    ax -= 0x1e1d;
    *((bx + si)) &= ah;
    *((bp + di)) &= bp;
    ax = fcn_00006d9c ();
    ax &= 0x2726;
    __asm ("daa");
    *((bx + di)) -= bp;
    ch -= *((bp + di));
    al -= 0x2d;
    ax -= 0x2f2e;
    *((bx + di)) ^= dh;
    ch ^= *((bp + si));
    __asm ("xlatb");
    __asm ("salc");
    si -= *(0x3837);
    __asm ("aas");
    ax++;
    cx++;
    dx++;
    bx++;
    cx -= dx;
    cl -= *((bx + si + 0x49));
    dx--;
    bx--;
    bp--;
    si--;
    di--;
    si -= *((bx + 0x2bb8));
    dx = bp;
    bx = bp;
    bx = bp;
    si = bp;
    di = bp;
    __asm ("pushaw");
    __asm ("popaw");
    __asm ("bound sp, dword [bp + di + 0x64]");
    __asm ("insb byte es:[di], dx");
    __asm ("insw word es:[di], dx");
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    if (si !overflow 0) {
        if (si !overflow 0) {
            goto label_27;
        }
        if (si >= 0) {
            goto label_28;
        }
        if (si != 0) {
            goto label_29;
        }
        if (si > 0) {
            goto label_30;
        }
        if (si < 0) {
            goto label_31;
        }
        bl -= *((bp + si - 0x6666));
        edx:eax = (int64_t) eax;
        eax = (int32_t) ax;
        tmp_50 = ax;
        ax = di;
        di = tmp_50;
        tmp_51 = ax;
        ax = di;
        di = tmp_51;
        tmp_52 = ax;
        ax = si;
        si = tmp_52;
        tmp_53 = ax;
        ax = sp;
        sp = tmp_53;
    }
    __asm ("cmpsb byte [si], byte ptr es:[di]");
    *((bx + si + 0x67)) -= bp;
label_27:
    __asm ("arpl word fs:[bp + si + 0x61], sp");
label_28:
    __asm ("arpl word [bp + si + 0x61], sp");
    __asm ("pushaw");
label_29:
    di = 0x2ba3a32b;
    si = 0x2ba3a32b;
label_30:
    *((bx + si)) -= bp;
    cx = 0x28b8;
label_31:
    ax = 0x5628;
    di--;
    si--;
    bp--;
    bx--;
    dx--;
    dx--;
    cx--;
    di -= ax;
    *((bx + di)) -= ch;
    bx++;
    dx++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x3e5e */
#include <stdint.h>
 
void fcn_00003e5e (int16_t arg4) {
    cx = arg4;
    tmp_0 = ax;
    ax = cx;
    cx = tmp_0;
    tmp_1 = ax;
    ax = bp;
    bp = tmp_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x3ae3 */
#include <stdint.h>
 
void fcn_00003ae3 (int16_t arg3, int16_t arg4, int16_t arg2) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    tmp_0 = ax;
    ax = sp;
    sp = tmp_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x43f9 */
#include <stdint.h>
 
int32_t fcn_000043f9 (uint32_t arg3, int16_t arg4, int16_t arg2, uint32_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    do {
        __asm ("aas");
        __asm ("aaa");
        __asm ("aam 0xd5");
        __asm ("daa");
        dh ^= *((bp + si));
        dh ^= *((bx + di));
        __asm ("das");
        __asm ("das");
        ax -= 0x2b2c;
        ch -= *((bx + di));
        *((bx + si)) -= bp;
        __asm ("daa");
        __asm ("loopne 0x43ea");
    } while (1);
    __asm ("loopne 0x4433");
    *((bx + si)) &= sp;
    *(bx) &= bl;
    ax -= 0x1c1c;
    bx -= *((bp + di));
    bl -= *((bp + si));
    *((bx + di)) -= bx;
    *((bx + si)) -= bl;
    __asm ("daa");
    __asm ("in ax, dx");
    __asm ("out dx, al");
    __asm ("in ax, dx");
    __asm ("daa");
    *((bx + si)) -= bl;
    *((bx + di)) -= bl;
    bl -= *((bp + si));
    bx -= *((bp + di));
    al -= 0x1d;
    ax -= 0x1f1e;
    *(0xe8e8) &= ah;
    ax &= 0x2625;
    __asm ("daa");
    *((bx + di)) -= ch;
    ch -= *((bp + si));
    bp -= *(si);
    ax -= 0x2e2e;
    *((bx + si)) ^= dh;
    __asm ("daa");
    __asm ("fcmovu st(0), st(1)");
    __asm ("xlatb");
    __asm ("salc");
    __asm ("aaa");
    __asm ("aas");
    ax++;
    cx++;
    dx++;
    bx++;
    __asm ("daa");
    __asm ("enter 0x26c8, 0x48");
    cx--;
    cx--;
    dx--;
    bx--;
    bp--;
    si--;
    di--;
    __asm ("daa");
    ax = 0xb6b7;
    __asm ("daa");
    dx = sp;
    dx = sp;
    bx = sp;
    __asm ("pushaw");
    __asm ("popaw");
    __asm ("bound sp, dword [bp + si + 0x64]");
    *(es:edi) = *(es:esi);
    es:esi += 4;
    es:edi += 4;
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    __asm ("insb byte es:[di], dx");
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    __asm ("outsw dx, word [si]");
    __asm ("outsw dx, word [si]");
    if (di !overflow 0) {
        if (di < 0) {
            goto label_0;
        }
        if (di == 0) {
            goto label_1;
        }
        if (di <= 0) {
            goto label_2;
        }
        if (di > 0) {
            goto label_3;
        }
        if (di < 0) {
            __asm ("wait");
            __asm ("wait");
            __asm ("lcall 0x9595:0x9799");
            tmp_0 = ax;
            ax = sp;
            sp = tmp_0;
            tmp_1 = ax;
            ax = bx;
            bx = tmp_1;
            tmp_2 = ax;
            ax = cx;
            cx = tmp_2;
        }
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        *((bx + si)) += al;
        bh += cl;
        tmp_3 = ax;
        ax = bp;
        bp = tmp_3;
        bh = 0x94;
        tmp_4 = ax;
        ax = dx;
        dx = tmp_4;
        tmp_5 = ax;
        ax = bx;
        bx = tmp_5;
        tmp_6 = ax;
        ax = cx;
        cx = tmp_6;
        tmp_7 = ax;
        ax = sp;
        sp = tmp_7;
        tmp_8 = ax;
        ax = bp;
        bp = tmp_8;
        tmp_9 = ax;
        ax = di;
        di = tmp_9;
        tmp_10 = ax;
        ax = di;
        di = tmp_10;
        edx:eax = (int64_t) eax;
        __asm ("wait");
        __asm ("sahf");
        al &= 0x79;
        if (al < 0) {
            goto label_4;
        }
        if (al <= 0) {
            goto label_5;
        }
        if (al != 0) {
            goto label_5;
        }
        if (al >= 0) {
            goto label_5;
        }
        if (al !overflow 0) {
            goto label_5;
        }
        __asm ("outsw dx, word [si]");
        __asm ("outsb dx, byte [si]");
        __asm ("insw word es:[di], dx");
        __asm ("insb byte es:[di], dx");
        al &= 0xa8;
    }
    __asm ("bound sp, dword fs:[bp + si + 0x61]");
label_0:
    __asm ("bound sp, dword fs:[bp + si + 0x61]");
label_1:
    __asm ("popaw");
    __asm ("pushaw");
label_2:
label_3:
    al &= 0xba;
    cx = 0x25b7;
    di--;
    si--;
    bp--;
    bx--;
    dx--;
    dx--;
    cx--;
    al &= 0xc8;
    __asm ("retf 0x25cc");
label_4:
    *((bx + di)) -= bl;
label_5:
    *((bx + di)) -= bx;
    bl -= *((bp + si));
    bx -= *((bp + di));
    al -= 0x1d;
    *(di) &= ah;
    __asm ("out 0xe6, ax");
    ax &= 0x2524;
    __asm ("daa");
    *((bx + di)) -= ch;
    *((bp + si)) -= bp;
    bp -= *(si);
    ax -= 0x2e2e;
    *((bx + si)) ^= dh;
    al &= 0xdb;
    fp_status = fp_compare(fp_stack[0], fp_stack[7]);
    __asm ("aad 0x25");
    __asm ("aaa");
    ax++;
    cx++;
    dx++;
    bx++;
    al &= 0xc7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x463a */
#include <stdint.h>
 
int16_t fcn_0000463a (int16_t arg3, int16_t arg4, int16_t arg2) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    *(es:di) = al;
    es:di++;
    ch &= *((bx + si + 0x67));
    __asm ("arpl word fs:[bp + di + 0x62], sp");
    __asm ("popaw");
    __asm ("pushaw");
    ah &= *((bp + si));
    ax = 0xb8b8;
    dl &= *((bp + 0x55));
    di--;
    si--;
    bp--;
    bx--;
    dx--;
    cx--;
    ax--;
    cl &= al;
    __asm ("retf 0x22cd");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x4276 */
#include <stdint.h>
 
void fcn_00004276 (int16_t arg_29a6h, int16_t arg2, int16_t arg1) {
    dx = arg2;
    ax = arg1;
    __asm ("outsb dx, byte [si]");
    __asm ("insw word es:[di], dx");
    *((bp + 0x29a6)) -= ah;
    __asm ("cmpsb byte [si], byte ptr es:[di]");
    *((bx + si + 0x67)) -= bp;
    __asm ("arpl word fs:[bp + si + 0x61], sp");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x3fe5 */
#include <stdint.h>
 
int32_t fcn_00003fe5 (int16_t arg3, int16_t arg4, int16_t arg2) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    tmp_0 = ax;
    ax = si;
    si = tmp_0;
    edx:eax = (int64_t) eax;
    ax -= 0x792d;
    if (ax >= 0) {
        void (*0x4064)() ();
    }
    if (ax > 0) {
        void (*0x4064)() ();
    }
    if (ax != 0) {
        void (*0x4064)() ();
    }
    if (ax >= 0) {
        void (*0x4064)() ();
    }
    if (ax !overflow 0) {
        void (*0x4064)() ();
    }
    if (ax !overflow 0) {
        __asm ("outsb dx, byte [si]");
        __asm ("insw word es:[di], dx");
        ax -= 0xa52d;
    }
    al -= 0x1c;
    ax -= 0x1e1d;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x48fd */
#include <stdint.h>
 
int16_t fcn_000048fd (uint32_t arg3, uint32_t arg1) {
    bx = arg3;
    ax = arg1;
    do {
        __asm ("aaa");
        __asm ("aam 0xd6");
        *((bx + di)) ^= si;
        __asm ("das");
        __asm ("das");
        ax -= 0x2b2c;
        ax -= 0x2b2c;
        ch -= *((bx + di));
        *(bx) -= sp;
        __asm ("daa");
        ax -= 0xe01e;
        __asm ("loopne 0x48ea");
    } while (1);
    *(di) = fp_stack[0];
    fp_stack--;
    *(bx) &= bl;
    ax -= 0x1c1d;
    bl -= *((bp + si));
    *((bx + si)) -= bx;
    do {
        *(bx) -= dl;
        ax += 0x1515;
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        *((bx + si)) -= bl;
        *((bp + si)) -= bx;
        bx -= *((bp + di));
        al -= 0x1d;
        __asm ("jcxz 0x4916");
    } while (1);
    ax &= 0x2726;
    *((bx + si)) -= ch;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x493c */
#include <stdint.h>
 
int8_t fcn_0000493c (void) {
    bp -= *((bp + di));
    al -= 0x2d;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x4b5e */
#include <stdint.h>
 
int16_t fcn_00004b5e (int16_t arg3, int16_t arg4, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    ax = arg1;
    cx--;
    ax--;
    bx -= cx;
    __asm ("retf 0xd2cf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x499a */
#include <stdint.h>
 
void fcn_0000499a (int16_t arg4, int16_t arg2) {
    cx = arg4;
    dx = arg2;
    tmp_0 = ax;
    ax = bp;
    bp = tmp_0;
    tmp_1 = ax;
    ax = bp;
    bp = tmp_1;
    tmp_2 = ax;
    ax = dx;
    dx = tmp_2;
    tmp_3 = ax;
    ax = cx;
    cx = tmp_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x4aa0 */
#include <stdint.h>
 
int8_t fcn_00004aa0 (int16_t arg3, int16_t arg4, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    ax = arg1;
    bx--;
    bx--;
    bp--;
    si--;
    di--;
    bx -= *(si);
    cx = 0xb9b9;
    bh = 0xb5;
    al -= 0x59;
    dx = cx;
    bx = cx;
    __asm ("pushaw");
    __asm ("pushaw");
    __asm ("bound sp, dword [bp + si + 0x63]");
    al -= 0xa8;
    __asm ("cmpsw word [si], word ptr es:[di]");
    bp -= *((bp + di + 0x6c));
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    __asm ("outsw dx, word [si]");
    if (bp overflow 0) {
        void (*0x4b3c)() ();
    }
    if (bp < 0) {
        void (*0x4b3f)() ();
    }
    if (bp >= 0) {
        void (*0x4b43)() ();
    }
    if (bp != 0) {
        void (*0x4b47)() ();
    }
    if (bp > 0) {
        void (*0x4b4b)() ();
    }
    if (bp >= 0) {
        void (*0x4af0)() ();
    }
    tmp_0 = ax;
    ax = di;
    di = tmp_0;
    tmp_1 = ax;
    ax = di;
    di = tmp_1;
    tmp_2 = ax;
    ax = di;
    di = tmp_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x42a7 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_000042a7 (uint32_t arg3, int16_t arg2, uint32_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    dx++;
    ax++;
    ax++;
    __asm ("aas");
    __asm ("aaa");
    __asm ("aad 0x28");
    dh ^= *((bp + si));
    *((bx + si)) ^= si;
    __asm ("das");
    ax -= 0x2c2c;
    bp -= *((bp + si));
    *((bx + si)) -= bp;
    __asm ("daa");
    __asm ("daa");
    *((bx + si)) -= ch;
    fp_stack[0] -= fp_stack[0];
    fp_stack++;
    *((bp + si)) -= sp;
    *((bx + si)) &= sp;
    *(bx) &= bl;
    ax -= 0x1c1d;
    bx -= *((bp + di));
    bl -= *((bp + si));
    bl -= *((bx + di));
    *((bx + si)) -= bp;
    __asm ("in ax, dx");
    __asm ("in al, dx");
    *((bx + si)) -= ch;
    *((bx + di)) -= bx;
    bl -= *((bp + si));
    bl -= *((bp + di));
    bx -= *(si);
    ax -= 0x1e1d;
    *((bx + si)) &= ah;
    *((bx + di)) &= bp;
    __asm ("aam 0x94");
    tmp_0 = ax;
    ax = sp;
    sp = tmp_0;
    tmp_1 = ax;
    ax = si;
    si = tmp_1;
    eax = (int32_t) ax;
    tmp_2 = ax;
    ax = si;
    si = tmp_2;
    tmp_3 = ax;
    ax = sp;
    sp = tmp_3;
    tmp_4 = ax;
    ax = sp;
    sp = tmp_4;
    tmp_5 = ax;
    ax = di;
    di = tmp_5;
    eax = (int32_t) ax;
    edx:eax = (int64_t) eax;
    __asm ("lcall 0x9f9e:0x9d9c");
    al = *(0x9c9c);
    __asm ("popf");
    al = *(0xa1a0);
    *(0xa4a5) = ax;
    *(0xa5a2) = al;
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    __asm ("cmpsb byte [si], byte ptr es:[di]");
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    __asm ("cmpsw word [si], word ptr es:[di]");
    __asm ("cmpsw word [si], word ptr es:[di]");
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    al = *(si);
    si++;
    al = *(si);
    si++;
    __asm ("scasw ax, word es:[di]");
    __asm ("scasw ax, word es:[di]");
    cl = 0xb2;
    ah = 0xb2;
    bl = 0xb4;
    dl = 0xb5;
    dh = 0xb7;
    bx = 0xbdbc;
    si = 0xbebd;
    si = 0xbfbe;
    si = rotate_left16 (si, 0xc9);
    di = 0xc5c6;
    di = 0xcbc9;
    __asm ("retf 0xcdcb");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x4ad8 */
#include <stdint.h>
 
void fcn_00004ad8 (int16_t arg2) {
    dx = arg2;
    tmp_0 = ax;
    ax = si;
    si = tmp_0;
    tmp_1 = ax;
    ax = si;
    si = tmp_1;
    tmp_2 = ax;
    ax = sp;
    sp = tmp_2;
    tmp_3 = ax;
    ax = sp;
    sp = tmp_3;
    tmp_4 = ax;
    ax = dx;
    dx = tmp_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x4bdd */
#include <stdint.h>
 
int32_t fcn_00004bdd (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    ax--;
    cx--;
    dx--;
    bx--;
    bx--;
    bp--;
    si--;
    di--;
    *((bx + di)) -= bx;
    dx = 0xb9b9;
    cx = 0xb5b7;
    *((bx + di + 0x5a)) -= bx;
    bx = ax;
    __asm ("pushaw");
    __asm ("pushaw");
    __asm ("bound sp, dword [bp + si + 0x63]");
    *((gs:eax + 0x6c6b19a7)) -= ebp;
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    __asm ("outsw dx, word [si]");
    if (*((gs:eax + 0x6c6b19a7)) overflow 0) {
        void (*0x4c7c)() ();
    }
    if (*((gs:eax + 0x6c6b19a7)) < 0) {
        void (*0x4c7f)() ();
    }
    if (*((gs:eax + 0x6c6b19a7)) >= 0) {
        void (*0x4c83)() ();
    }
    if (*((gs:eax + 0x6c6b19a7)) != 0) {
        void (*0x4c87)() ();
    }
    if (*((gs:eax + 0x6c6b19a7)) > 0) {
        void (*0x4c8b)() ();
    }
    if (*((gs:eax + 0x6c6b19a7)) >= 0) {
        void (*0x4c2e)() ();
    }
    tmp_0 = ax;
    ax = di;
    di = tmp_0;
    eax = (int32_t) ax;
    eax = (int32_t) ax;
    eax = (int32_t) ax;
    tmp_1 = ax;
    ax = bp;
    bp = tmp_1;
    tmp_2 = ax;
    ax = sp;
    sp = tmp_2;
    tmp_3 = ax;
    ax = bx;
    bx = tmp_3;
    tmp_4 = ax;
    ax = cx;
    cx = tmp_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x4b24 */
#include <stdint.h>
 
void fcn_00004b24 (void) {
    tmp_0 = ax;
    ax = di;
    di = tmp_0;
    __asm ("lcall 0x9fa1:0x9f9c");
    __asm ("lahf");
    bl -= *((bx + di));
    if (bl != 0) {
        void (*0x4ba3)() ();
    }
    if (bl >= 0) {
        void (*0x4ba3)() ();
    }
    if (bl < 0) {
        void (*0x4ba4)() ();
    }
    if (bl overflow 0) {
        void (*0x4ba4)() ();
    }
    __asm ("outsb dx, byte [si]");
    __asm ("insw word es:[di], dx");
    __asm ("insb byte es:[di], dx");
    bl -= *((bx + di));
    bl -= *((bp + si));
    __asm ("arpl word fs:[bp + si + 0x61], sp");
    __asm ("pushaw");
    __asm ("pushaw");
    si = 0x6667;
    *((bp + si)) -= bx;
    dl = 0xb2;
    bl = 0xb4;
    bl = 0xb5;
    dl -= *((bp + 0x54));
    di--;
    si--;
    bp--;
    bx--;
    dx--;
    dx--;
}
Error: no "good" data given (all invalid opcodes).
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x4fbb */
#include <stdint.h>
 
int32_t fcn_00004fbb (int16_t arg_54h, int16_t arg3, int16_t arg4, int16_t arg2) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    __asm ("arpl word [si + 0x65], sp");
    ebp += *((eax + 0x6c6b12a7));
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    __asm ("outsw dx, word [si]");
    if (ebp overflow 0) {
        goto label_0;
    }
    if (ebp < 0) {
        goto label_1;
    }
    if (ebp == 0) {
        void (*0x5043)() ();
    }
    if (ebp != 0) {
        void (*0x5047)() ();
    }
    if (ebp > 0) {
        void (*0x504b)() ();
    }
    if (ebp < 0) {
        tmp_0 = ax;
        ax = si;
        si = tmp_0;
        tmp_1 = ax;
        ax = si;
        si = tmp_1;
        tmp_2 = ax;
        ax = si;
        si = tmp_2;
        tmp_3 = ax;
        ax = si;
        si = tmp_3;
        tmp_4 = ax;
        ax = dx;
        dx = tmp_4;
        tmp_5 = ax;
        ax = cx;
        cx = tmp_5;
        tmp_6 = ax;
        ax = bx;
        bx = tmp_6;
        tmp_7 = ax;
        ax = bx;
        bx = tmp_7;
        tmp_8 = ax;
        ax = bx;
        bx = tmp_8;
        tmp_9 = ax;
        ax = cx;
        cx = tmp_9;
        tmp_10 = ax;
        ax = sp;
        sp = tmp_10;
        tmp_11 = ax;
        ax = bp;
        bp = tmp_11;
        tmp_12 = ax;
        ax = bp;
        bp = tmp_12;
        return;
    }
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    cl += cl;
    edx:eax = (int64_t) eax;
    __asm ("les bx, [bp + si - 0x6566]");
    __asm ("lcall 0x9999:0x9b9a");
    tmp_13 = ax;
    ax = di;
    di = tmp_13;
    tmp_14 = ax;
    ax = di;
    di = tmp_14;
    tmp_15 = ax;
    ax = di;
    di = tmp_15;
    edx:eax = (int64_t) eax;
    __asm ("pushf");
    __asm ("popf");
    __asm ("sahf");
    __asm ("lahf");
    __asm ("lahf");
    al = *(0x9d9f);
    __asm ("lahf");
    __asm ("popf");
    __asm ("sahf");
    *((bx + di)) += dl;
    *((bx + di)) += dx;
    *((si + 0x6b)) += bp;
label_0:
label_1:
    *((bx + di)) += dx;
    ax = *(si);
    si += 2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x52d5 */
#include <stdint.h>
 
int16_t fcn_000052d5 (void) {
    ax = 0xbdb9;
    si = 0xbfbe;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x49e2 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_000049e2 (uint32_t arg3, int16_t arg4, int16_t arg2) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    tmp_0 = ax;
    ax = sp;
    sp = tmp_0;
    tmp_1 = ax;
    ax = bp;
    bp = tmp_1;
    tmp_2 = ax;
    ax = si;
    si = tmp_2;
    eax = (int32_t) ax;
    __asm ("wait");
    __asm ("sahf");
    al = *(0x1ca0);
    si -= *((bp + 0x75));
    if (si != 0) {
        if (si < 0) {
            goto label_0;
        }
        if (si !overflow 0) {
            goto label_0;
        }
        __asm ("outsw dx, word [si]");
        __asm ("outsb dx, byte [si]");
        __asm ("insw word es:[di], dx");
        __asm ("insb byte es:[di], dx");
        al -= 0xab;
        *(es:di) = al;
        es:di++;
        al -= 0x68;
        __asm ("arpl word fs:[edx + 0x61], sp");
        __asm ("popaw");
        al -= 0x1c;
        dh = 0xb5;
        dh = 0xb5;
        dh = 0x1c;
        di--;
        si--;
        bp--;
        bx--;
        dx--;
        cx--;
        ax--;
        cx -= bx;
        eax = syscall_cfh (eax, ebx, ecx, edx, esi, edi, edp);
        cl = rotate_left8 (cl, cl);
        bx -= *((bp + di));
        ax++;
        __asm ("aas");
        __asm ("aaa");
        al -= 0xd5;
        *((bp + di)) = rotate_right16 (*((bp + di)), cl);
        *((bx + si)) ^= si;
        __asm ("das");
        ax -= 0x2c2d;
        bp -= *((bp + si));
        *((bx + si)) -= bp;
        *((bp + di)) -= bl;
        bx -= si;
        ax = fp_status;
        ax = fp_status;
        bx -= *(bx);
        ax -= 0x1b1c;
        bl -= *((bx + di));
        *((bx + si)) -= bl;
        ss = ds;
        ax += 0x1414;
        al -= 0xef;
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, al");
        bx -= *(si);
    }
label_0:
    *((bx + si)) -= bl;
    bl -= *((bp + si));
    bx -= *(si);
    ax -= 0x1f1d;
    __asm ("jcxz 0x4a8f");
    ax &= 0x2726;
    *((bx + si)) -= ch;
    *((bp + si)) -= bp;
    bp -= *(si);
    ax -= 0x1b1c;
    __asm ("xlatb");
    __asm ("xlatb");
    __asm ("xlatb");
    __asm ("salc");
    __asm ("aad 0xd5");
    __asm ("aad 0xd4");
    bx -= *((bp + di));
    ax++;
    cx++;
    dx++;
    bx++;
    al -= 0xc7;
    __asm ("les bx, [si]");
    di++;
    ax--;
    cx--;
    dx--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x501e */
#include <stdint.h>
 
int32_t fcn_00004fbb (int16_t arg_54h, int16_t arg3, int16_t arg4, int16_t arg2) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    __asm ("arpl word [si + 0x65], sp");
    ebp += *((eax + 0x6c6b12a7));
    __asm ("insw word es:[di], dx");
    __asm ("outsb dx, byte [si]");
    __asm ("outsw dx, word [si]");
    if (ebp overflow 0) {
        goto label_0;
    }
    if (ebp < 0) {
        goto label_1;
    }
    if (ebp == 0) {
        void (*0x5043)() ();
    }
    if (ebp != 0) {
        void (*0x5047)() ();
    }
    if (ebp > 0) {
        void (*0x504b)() ();
    }
    if (ebp < 0) {
        tmp_0 = ax;
        ax = si;
        si = tmp_0;
        tmp_1 = ax;
        ax = si;
        si = tmp_1;
        tmp_2 = ax;
        ax = si;
        si = tmp_2;
        tmp_3 = ax;
        ax = si;
        si = tmp_3;
        tmp_4 = ax;
        ax = dx;
        dx = tmp_4;
        tmp_5 = ax;
        ax = cx;
        cx = tmp_5;
        tmp_6 = ax;
        ax = bx;
        bx = tmp_6;
        tmp_7 = ax;
        ax = bx;
        bx = tmp_7;
        tmp_8 = ax;
        ax = bx;
        bx = tmp_8;
        tmp_9 = ax;
        ax = cx;
        cx = tmp_9;
        tmp_10 = ax;
        ax = sp;
        sp = tmp_10;
        tmp_11 = ax;
        ax = bp;
        bp = tmp_11;
        tmp_12 = ax;
        ax = bp;
        bp = tmp_12;
        return;
    }
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    cl += cl;
    edx:eax = (int64_t) eax;
    __asm ("les bx, [bp + si - 0x6566]");
    __asm ("lcall 0x9999:0x9b9a");
    tmp_13 = ax;
    ax = di;
    di = tmp_13;
    tmp_14 = ax;
    ax = di;
    di = tmp_14;
    tmp_15 = ax;
    ax = di;
    di = tmp_15;
    edx:eax = (int64_t) eax;
    __asm ("pushf");
    __asm ("popf");
    __asm ("sahf");
    __asm ("lahf");
    __asm ("lahf");
    al = *(0x9d9f);
    __asm ("lahf");
    __asm ("popf");
    __asm ("sahf");
    *((bx + di)) += dl;
    *((bx + di)) += dx;
    *((si + 0x6b)) += bp;
label_0:
label_1:
    *((bx + di)) += dx;
    ax = *(si);
    si += 2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x533b */
#include <stdint.h>
 
void fcn_0000533b (void) {
    do {
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
label_1:
        __asm ("out dx, ax");
label_0:
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, al");
        __asm ("in ax, dx");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
    } while (1);
    __asm ("loop 0x531f");
    goto label_0;
    __asm ("loop 0x531e");
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x535f */
#include <stdint.h>
 
void fcn_0000535f (void) {
    bl = 0xc1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x5061 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int16_t fcn_00005061 (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    do {
        __asm ("into");
        eax = syscall_cfh (eax, ebx, ecx, edx, esi, edi, edp);
label_0:
        dh = rotate_right8 (dh, 1);
        bp = rotate_left16 (bp, 1);
        __asm ("xlatb");
        __asm ("salc");
label_1:
        __asm ("salc");
        __asm ("xlatb");
        __asm ("aad 0xd1");
        *((bx + di)) += dl;
        *((bx + di)) += dl;
        *(di) += si;
        ax ^= 0x3334;
        dh ^= *((bx + di));
        *((bx + di)) += dx;
        *((bx + si)) += dl;
        si += bx;
        __asm ("loopne fcn.00005061");
    } while (1);
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    __asm ("loope 0x5064");
    goto label_0;
    fp_stack[6] = fp_stack[0];
    fp_stack--;
    ax = fp_status;
    __asm ("loopne 0x506a");
    goto label_1;
    *(bx) += bx;
    ax -= 0x1b1c;
    bl -= *((bp + si));
    *((bx + si)) -= bx;
    ss = ds;
    ax += 0x1314;
    dl += *((bx + di));
    di += bp;
    do {
        __asm ("out dx, ax");
label_2:
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, ax");
        __asm ("out dx, al");
        __asm ("out dx, al");
        __asm ("out dx, al");
        __asm ("out dx, al");
        *((bx + di)) += dl;
        *((bx + di)) += dl;
        *(0x201f) += bx;
        *((bp + si)) &= sp;
        dl &= *((bx + di));
        *((bx + si)) += dx;
        *((bx + di)) += dl;
        __asm ("jcxz 0x509e");
    } while (1);
    __asm ("loope 0x509f");
    goto label_2;
    __asm ("loopne 0x509f");
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x517e */
#include <stdint.h>
 
void fcn_0000517e (int16_t arg1) {
    ax = arg1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x52c2 */
#include <stdint.h>
 
int16_t fcn_000052c2 (void) {
    *(es:di) = al;
    es:di++;
    ax = *(si);
    si += 2;
    al = *(si);
    si++;
    al = *(si);
    si++;
    __asm ("scasb al, byte es:[di]");
    __asm ("scasw ax, word es:[di]");
    __asm ("scasw ax, word es:[di]");
    __asm ("scasw ax, word es:[di]");
    al = 0xb1;
    cl = 0xb1;
    bl = 0xb6;
    dh = 0xb7;
    ax = 0xb9ba;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x56c8 */
#include <stdint.h>
 
void fcn_000056c8 (int16_t arg3, int16_t arg1) {
    bx = arg3;
    ax = arg1;
    do {
        *(bx) ^= ch;
        __asm ("in al, 0xe5");
        __asm ("out 0xe7, al");
        __asm ("out 0xe7, ax");
        __asm ("out 0xe7, ax");
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x51df */
#include <stdint.h>
 
void fcn_000051df (void) {
    __asm ("out dx, ax");
    __asm ("out dx, ax");
    __asm ("out dx, ax");
    __asm ("out dx, ax");
    __asm ("out dx, ax");
    __asm ("out dx, ax");
    __asm ("out dx, ax");
    __asm ("in ax, dx");
    __asm ("out dx, al");
    __asm ("out dx, al");
    __asm ("out dx, al");
    __asm ("in ax, dx");
    __asm ("out dx, ax");
    __asm ("in ax, dx");
    __asm ("in al, dx");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xa0ab */
#include <stdint.h>
 
void fcn_0000a0ab (void) {
    dh += bh;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x5160 */
#include <stdint.h>
 
int32_t fcn_00005160 (void) {
    __asm ("pushf");
    __asm ("wait");
    __asm ("wait");
    edx:eax = (int64_t) eax;
    tmp_0 = ax;
    ax = si;
    si = tmp_0;
    tmp_1 = ax;
    ax = si;
    si = tmp_1;
    edx:eax = (int64_t) eax;
    __asm ("pushf");
    __asm ("pushf");
    __asm ("sahf");
    __asm ("sahf");
    __asm ("sahf");
    __asm ("sahf");
    __asm ("sahf");
    __asm ("lahf");
    al = *(0x9fa2);
    ax = *(0xa2a1);
    *(es:di) = *(si);
    si++;
    es:di++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x561d */
#include <stdint.h>
 
int32_t fcn_0000561d (int16_t arg2) {
    dx = arg2;
    tmp_0 = ax;
    ax = dx;
    dx = tmp_0;
    edx:eax = (int64_t) eax;
    __asm ("wait");
    __asm ("wait");
    __asm ("wait");
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x5d46 */
#include <stdint.h>
 
void fcn_00005d46 (void) {
    fp_stack[6] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x22c0 */
#include <stdint.h>
 
int16_t fcn_000022c0 (int16_t arg3, int16_t arg2) {
    int16_t var_7273h;
    bx = arg3;
    dx = arg2;
    __asm ("popaw");
    al = *(0x60a0);
    if (? !overflow ?) {
        void (*0x2338)() ();
    }
    if (? >= ?) {
        void (*0x233c)() ();
    }
    if (? != ?) {
        void (*0x233f)() ();
    }
    if (? <= ?) {
        void (*0x2343)() ();
    }
    if (? < ?) {
        void (*0x2347)() ();
    }
    if (? == ?) {
        void (*0x234b)() ();
    }
    if (? != ?) {
        void (*0x234e)() ();
    }
    if (? >= ?) {
        void (*0x2352)() ();
    }
    __asm ("pushaw");
    tmp_0 = ax;
    ax = dx;
    dx = tmp_0;
    tmp_1 = ax;
    ax = bx;
    bx = tmp_1;
    tmp_2 = ax;
    ax = sp;
    sp = tmp_2;
    tmp_3 = ax;
    ax = sp;
    sp = tmp_3;
    tmp_4 = ax;
    ax = bx;
    bx = tmp_4;
    tmp_5 = ax;
    ax = sp;
    sp = tmp_5;
    tmp_6 = ax;
    ax = sp;
    sp = tmp_6;
    tmp_7 = ax;
    ax = dx;
    dx = tmp_7;
    tmp_8 = ax;
    ax = bp;
    bp = tmp_8;
    tmp_9 = ax;
    ax = sp;
    sp = tmp_9;
    tmp_10 = ax;
    ax = di;
    di = tmp_10;
    tmp_11 = ax;
    ax = bp;
    bp = tmp_11;
    tmp_12 = ax;
    ax = sp;
    sp = tmp_12;
    ax = *(0xe390);
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    dh += ah;
    ds = *((bp + si - 0x7273));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x64db */
#include <stdint.h>
 
void fcn_000064db (void) {
    __asm ("retf 0xc9ca");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x61d4 */
#include <stdint.h>
 
void fcn_000061d4 (void) {
    cx = 0xbcba;
    di = 0xc0c1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xa32f */
#include <stdint.h>
 
void fcn_0000a32f (int16_t arg3) {
    bx = arg3;
    dh += bh;
    *((bx + si))++;
    *((bx + si)) += al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xa1af */
#include <stdint.h>
 
void fcn_0000a1af (void) {
    dh += bh;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x7e91 */
#include <stdint.h>
 
void fcn_00007e91 (void) {
    si = 0xbebe;
    di = 0xc0c0;
    si = 0xbfbe;
    di = 0xc3c1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0x7d93 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void fcn_00007d93 (void) {
    do {
label_1:
        bx = rotate_left16 (bx, cl);
label_0:
        si = rotate_left16 (si, cl);
label_2:
        __asm ("salc");
label_3:
        __asm ("salc");
        __asm ("salc");
        __asm ("salc");
label_4:
        __asm ("xlatb");
label_7:
        fp_status = fp_compare(fp_stack[0], fp_stack[5]);
label_6:
        __asm ("aad 0xd2");
label_5:
        ah = rotate_left8 (ah, cl);
        __asm ("salc");
        __asm ("salc");
        __asm ("xlatb");
        __asm ("fcmovu st(0), st(1)");
        __asm ("fcmovnu st(0), st(3)");
        fp_status = fp_compare(fp_stack[0], fp_stack[0]);
        fp_stack++;
        __asm ("fcmovnu st(0), st(3)");
label_8:
        __asm ("fcmovnu st(0), st(3)");
        __asm ("fcmovnu st(0), st(4)");
        fp_status = fp_compare(fp_stack[0], fp_stack[0]);
        fp_stack++;
        __asm ("loopne 0x7d81");
    } while (1);
    __asm ("jcxz 0x7d82");
    goto label_0;
    __asm ("loop 0x7d81");
    goto label_1;
    __asm ("loopne 0x7d83");
    goto label_2;
    __asm ("loope 0x7d84");
    goto label_3;
    __asm ("loope 0x7d87");
    goto label_4;
    __asm ("jcxz 0x7d8a");
    goto label_5;
    __asm ("in ax, 0xe2");
    __asm ("loop 0x7d89");
    goto label_6;
    __asm ("loopne 0x7d88");
    goto label_7;
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack[6] = fp_stack[0];
    fp_stack--;
    fp_stack[6] = fp_stack[0];
    fp_stack--;
    __asm ("in al, 0xe5");
    __asm ("in al, 0xe4");
    __asm ("jcxz 0x7d96");
    goto label_8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_394/ia32_mz/subject.exe @ 0xe7bc */
#include <stdint.h>
 
void fcn_0000e7bc (void) {
    ah = 9;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
}
