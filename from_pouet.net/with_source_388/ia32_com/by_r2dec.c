/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x0 */
#include <stdint.h>
 
int16_t entry0 (int16_t arg3, int16_t arg1) {
    bx = arg3;
    ax = arg1;
    /* [00] -rwx section size 22068 named seg_000 */
    ax = 0x299d;
    dx = 0x53a;
    ax += 0;
    if (ax < *(2)) {
        goto label_0;
    }
    ah = 9;
    dx = 0x11c;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = 0x4c01;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    si--;
    __asm ("outsw dx, word [si]");
    if (si == 0) {
        void (*0x40)() ();
    }
    __asm ("outsb dx, byte gs:[si]");
    __asm ("outsw dx, word [si]");
    if (si != 0) {
        void (*0x8c)() ();
    }
    __asm ("insw word es:[di], dx");
    __asm ("outsw dx, word [si]");
    if (si < 0) {
        void (*0xa6)() ();
    }
    al &= 0x20;
    *((bx + si)) &= ah;
    *((bx + si)) &= ah;
    *((bx + si)) &= ah;
    *((bx + si)) &= ah;
    *((bx + si)) &= ah;
    *((bx + di + 0x2d)) &= bl;
label_0:
    cx = 0x6d20;
    ax -= 0x20;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x15a7 */
#include <stdint.h>
 
int16_t fcn_000015a7 (int16_t arg4) {
    cx = arg4;
    al -= 0x70;
    ax = *(0x1517);
    *((bp + si)) += dl;
    cx--;
    ax = 0x3093;
    *(es:di) = ax;
    es:di += 2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x47a7 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int8_t fcn_000047a7 (int16_t arg_1bh, int16_t arg_40h, int16_t arg_3c0bh, int16_t arg_4f22h, int16_t arg4, int16_t arg1) {
    int16_t var_5ch;
    cx = arg4;
    ax = arg1;
    cx ^= 0x832e;
    al &= bh;
    *((bp + di)) += ax;
    cl = 6;
    if (*((bp + di)) < 0) {
        void (*0x4829)() ();
    }
    __asm ("aaa");
    *((si + 8)) = rotate_left8 (*((si + 8)), 0x2b);
    fcn_000044c4 (cs);
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x44c4 */
#include <stdint.h>
 
void fcn_000044c4 (int16_t arg2, int16_t arg1) {
    dx = arg2;
    ax = arg1;
    __asm ("clc");
    __asm ("aas");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x1a92 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int16_t fcn_00001a92 (int16_t arg_7882h, int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    int16_t var_36h;
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    *((bp + si + 0x11b)) += ah;
    ax++;
    *((bx + di)) -= al;
    *((bp + 0x7882)) += 0xa6;
    cl = 0xc1;
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    *((bp + di + 0x65)) += cx;
    __asm ("aad 0x5a");
    *(es:di) = al;
    es:di++;
    dl -= dl;
    bl += *(di);
    ax++;
    bl &= *((bx + di));
    *(si) = mm6;
    *(0x5a9d) = ax;
    *((di + 2)) += bl;
    *((bp + si)) += 0xa3;
    __asm ("out dx, ax");
    *((bp + si + 0x35)) += 0xe7f;
    bh -= *((di + 0x197d));
    ss = cx;
    cx++;
    if ((*((bx + si + 0x57)) & ax) == 0) {
        void (*0x1b11)() ();
    }
    __asm ("cmc");
    __asm ("in ax, 0xa");
    dx -= si;
    bx--;
    *((bx + si - 0x17)) -= 0xf;
    sp = *((si - 0x2e)) * 0x1640;
    dl = rotate_left8 (dl, 0xd4);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x345e */
#include <stdint.h>
 
void fcn_0000345e (void) {
    *(es:di) = *(si);
    si++;
    es:di++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x1a0f */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_00001a0f (int16_t arg_45h, uint32_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    int16_t var_5fh;
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
label_0:
    __asm ("stc");
    al = *(0x4051);
    void (*0x890b)() ();
    do {
        bx++;
        dx += *((bx + si));
        __asm ("wrmsr");
        dx += *((bp + si));
        ax &= 0x3740;
        di = 0xaa43;
        __asm ("wait");
        if (sp >= bx) {
            al = void (*0xdb06)() ();
            ah += *((bx - 0x7d71));
            dl += al;
            __asm ("bound di, dword [di + 0x2a]");
            *(0x1400) = al;
            di = 0x1717;
            *((bp + di - 0x7f)) = rotate_left8 (*((bp + di - 0x7f)), 0xb6);
            al |= 0x53;
            cx++;
            bx = *(di);
            di++;
            *((bx + di)) = rotate_right8 (*((bx + di)), 1);
            *((bx + si - 0x3f)) |= 0x6b;
            al += *((bx + si - 0x4e96));
            return ax;
        }
        ch += cl;
        di |= *((bp + 0x45));
        dx++;
        tmp_0 = ax;
        ax = di;
        di = tmp_0;
    } while (dx >= 0);
    __asm ("aas");
    *(di) += bl;
    __asm ("loopne 0x19e2");
    goto label_0;
    ax &= 0x1950;
    ax++;
    *((bp - 0x5f)) &= ch;
    __asm ("outsb dx, byte [si]");
    ax = *(0x7b3c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x1f9a */
#include <stdint.h>
 
void fcn_00001f9a (int16_t arg3) {
    bx = arg3;
    bh |= bh;
    __asm ("movups xmm1, xmmword [bx + si + 0x12]");
    __asm ("les ax, [bx + si]");
    ah += al;
    return void (*0x2277)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x2277 */
#include <stdint.h>
 
int8_t loc_00002277 (int16_t arg4) {
    cx = arg4;
    tmp_0 = ax;
    ax = di;
    di = tmp_0;
    __asm ("int1");
    dh = 0xeb;
    if (? <= ?) {
        si++;
        cx--;
        __asm ("aam 0x86");
        *(di) <<= 0x3e;
        cx++;
        *(di) += 0x1c1c;
    }
    al -= 0x15;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x22d8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0xdcc */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_00000dcc (int16_t arg3, int16_t arg4, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    ax = arg1;
    ax++;
    bp |= *((bp + si + 0x10));
    ax++;
    si++;
    ax = di;
    __asm ("xlatb");
    di--;
    al += 0x33;
    *((di + 0x15ae)) -= cx;
    __asm ("wait");
    sp = cx * 0xffd2;
    __asm ("aaa");
    ax++;
    ax++;
    al ^= *((bx + si + 0x14));
    fp_stack[2] /= fp_stack[0];
    al++;
    al += 0xbd;
    ah -= *((bx + 0x2a));
    dl |= bl;
    ax++;
    __asm ("das");
    *((bx + di + 0x37)) -= dh;
    *((bx + di + 0x24)) += di;
    al = 0x6e;
    __asm ("punpckhbw mm4, mm4");
    ax = void (*0x64b0)(uint16_t, uint16_t, uint16_t) (ax, 0xffffffffffffffe8, si);
    __asm ("aad 0xb4");
    ax ^= 0x1249;
    dl -= *((bp + si + 0x4c52));
    *((di + 0x23)) += ah;
    *(si) -= 0x1a90;
    ax += 0x2e0b;
    cl += *((bp - 0x39));
    bx++;
    do {
        di++;
        *((bp + si + 0x40a1)) += ch;
        *((di - 0x20b)) += ax;
        *((bp + di + 0x7d50)) += bp;
        *((bp + si)) ^= dx;
        di += *((di - 0x12));
        dx |= *((bp + si));
        __asm ("cmpsw word [si], word ptr es:[di]");
        si++;
        __asm ("salc");
        bh = 0xbe;
        di = 0x47;
        di += ax;
        ax &= 0xf631;
        __asm ("aas");
        cl += *((bx + di));
        __asm ("out 0x94, ax");
        __asm ("cmpsb byte [si], byte ptr es:[di]");
        di++;
        *((si + 0xe)) += di;
        __asm ("cli");
        if (*((si + 0xe)) == 0) {
            ch -= *((bp + di + 8));
        }
        *(bx) |= dh;
        __asm ("aas");
        dh = 0xe4;
        dl += *((bx + si + 0x16d6));
        *(es:di) = *(si);
        si += 2;
        es:di += 2;
        *((bp + si)) ^= cx;
        *((bp + si + 0x71)) += 0x3fba;
        *((bp + si)) += dl;
        ax--;
        __asm ("arpl dx, ax");
        cx++;
        __asm ("arpl di, ax");
        bp--;
        ax += 0xd011;
        *((bx + si + 0x3f)) = rotate_right16 (*((bx + si + 0x3f)), 1);
        *((bp + di - 0x4c)) += ch;
        *((bx + si - 0x46)) += ax;
    } while ((*((bx + 0x57d)) & ch) <= 0);
    ch -= *((bx + di));
    *((bp + di - 0x35)) = ah;
    dx++;
    *(0x2dad) = ax;
    dl &= ah;
    *((bx + di + 0x41)) <<= 1;
    bh = 0x45;
    if (*((bx + di + 0x41)) > 0) {
        ax += 0x143d;
    }
    *((bp + si - 0x56)) = fp_stack[0];
    al -= 0xb5;
    __asm ("in ax, 0x75");
    dx = es;
    bp = *((bp + di));
    cx = si - 0x7c83;
    *((bx + si + 0x1f)) += 0x42;
    dh ^= *((bp - 0x5ff));
    bx = 0x1614;
    *((bx + si)) -= bl;
    *((bp + di + 0x4d83)) -= ax;
    ax++;
    ax -= *((bx + di));
    di |= *((bp + si));
    bx++;
    dx = si;
    *(di) += bh;
    *((bp + si)) ^= dx;
    __asm ("retf 0x2f27");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x5217 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
void fcn_00005217 (int16_t arg3, int16_t arg4, uint32_t arg1) {
    bx = arg3;
    cx = arg4;
    ax = arg1;
    if (? == ?) {
        ax |= *((si - 0x68));
        bp--;
        bx++;
        __asm ("pushf");
        tmp_0 = ax;
        ax = sp;
        sp = tmp_0;
        dl &= *((bp + di + 0x43));
        dx:ax = ax * *((si - 6));
        __asm ("wait");
        bx--;
        cx++;
        cl -= *(di);
        cx--;
        bx++;
        bl += 0x33;
        ax ^= 0x30ec;
        ax = *(0x336);
        __asm ("popf");
        tmp_1 = bx + di;
        bx + di = si;
        si = tmp_1;
        al |= 0x77;
        __asm ("sahf");
        *((bp + si)) = rotate_right16 (*((bp + si)), 1);
        __asm ("daa");
        if (*((bx + di)) == di) {
            goto label_0;
        }
        cx++;
        ax -= *((bx + di));
        bp--;
        __asm ("daa");
        if (bp overflow 0) {
            goto label_1;
        }
        cx--;
        ch &= bh;
        *(bx) <<= 6;
        __asm ("insb byte es:[di], dx");
        ax ^= 0xd23c;
        __asm ("das");
        al += 0x38;
        ah ^= *((bp + 0x3447));
        al ^= 0x23;
        *((bp + di + 0x3793)) ^= sp;
        ax |= 0x3834;
        cx |= *((bx + 0x4350));
        si = sp;
        __asm ("pushaw");
        al += *((bx - 0x36));
        bl ^= *((bx + si));
    }
    cx--;
    bp--;
    *((si + 0x4c)) -= cl;
    do {
        cx--;
        __asm ("daa");
        *((bx + si)) = fp_stack[0];
label_0:
        *((bx + di)) += al;
        *((bp + si + 0x78)) += dh;
        si ^= *((bp + di));
        tmp_2 = ax;
        ax = bp;
        bp = tmp_2;
    } while (ax != 0x363b);
    *((bp + di)) += sp;
    cx ^= *((bx + di));
    si &= *(si);
    __asm ("in al, dx");
    al += 4;
    ax &= *((bx + di));
label_1:
    bx += bx;
    *((bp + si + 0x20)) -= bl;
    __asm ("popaw");
    *((di + 0x6c)) ^= ch;
    ch -= *(esi);
    dl -= *(bx);
    *((bx + si)) -= bx;
    ax = bp * 0x49;
    di--;
    *((bx + si - 0x2700)) = fp_stack[0];
    fp_stack--;
    bp++;
    si = bp + di + 0x20cc;
    *((di + 5)) -= cx;
    __asm ("pushaw");
    *((bp + 0x6f86)) += sp;
    __asm ("enter 0x5206, 0x35");
    __asm ("bound cx, dword [di + 0x4f]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x35f7 */
#include <stdint.h>
 
void fcn_000035f7 (void) {
    __asm ("pminsw mm4, qword [0x10d8]");
    __asm ("cmpsb byte [si], byte ptr es:[di]");
    tmp_0 = ax;
    ax = si;
    si = tmp_0;
    __asm ("daa");
    __asm ("cmpps xmm3, xmm2, 0x54");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x5262 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
void fcn_00005217 (int16_t arg3, int16_t arg4, uint32_t arg1) {
    bx = arg3;
    cx = arg4;
    ax = arg1;
    if (? == ?) {
        ax |= *((si - 0x68));
        bp--;
        bx++;
        __asm ("pushf");
        tmp_0 = ax;
        ax = sp;
        sp = tmp_0;
        dl &= *((bp + di + 0x43));
        dx:ax = ax * *((si - 6));
        __asm ("wait");
        bx--;
        cx++;
        cl -= *(di);
        cx--;
        bx++;
        bl += 0x33;
        ax ^= 0x30ec;
        ax = *(0x336);
        __asm ("popf");
        tmp_1 = bx + di;
        bx + di = si;
        si = tmp_1;
        al |= 0x77;
        __asm ("sahf");
        *((bp + si)) = rotate_right16 (*((bp + si)), 1);
        __asm ("daa");
        if (*((bx + di)) == di) {
            goto label_0;
        }
        cx++;
        ax -= *((bx + di));
        bp--;
        __asm ("daa");
        if (bp overflow 0) {
            goto label_1;
        }
        cx--;
        ch &= bh;
        *(bx) <<= 6;
        __asm ("insb byte es:[di], dx");
        ax ^= 0xd23c;
        __asm ("das");
        al += 0x38;
        ah ^= *((bp + 0x3447));
        al ^= 0x23;
        *((bp + di + 0x3793)) ^= sp;
        ax |= 0x3834;
        cx |= *((bx + 0x4350));
        si = sp;
        __asm ("pushaw");
        al += *((bx - 0x36));
        bl ^= *((bx + si));
    }
    cx--;
    bp--;
    *((si + 0x4c)) -= cl;
    do {
        cx--;
        __asm ("daa");
        *((bx + si)) = fp_stack[0];
label_0:
        *((bx + di)) += al;
        *((bp + si + 0x78)) += dh;
        si ^= *((bp + di));
        tmp_2 = ax;
        ax = bp;
        bp = tmp_2;
    } while (ax != 0x363b);
    *((bp + di)) += sp;
    cx ^= *((bx + di));
    si &= *(si);
    __asm ("in al, dx");
    al += 4;
    ax &= *((bx + di));
label_1:
    bx += bx;
    *((bp + si + 0x20)) -= bl;
    __asm ("popaw");
    *((di + 0x6c)) ^= ch;
    ch -= *(esi);
    dl -= *(bx);
    *((bx + si)) -= bx;
    ax = bp * 0x49;
    di--;
    *((bx + si - 0x2700)) = fp_stack[0];
    fp_stack--;
    bp++;
    si = bp + di + 0x20cc;
    *((di + 5)) -= cx;
    __asm ("pushaw");
    *((bp + 0x6f86)) += sp;
    __asm ("enter 0x5206, 0x35");
    __asm ("bound cx, dword [di + 0x4f]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x54dc */
#include <stdint.h>
 
int16_t fcn_000054dc (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    ch = 0xaf;
    ax += 0x5fe6;
    __asm ("das");
    cx += *((bx + 0x1c));
    if (bl < *((bp - 0x6e))) {
        goto label_1;
    }
    if (bl <= *((bp - 0x6e))) {
        goto label_2;
    }
    es = cs;
    es = ss;
    __asm ("insb byte es:[di], dx");
    if (bl >= *((bp - 0x6e))) {
        goto label_3;
    }
    *(0xbe2f) -= di;
    if (*(0xbe2f) >= 0) {
        do {
            cl -= *(0x7254);
            __asm ("bound cx, dword [0xf57c]");
        }
    } while (cl < 0);
    __asm ("cli");
    *((bp + di - 0xba4)) -= bh;
    si = cs;
    *((si + 4)) >>= cl;
    __asm ("das");
    __asm ("scasw ax, word es:[di]");
    __asm ("cli");
    __asm ("in al, dx");
    if (*((si + 4)) == 0) {
label_1:
        __asm ("clc");
        al += 0x80;
        *((bx + di + 0x6e)) += ax;
        *((si + 0x48)) ^= dh;
    }
    if (*((bx + di + 0x6e)) == 0) {
label_2:
        goto label_4;
    }
    *((bp + 0x69)) &= ah;
    __asm ("outsb dx, byte [si]");
    es = dx;
    *(di) += cl;
    __asm ("popaw");
    __asm ("outsw dx, word [si]");
    di++;
    *((bx + si + 0x72)) &= dl;
    __asm ("outsw dx, word [si]");
    if (*((bx + si + 0x72)) != 0) {
        goto label_5;
    }
    if (*((bx + si + 0x72)) == 0) {
        goto label_6;
    }
    do {
        __asm ("outsw dx, word [si]");
        __asm ("outsb dx, byte [si]");
        ch += *(ss:);
        *((bp + si)) &= sp;
        *((ss:di + 0x61)) += cx;
        bp = *((si + 0x6a)) * 0x6f6c;
        bp++;
        al |= *((bp + si + 0x203a));
        __asm ("popaw");
        ax |= 0x772e;
        if (ax !overflow 0) {
            goto label_5;
        }
        si = *((bp + si + 0x69)) * 0x2e73;
        __asm ("bound sp, dword [bp + si + 4]");
        if (ax == 0) {
            goto label_7;
        }
        al |= 0x86;
        if (al == 0) {
            goto label_8;
        }
        *((bx + si + 0x4f)) = cs;
label_4:
        ax--;
        di--;
        bp--;
        bp++;
        tmp_0 = ax;
        ax = cx;
        cx = tmp_0;
label_3:
        cx++;
        di++;
        bp++;
        al += 0xf0;
        ch -= *((bx + si + 0x74));
        if (ch == 0) {
            goto label_9;
        }
        __asm ("das");
        return ax;
        if (ch < *(bx)) {
label_0:
            goto label_10;
        }
        *(bx) -= bp;
        if (*(bx) != 0) {
            goto label_11;
        }
        *(gs:di) = al;
        bp++;
        cl = 0x46;
        __asm ("outsw dx, word [si]");
    } while (bp < 0);
    *((bx + si + 0x53)) ^= sp;
    __asm ("daa");
    __asm ("aaa");
    *(0x5249) ^= 0x49;
label_5:
    cx--;
    cx--;
    *((bp + si + 0x42)) &= al;
    __asm ("pushaw");
    ax += 0x6f4e;
label_6:
    si--;
    __asm ("outsw dx, word [si]");
    __asm ("int1");
label_8:
    *(si) ^= bx;
    di -= *((bx + di));
    *((bx + si)) ^= bl;
    *(di) >>= 0x32;
    si ^= *((bp + si));
    al += 0x34;
    al ^= 0x20;
    *((bx + di)) ^= dh;
    *((bp + di)) &= dh;
    return _hlt ();
label_7:
    ax ^= 0x2039;
    *(si) ^= si;
    al ^= 0xd8;
    if (*((bp + di)) <= ax) {
        goto label_0;
    }
    al = uint16_t (*bp + di + 0x54)() ();
    if (*((bp + di)) <= ax) {
label_9:
        void (*0x563e)() ();
    }
    al ^= 0x36;
label_10:
    *(si) &= dh;
    di += *((bp + si));
    bx = 0x3938;
    ax += 0x827e;
    si--;
    *((bx + si)) ^= bh;
label_11:
    *((bx + di)) &= bh;
    ax ^= *((bp + si));
    *(di) ^= bh;
    ax = *(dx:ax) / bp + di;
    dx = *(dx:ax) % bp + di;
    *((bx + si)) ^= cl;
    __asm ("popf");
    __asm ("cli");
    *((bp + si)) -= al;
    *(si) ^= dh;
    __asm ("out 0x30, al");
    *(di) = fp_stack[0];
    fp_stack--;
    __asm ("pushf");
    *(bx) ^= dh;
    dx |= *((bp + si + 0x24));
    bh += bh;
    ax += 0x1f9b;
    if (ax < 0) {
    }
    tmp_1 = bp + si;
    bp + si = al;
    al = tmp_1;
    ax |= 0x6103;
    ax += *((bp + 4));
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bp + di + 0x541f)) += bx;
    di += di;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x55d3 */
#include <stdint.h>
 
int16_t fcn_000055d3 (uint32_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    ah ^= *((bx + si + 0x2084));
    ax ^= 0x2039;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x4281 */
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
 
int16_t fcn_00004281 (uint32_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
label_0:
    ax |= 0xf616;
    bx = 0x3868;
    si &= *((bp + 4));
    __asm ("int1");
    ax++;
    ax++;
    *(0xa074) += dl;
    ax++;
    *(si) += dh;
    ax++;
    __asm ("arpl si, bp");
    cl |= bh;
    if (cl < 0) {
        goto label_1;
    }
    *((bp + di - 0x5fc5)) -= si;
    do {
        ax++;
        *((bp + di + 0xefd)) += ax;
        bp -= 0x1da8;
        *(di) += bx;
        *(0xbf22) <<= cl;
        cl = 0xf7;
        ds = cs;
        if (*(0xbf22) !overflow 0) {
            goto label_2;
        }
    } while (*(0xbf22) <= 0);
    if (*(0xbf22) <= 0) {
        goto label_3;
    }
    *((bp + 0x23)) += bl;
    ax++;
    *(bx) += al;
    ax++;
    *(es:di) = *(si);
    si++;
    es:di++;
    ax += *(0x4332);
    if (ax >= 0) {
        goto label_0;
    }
    ax++;
    ax -= *((bp + di));
    *((bp + 0x2d0)) += cx;
    __asm ("int3");
label_1:
    *((si + 0xa03)) += bp;
    al += 0x3a;
    *((bx + si + 2)) = rotate_left8 (*((bx + si + 2)), 1);
    *((bx + si - 0x5f)) += ax;
label_2:
    ax -= 0x7308;
    ax += 0xece8;
    ax++;
    dx += sp;
    *(es:di) = ax;
    es:di += 2;
    ah = 0x26;
    ax += *((bx + di));
    di += *((bp + si));
    ax -= 0x140;
    __asm ("in ax, dx");
    ax -= *((bx + si + 0x17));
label_3:
    ss = ax;
    ax++;
    es = ax;
    *((bx + di + 1)) |= al;
    __asm ("sti");
    *((bp + si - 0x5f8b)) = rotate_right16 (*((bp + si - 0x5f8b)), cl);
    __asm ("cmpsb byte [si], byte ptr es:[di]");
    ax ^= 0x9f40;
    return _hlt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x1af0 */
#include <stdint.h>
 
int16_t fcn_00001af0 (int16_t arg2, int16_t arg1) {
    dx = arg2;
    ax = arg1;
    ax -= 0xaa97;
    *((bp + si - 0x41)) += ah;
    bl = 0x5d;
    al &= 0x21;
    return _hlt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x429d */
#include <stdint.h>
 
void fcn_0000429d (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x3339 */
#include <stdint.h>
 
int32_t fcn_00003339 (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    bp++;
    dx |= *((bx + si));
    if (dx == 0) {
        bl ^= *((bp + di - 0x58));
        cx |= *((bp + di));
        eax = (int32_t) ax;
    }
    ax ^= 0x732d;
    ds = cx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0xa35 */
#include <stdint.h>
 
void fcn_00000a35 (int16_t arg4, int16_t arg1) {
    cx = arg4;
    ax = arg1;
    ax--;
    bx = ax;
    al = *(0x11cd);
    ax++;
    __asm ("psubd mm7, qword [di]");
    __asm ("aas");
    __asm ("aam 0x41");
    ch += *((ds:bp + si + 0x7ecc));
    *((si + 0x789)) += dh;
    cl += ch;
    if (cl != 0) {
        void (*0xa9b)() ();
    }
    bp--;
    al = *(0x64b7);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x3933 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00003933 (uint32_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    do {
        ax |= 0xa927;
        ax = dx * 0xb10;
        al = void (*0xc958)() ();
        if (ax > 0) {
            si = bp + si;
            *((bp + si)) -= ch;
            __asm ("aaa");
            if (*((bp + si)) !overflow 0) {
                goto label_2;
            }
            dh += bh;
            si += si;
            cx -= *((bp + di + 0x2291));
            sp = bp + di;
            al += ah;
            *(si) &= si;
            ah ^= *(0x2b50);
            bp--;
            bp ^= *((bx + si + 0x36));
        }
        ax &= 0x8328;
        *(si) -= ah;
        al &= 0x2a;
        *((bp + di)) ^= cx;
        __asm ("cli");
        __asm ("sti");
    } while (al != 0);
    *(bx) |= ax;
    __asm ("aas");
    al += 0xf4;
label_2:
    return _hlt ();
    if (al != 0) {
        goto label_3;
    }
    cl &= *((si + 0x4d));
    *(di) += cl;
    *(0x1e4c) += sp;
    *((bp + si + 0x3f)) += di;
    __asm ("aas");
    *(bp) = bh;
    *((bp + si + 0x7f)) += si;
    if (*((bp + si + 0x7f)) != 0) {
        goto label_4;
    }
    *(0x406a) -= bl;
    si |= *((bx + si + 0x38));
    ax--;
    tmp_0 = dl;
    dl = ah;
    ah = tmp_0;
    tmp_1 = ax;
    ax = bx;
    bx = tmp_1;
    *((bx + si + 0x23)) += dx;
    do {
        di &= bp;
        tmp_2 = 0x4526;
        0x4526 = bx;
        bx = tmp_2;
        bx = ax;
        if (di overflow 0) {
            *((bx + di)) += sp;
            si |= dx;
            ah ^= *((bp + si));
            al = void (*0xbdee)() ();
            __asm ("cmovns sp, word [bx + di]");
            __asm ("loopne 0x398a");
            *((bx + di - 0x1b)) |= 0xff85;
            al -= 0x91;
label_4:
            tmp_3 = ax;
            ax = cx;
            cx = tmp_3;
            al = *(0x49f1);
            di--;
            bx &= *((bp + si + 0x32));
            *((bx + si)) &= al;
            al += 0x65;
        }
        __asm ("outsw dx, word [si]");
        al = void (*0x5e01)() ();
        dx--;
        ch ^= *((bp + di));
        *((bp + di)) ^= cx;
        edx:eax = (int64_t) eax;
        ax = dx;
        if (al >= 0x33) {
            goto label_5;
        }
        __asm ("aaa");
        ax -= 0x6ab2;
        if ((ax & 0x7607) <= 0) {
label_3:
            goto label_6;
        }
        tmp_4 = ax;
        ax = bp;
        bp = tmp_4;
        *((bx - 0x7f)) += 0x93;
        si--;
        ax++;
        *((bx + di)) += al;
        di ^= *(0x405a);
        bx--;
        __asm ("aas");
    } while (bx < 0);
    __asm ("std");
    *(0x3a18) += ax;
    cl -= *((bp + si + 0x4c));
    al &= *((bx + di));
label_6:
label_0:
    __asm ("smsw word [di]");
    ax ^= *((bx + si));
    __asm ("cli");
    return eax;
label_5:
    si++;
    *((bp + si - 0x4618)) += ax;
    *((bx + di + 0x43)) += bx;
    *((bp + si + 0x60d)) += dl;
    if (*((bp + si + 0x60d)) <= 0) {
        al += 0x76;
    }
    ax -= 0x6f70;
    ax = *(bx) * 0x1eb;
    *((bx + di)) >>= 1;
    *(si) -= dh;
    *((bx + si + 0x39)) ^= dl;
    *(fp_stack--) = *((bx + di + 0x1fc));
    do {
    } while (*(si) <= 0);
    cx -= *((bx + si - 0x79));
    ax++;
    if (ax <= 0) {
        goto label_7;
    }
    do {
    } while (ax > 0);
    if (ax > 0) {
        goto label_0;
    }
label_7:
    *(0x3137) += dh;
    *(0x3738) ^= bh;
    __asm ("aas");
    __asm ("aas");
    *((bx + si)) += al;
    __asm ("aas");
    __asm ("aas");
    *(bx) ^= bh;
    *(bx) ^= ch;
    ax -= *((bx + si));
    __asm ("pushaw");
    __asm ("daa");
    ch -= *(cs:);
    al &= 0x21;
    do {
        *((bp + di)) &= dh;
        ax -= 0x2529;
        al = 0;
        *(si) += al;
        *((bp + si)) -= ah;
        ds = 0xffffffffffffff87;
        bx -= *((bx + si));
label_1:
        *(bx) -= dl;
        al += 0x14;
        *(si) ^= bp;
        *((bx + si)) += al;
        dx -= *((bx + si));
        al += 0x13;
        cl += *(0xc0d);
        al ^= 0x2f;
        al -= 0x28;
        __asm ("daa");
        *((bp + di)) += al;
        *(0xc16) -= dx;
        cx |= *((bp + di));
        ch ^= *(di);
        al -= 0x25;
        dl -= *((bp + si));
        *((bx + si)) += dx;
        al |= 0x60;
        *(di) &= bl;
        al -= 0x43;
        bl -= *(di);
        bl -= *((bp + si));
        ah -= *(0x3025);
        *((bx + si)) ^= al;
        *((bx + si)) |= cx;
        es = cs;
        es = cs;
        *(si) |= al;
        *(0x281d) &= bx;
        al &= 0x23;
        cx |= *((bp + si));
        *((bx + si)) ^= al;
        *((bp + di)) |= sp;
        *(bx) &= bl;
        __asm ("arpl word ss:[0x2122], sp");
        ax += 0x1c05;
        al -= bl;
        *((ss:bx + di)) -= dx;
        *(bx) |= bx;
        al -= 8;
    } while (al >= 0);
    dx -= *((bx + di));
    al += 0xa0;
    bx ^= *((bx + di));
    *((si + 0x25)) = fp_stack[0];
    al -= 0x19;
    __asm ("salc");
    if (al < 0) {
        goto label_1;
    }
    *((di + 0xf)) = rotate_right16 (*((di + 0xf)), 0x74);
    al += 0x31;
    dx = ds;
    *(0x2615) -= dl;
    __asm ("insb byte es:[di], dx");
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x2f2e */
#include <stdint.h>
 
void fcn_00002f2e (void) {
    return void (*0x2f99)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x2f99 */
#include <stdint.h>
 
int8_t loc_00002f99 (int16_t arg3, int16_t arg4, int16_t arg2) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    bp = si - 0x6eee;
    __asm ("packssdw mm5, qword [bx + si]");
    dh -= *((bp + di));
    bx++;
    al += *((di + 0x2d91));
    *((bx + si - 0x5f)) += dh;
    __asm ("scasb al, byte es:[di]");
    *(di) -= 0x1a02;
    cx--;
    *((bx + si + 0x44ac)) &= di;
    al += 0x10;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x4629 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_00004629 (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    bp += cx;
    __asm ("lahf");
    al += ah;
    dh += *((di + 0x1a));
    if (*(cs:0x573b) != 1) {
        *(cs:0xe91) = 8;
        goto label_0;
    }
    *(si) |= bp;
    *((bx + si)) += 0x8880;
    al -= 0x20;
    si = 0x709;
    bx = 0xd0;
    cl = 0xff;
    dx++;
    es = cs;
    ds = cs;
    cx = 0x10;
    cx = 0xb880;
    if (dx > 0) {
        goto label_1;
    }
    do {
        *(es:di) = *(si);
        cx--;
        si += 2;
        es:di += 2;
    } while (cx != 0);
    si = di;
    *((bp + si)) += al;
    bx += bp;
    al -= 0xcc;
    *((bp + si)) |= al;
    al = *(0xee35);
    *((bx + di)) = es;
    bx += cx;
    *(bx) |= bh;
    *(bx) = rotate_right8 (*(bx), 0x84);
    es = *((bx + si));
    *(0x651f) |= si;
    __asm ("wait");
    *((bx + si - 0x7a)) += ax;
    *((bp + 0x7040)) += di;
    ax = *(cs:);
label_0:
    ax ^= 0xf156;
    __asm ("aas");
    *(0x5b39) = es;
    tmp_0 = bx + di - 0xa;
    bx + di - 0xa = dx;
    dx = tmp_0;
    do {
        *((bp + si)) ^= dh;
        *((bp + si + 0x467c)) += cl;
        di++;
        __asm ("loop 0x46d8");
    } while (1);
    bl = 0x89;
    *(si) = 0xe854;
    al |= 0xc3;
    di -= *(di);
    ah = 0x99;
    es = sp;
label_1:
    bp |= bx;
    *((bp + di)) += al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x340b */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_0000340b (uint32_t arg3, int16_t arg4, int16_t arg2) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    do {
        *((bp + si + 0x2f)) = fp_stack[0];
        ax -= 0x5f99;
        ax += 0xf597;
        dh -= *((bx + di));
        __asm ("cmpsb byte [si], byte ptr es:[di]");
        *(es:di) = al;
        es:di++;
        *((di - 0x6f)) += bh;
        si++;
        dh -= 0x52;
        __asm ("sti");
        *(0x3d84) = ax;
        *(es:di) = *(si);
        si++;
        es:di++;
        di &= si;
        ax += 0x4903;
        *(0x2ffe) = al;
        __asm ("loopne 0x33fe");
        al = dl;
        al = *(0xe275);
        al = *(si);
        si++;
        al |= 0x48;
        tmp_0 = ax;
        ax = si;
        si = tmp_0;
        *((bp + di)) <<= 0x8d;
        *((di + 0x2346)) |= cx;
        cl = 0x79;
        al += 0x6e;
        si++;
        *((fs:bp + di)) += 0x5d;
        bx += *((di - 0x35));
        ds = ax;
        bl &= bl;
        si = ax;
        *((bx + di)) += 0x7579;
        __asm ("enter 0x5337, 0x4d");
        bp--;
        fp_stack[0] *= *(0x1d06);
        si = bx;
        *((bx + di - 0x3ffb)) ^= cx;
        ah = 0xaa;
        tmp_1 = ax;
        ax = si;
        si = tmp_1;
        cx--;
        if (cx == 0) {
            goto label_0;
        }
        if (cx != 0) {
            goto label_1;
        }
        ax = fcn_00000a35 ();
        dh -= *(si);
        edx:eax = (int64_t) eax;
        bx++;
    } while (bx != 0);
    si = 0x46be;
    *((si + 0xd)) += bh;
    *((bx + di + 0x40)) <<= 1;
    cx += *((bx + di));
    ax = *(0x2f3c);
    al = *(0xb4c6);
    ah = 0xc1;
    *((bp + si - 0x5e76))++;
    *((bp + si)) += si;
    __asm ("aaa");
    dl += dl;
    al = *(0x3d3a);
    __asm ("retf 0x2019");
label_0:
    tmp_2 = ax;
    ax = dx;
    dx = tmp_2;
    al -= cl;
    *((bx + di - 0x5c)) -= bp;
    *(es:di) = *(si);
    si++;
    es:di++;
label_1:
    dl |= *((si + 0x30));
    *((bp + si + 0x63)) += dx;
    if (*((bp + si + 0x63)) <= 0) {
        *((bx + si - 0x7daa)) += cl;
        __asm ("std");
        al = void (*0x5c95)() ();
        dx &= *(si);
        if (dx <= 0) {
        }
    }
    __asm ("int3");
    if (al != 0xa3) {
        goto label_2;
    }
    if (al != 0xa3) {
        void (*0x350d)() ();
    }
    *((bp + di)) ^= ax;
    __asm ("bound sp, dword [bx + si - 3]");
    bp++;
    __asm ("cmpsw word es:[si], word ptr es:[di]");
    bx++;
    ah = 0xc6;
    fp_stack[0] += *((bx + si + 5));
    tmp_3 = ax;
    ax = cx;
    cx = tmp_3;
    *(bx) += 0xa464;
    bx--;
label_2:
    __asm ("in ax, 0x2b");
    *(es:di) = *(si);
    si++;
    es:di++;
    *((si + 0x44)) = rotate_left8 (*((si + 0x44)), 0x40);
    ax ^= 0x420b;
    bx = bx + di - 0x51bb;
    bl += 0xe2;
    *((bx + si)) += sp;
    dx = 0x1f44;
    ch += *((bx + di - 0x5b83));
    cx -= bp;
    dh = 0x80;
    eax = (int32_t) ax;
    ax += 0x4b1f;
    ax += 0x4b1f;
    cl = 0x4d;
    return __asm ("ljmp 0x74d2:0xb12");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_388/ia32_com/subject.exe @ 0x2954 */
#include <stdint.h>
 
int8_t fcn_00002954 (int16_t arg4) {
    cx = arg4;
    cx++;
    al -= 0x16;
    *((bp + si)) -= 0x1a;
    *(ebx) = ds;
    return _hlt ();
}
