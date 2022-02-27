/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_361/ia32_mz/subject.exe @ 0x0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [00] -rwx section size 3326 named seg_000 */
    ax = cs;
    ds = cs;
    ax += 0xd1;
    es = ax;
    si = 0xaf;
    di = 0;
    dl = 0x80;
    cx = 0;
    do {
        *(es:di) = *(si);
        si++;
        es:di++;
label_0:
        bx = 0x10;
        void (*bp)(uint16_t, uint16_t, uint16_t, uint16_t) (ax, ax, es, ds);
    } while (ax >= 0);
    void (*bp)() ();
    cx++;
    if (cx >= 0) {
        goto label_1;
    }
    void (*bp)() ();
    if (cx < 0) {
        goto label_2;
    }
    do {
        ax = void (*bp)() ();
        bl += bl;
    } while (bl >= 0);
    if (bl != 0) {
        goto label_3;
    }
    tmp_0 = ax;
    ax = bx;
    bx = tmp_0;
    goto label_4;
label_1:
    bh = 1;
    do {
        void (*bp)() ();
        bh += bh;
        if (bh < 0) {
            goto label_5;
        }
        void (*bp)() ();
    } while (bh < 0);
    do {
        void (*bp)() ();
        cx += cx;
        void (*bp)() ();
    } while (cx < 0);
    bh -= 3;
    if (bh >= 0) {
label_2:
        bl = *(si);
        si++;
        if (si < 0) {
            bl >>= 1;
            cl -= bh;
        }
        if (bx <= 0x7f) {
            cx++;
            cx++;
        }
    }
label_3:
    bx = -bx;
    do {
        al = *((es:bx + di));
label_4:
        *(es:di) = al;
        es:di++;
        __asm ("loop 0x65");
    } while (1);
    goto label_0;
label_5:
    ax = bx;
    al = 0xe8;
    es = bx;
    di = 0;
    cx = 0x10b3;
    do {
        __asm ("repne scasb al, byte es:[di]");
        __asm ("jcxz 0x8c");
        *(es:di) -= di;
        __asm ("scasw ax, word es:[di]");
        cx--;
        __asm ("loopne 0x81");
    } while (1);
    dx = bx;
    di = 0;
    cx = 0x16;
    do {
        al = *(si);
        si++;
        ax &= 0xff;
        if (ax == 0) {
            ax = *(si);
            si += 2;
        }
        di += ax;
        if (di < 0) {
            dh += 0x10;
        }
        es = dx;
        *(es:di) += bx;
        __asm ("loop 0x93");
    } while (1);
    es = bx;
    ds = bx;
    return __asm ("ljmp 0xd1:0x67d");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_361/ia32_mz/subject.exe @ 0xacf */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_00000acf (int16_t arg3, int16_t arg1) {
    bx = arg3;
    ax = arg1;
    *(si) = rotate_left8 (*(si), 1);
    *((bx + si)) += cl;
    sp = *((bx + si)) * 0xffef;
    if (*((bx + si)) > 0) {
        void (*0xb4b)() ();
    }
    *((bx + di + 0x460e)) &= 0xffdf;
    edx:eax = (int64_t) eax;
    *(es:di) = ax;
    es:di += 2;
    al = *(si);
    si++;
    __asm ("aas");
    __asm ("popaw");
    __asm ("fcmovnb st(0), st(7)");
    dh >>= 0xdb;
    return void (*0x1603)() ();
}
