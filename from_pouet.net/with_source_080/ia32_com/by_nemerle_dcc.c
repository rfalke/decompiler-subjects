/*
 * Input file	: from_pouet.net/with_source_080/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


char proc_1 (int arg0, int arg1)
/* Uses register arguments:
 *     arg0 = di.
 *     arg1 = cx.
 * Unknown calling convention.
 */
{
    *arg0 = 0xf0f;
    return ((arg1 + 1));
}


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1;
int loc2; /* ax */
int loc3; /* si */
int loc4; /* cx */

    do {
        loc1 = (loc1 + 1);

        do {
            loc2 = (loc2 ^ *loc3);
        } while (//*failed*//);
        HLI_POP loc4
        HLI_POP loc1
    } while ((proc_1 () == 128));
}

