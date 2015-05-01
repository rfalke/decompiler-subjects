/*
 * Input file	: from_pouet.net/with_source_077/ia32_com/subject.exe
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
int loc3; /* ah */
int loc4; /* ax */
int loc5; /* bp */
    loc1 = 19;

    do {
        loc2 = 319;

        do {
            loc2 = (loc2 - 1);
            loc3 = ((loc4 + *loc2) + loc1);
            loc4 = (loc4 >> 10);
        } while (//*failed*//);

        do {
            loc5 = (loc5 + 1);
            loc1 = ((ss[bp] & 15) | 16);
        } while (//*failed*//);

        do {
        } while (((loc1 & 8) == 0));
    } while ((loc1 != 1));
}

