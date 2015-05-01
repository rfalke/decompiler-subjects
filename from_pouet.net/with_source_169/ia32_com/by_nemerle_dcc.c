/*
 * Input file	: from_pouet.net/with_source_169/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


char proc_2 (int arg0, int arg1)
/* Uses register arguments:
 *     arg0 = di.
 *     arg1 = ax.
 * Unknown calling convention.
 */
{
int loc1; /* bx */
int loc2; /* al */
int loc3; /* bp */
char loc4; /* al */
    arg0 = (arg0 + *loc1);

    do {
        loc2 = ((loc2 ^ 8) ^ 8);
        arg0 = (arg0 + 316);
    } while ((arg0 < loc3));
    return (loc4);
}


char proc_1 (int arg0, char arg1)
/* Uses register arguments:
 *     arg0 = ax.
 *     arg1 = al.
 * Unknown calling convention.
 * Contains coprocessor instructions.
 */
{
int loc1; /* di */
    return (proc_2 ((loc1 + 170)));
}


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 * Contains coprocessor instructions.
 */
{
int loc1;
int loc2; /* al */
int loc3; /* bx */
int loc4; /* sp */
int loc5; /* bp */
int loc6; /* ax */
char loc7; /* al */
    loc2 = 19;
    loc3 = loc4;
    loc5 = 0xfe00;

    for (;;) {
        loc1 = 0x400;
        HLI_POP loc1

        do {
            proc_1 ((loc6 + 1));
            HLI_POP loc1
            *loc3 = ! (*loc3);
            proc_2 ((loc1 + 150), (loc6 + 1));
            HLI_POP loc1
            loc7 = proc_1 (4);
            HLI_POP loc1

            if (loc2 != 1) {
                loc1 = (loc1 + 320);
            }
            else {
            }
        } while ((loc1 < loc5));
    }	/* end of loop */
}

