/*
 * Input file	: from_pouet.net/with_source_064/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1;
int loc2; /* al */
int loc3; /* bh */
int loc4; /* ah */
int loc5; /* dh */

    for (;;) {
        loc1 = 315;

        do {
            loc2 = (((*loc1 + ds[di+0x140]) + loc3) + loc4);
        } while (//*failed*//);
        loc5 = (loc5 + 1);
        loc3 = (loc5 >> 4);
    }	/* end of loop */
}

