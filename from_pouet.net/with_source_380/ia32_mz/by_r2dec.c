/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_380/ia32_mz/subject.exe @ 0x1 */
#include <stdint.h>
 
int16_t entry0 (void) {
    ax = 0x1f1;
    dx = cs;
    dx += ax;
    cx = cs;
    cx += 0x117c;
    cx = 5;
    cl = 0xff;
    bx = ss;
    bx -= 0x1a;
    cl = 0x3c;
label_0:
    si = 0x32;
    di = 0;
    bp--;
    es = bp;
    ds = dx;
    dx--;
    cl = 8;
    do {
        *(es:di) = *(si);
        cx--;
        si += 2;
        es:di += 2;
    } while (cx != 0);
    ax--;
    if (ax >= 0) {
        goto label_0;
    }
    ds = bp;
    es = cs;
    di = 0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_380/ia32_mz/subject.exe @ 0x14c7 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void fcn_000014c7 (int16_t arg_64d6h, int16_t arg2) {
    dx = arg2;
    __asm ("enter 0xffffffffffffe091, 0x1c");
    *((bp + si + 0x23db)) -= dx;
    dx &= *((bp + di + 0x64d6));
    *((di - 0x736b)) = rotate_left16 (*((di - 0x736b)), 1);
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_380/ia32_mz/subject.exe @ 0x140e */
#include <stdint.h>
 
void fcn_0000140e (void) {
    si = 0xbd99;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_380/ia32_mz/subject.exe @ 0x1066 */
#include <stdint.h>
 
int16_t fcn_00001066 (signed int16_t arg3, int16_t arg4) {
    bx = arg3;
    cx = arg4;
    bp = cx * 0xffd6;
    *((bp + si)) += cx;
    __asm ("cmc");
    *((di + 0x20)) &= bl;
    *((si + 5)) &= 0xd76a;
    __asm ("xlatb");
    __asm ("outsb dx, byte [si]");
    *((bp + si + 0x4a65)) &= al;
    __asm ("out dx, al");
    dh = 0xe9;
    __asm ("daa");
    ax = *(0x1515);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_380/ia32_mz/subject.exe @ 0xa3d */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_00000a3d (int16_t arg_1ch, int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    int16_t var_5fh;
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    dx -= *((bp + di - 0x5f));
    __asm ("daa");
    si -= ax;
    *((bp + di)) -= al;
    cx -= *((bp + di + 0x1c));
    ax = rotate_right16 (ax, 9);
    *(0x2201) = ax;
    bl ^= *((bx + si + 0x5b));
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_380/ia32_mz/subject.exe @ 0x3c */
#include <stdint.h>
 
void fcn_0000003c (void) {
    si = 0xe;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_380/ia32_mz/subject.exe @ 0x178f */
#include <stdint.h>
 
void fcn_0000178f (void) {
    __asm ("scasb al, byte es:[di]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_380/ia32_mz/subject.exe @ 0x1db4 */
#include <stdint.h>
 
int16_t fcn_00001db4 (int16_t arg4) {
    cx = arg4;
    ax = bp;
    bl = cl;
    cx = -cx;
    cl += 0x10;
    ax >>= cl;
    bh -= bl;
    if (bh > 0) {
        cl = bl;
        bp <<= cl;
        return ax;
    }
    if (bp != 0) {
        bh = -bh;
        cl = bh;
        tmp_0 = ax;
        ax = bp;
        bp = tmp_0;
        ax = *(si);
        si += 2;
        bx = ax;
        ax <<= cl;
        tmp_1 = ax;
        ax = bp;
        bp = tmp_1;
        cx = -cx;
        cl += 0x10;
        bx >>= cl;
        ax += bx;
        bh = cl;
        return ax;
    }
    tmp_2 = ax;
    ax = bp;
    bp = tmp_2;
    ax = *(si);
    si += 2;
    tmp_3 = ax;
    ax = bp;
    bp = tmp_3;
    bh = 0x10;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_380/ia32_mz/subject.exe @ 0x1de7 */
#include <stdint.h>
 
void fcn_00001de7 (void) {
    bp <<= 1;
    bh--;
    if (bh == 0) {
        void (*0x1de1)() ();
    }
}
