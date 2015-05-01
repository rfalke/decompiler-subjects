/*
 * Input file	: from_pouet.net/with_source_184/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void proc_1 (int arg0)
/* Uses register arguments:
 *     arg0 = ax.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* bx */
int loc2; /* dx */
long loc3; /* dx:ax */
int loc4; /* al */
    loc1 = arg0;
    arg0 = 0x34dd;
    loc2 = 18;

    if (loc2 < loc1) {
        arg0 = (loc3 / loc1);
        loc1 = LO(loc3);

        if ((loc4 & 3) == 0) {
        }
    }
}


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* di */
int loc2; /* si */
int loc3; /* ax */
int loc4; /* al */
long loc5; /* dx:ax */
    loc1 = 360;
    loc2 = *loc1;

    do {
        loc3 = 0;
        loc4 = *loc2;
        proc_1 ((loc3 << 4));
        loc5 = (0x3e8 * 100);
    } while ((--loc4 != 0));
}

