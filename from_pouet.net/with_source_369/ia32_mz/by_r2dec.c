/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_369/ia32_mz/subject.exe @ 0x0 */
#include <stdint.h>
 
uint16_t entry0 (void) {
    /* [00] -rwx section size 4064 named seg_000 */
    bx = cs;
    dx = 0x105;
    bx += dx;
label_0:
    si = 0;
    di = 0;
    bx--;
    ds = bx;
    ax = bx + 0x630;
    es = ax;
    cx = 8;
    do {
        *(es:di) = *(si);
        cx--;
        si += 2;
        es:di += 2;
    } while (cx != 0);
    dx--;
    if (dx != 0) {
        goto label_0;
    }
    es = bx;
    ds = ax;
    di = 0;
    si = 0x30;
    ax += 0xf3;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_369/ia32_mz/subject.exe @ 0xb5a */
#include <stdint.h>
 
uint16_t fcn_00000b5a (int16_t arg3, int16_t arg4) {
    bx = arg3;
    cx = arg4;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    tmp_0 = ax;
    ax = cx;
    cx = tmp_0;
    cx = es;
    *((si - 0x7966)) >>= 1;
    cx = 0;
    bx &= bx;
    cl = 0x15;
    *((bx + si + 0xf)) -= dh;
    ax = void (*0x1c55)(uint16_t) (es);
    fp_stack[0] /= *(di);
    __asm ("clc");
    tmp_1 = dx;
    dx = ax;
    ax = tmp_1;
    void (*0x1c02)() ();
    bx = 0xeb03;
    __asm ("loop 0xbbe");
    dh += *((di + 0x12));
    al = *(0xc2e1);
    ax = void (*0xa65a)() ();
    fp_stack[0] += fp_stack[3];
    tmp_2 = ax;
    ax = bp;
    bp = tmp_2;
    __asm ("xlatb");
    *((bx + si - 0x34)) += bx;
    bh -= *(si);
    si += *((di + 0x29));
    *((bx + di)) -= ch;
    ch ^= *((bx + si));
    al = void (*0x20cb)() ();
    al += 0xb7;
    if (al != 4) {
        void (*0xbbd)() ();
    }
    al -= cl;
    return _hlt ();
}
