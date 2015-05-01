/*
 * Input file	: from_pouet.net/with_source_120/ia32_com/subject.exe
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
int loc3; /* ah */

    for (;;) {
        loc1 = 320;

        do {
            loc2 = (((*loc1 - ds[di+0x140]) + loc3) + 253);
        } while (//*failed*//);
    }	/* end of loop */
}

