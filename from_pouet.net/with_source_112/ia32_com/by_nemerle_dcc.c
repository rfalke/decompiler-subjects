/*
 * Input file	: from_pouet.net/with_source_112/ia32_com/subject.exe
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
int loc3; /* ax */
int loc4; /* si */
int loc5; /* bp */
int loc6; /* dx */
int loc7; /* tmp */
long loc8; /* dx:ax */
    loc2 = 19;

    do {
    } while ((++loc3 != 0));
    loc4 = 321;
    loc5 = 320;

    for (;;) {
l1: 
        do {

            do {
                *loc1 = (*loc1 + 1);
                loc1 = (loc1 + 1);
            } while (//*failed*//);
            loc1 = (loc1 + loc5);
        } while (//*failed*//);
        HLI_POP loc1
        loc1 = (loc1 + loc4);
        loc6 = 0;
        loc3 = loc1;
        loc7 = loc8;
        HI(loc8) = (loc7 % loc5);

        if (((loc7 / loc5) & 127) == 0) {
            loc4 = (loc4 ^ 126);
        }

        if ((HI(loc8) & 255) == 0) {
            loc4 = (loc4 ^ 0xffffff80);
        }
        else {
            goto L1;
        }
    }	/* end of loop */
}

