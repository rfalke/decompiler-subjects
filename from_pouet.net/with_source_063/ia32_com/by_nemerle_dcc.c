/*
 * Input file	: from_pouet.net/with_source_063/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* al */
int loc2; /* si */
int loc3; /* tmp */
int loc4; /* ah */
int loc5; /* ax */
    loc1 = 19;
    loc2 = 0xfff;
    loc1 = 40;

    do {
        *loc2 = loc1;
        loc2 = ((loc2 + 343) ^ 0x934);
    } while (//*failed*//);
    loc2 = 0;
    loc1 = *loc2;

    for (;;) {
        ds[si+0x140] = loc1;
        loc3 = loc1;
        loc1 = ds[si+0x140];
        loc4 = loc3;
        loc2 = (loc2 + loc5);
        ds[si-0x140] = loc1;
        loc2 = (loc2 + 2);
    }	/* end of loop */
}

