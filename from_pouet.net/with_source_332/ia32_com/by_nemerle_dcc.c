/*
 * Input file	: from_pouet.net/with_source_332/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


int proc_3 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* ax */
    loc1 = ((0x41a7 * var0013E) + 0xe80b);
    var0013E = loc1;
    return (loc1);
}


char proc_2 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* ax */
int loc2; /* bx */
char loc3; /* al */
    var0012E = ((proc_3 () & 127) + 36);
    var0012C = 160;
    var00138 = 30;
    loc1 = 160;
    loc2 = var0013A;

    if (loc2 >= loc1) {
        var0013A = loc1;
        loc2 = 0;
    }
    es[bx] = 15;
    loc2 = var0013C;

    if (loc2 <= loc1) {
        var0013C = loc1;
        loc2 = 319;
    }
    es[bx] = 15;
    return (loc3);
}


char proc_1 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
    return (proc_2 ());
}


void proc_4 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* al */
    var0012A = 0;

    if ((loc1 & 4) != 0) {
        var0012A = (var0012A + 1);
    }

    if ((loc1 & 8) != 0) {
        var0012A = (var0012A - 1);
    }
}


char proc_5 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* ax */
int loc2; /* bx */
int loc3; /* cx */
char loc4; /* al */
    loc1 = var0012C;
    loc2 = var00128;

    if (loc1 >= 230) {
        loc1 = var0012E;
        loc2 = (loc2 + 5);
        loc2 = var00128;

        if (loc1 >= loc2) {

            if ( *failed condition recovery* ) {
                loc2 = (loc2 + 1);

                if (loc2 >= 189) {
                    loc2 = 189;
                }
            }
        }
        else {
            loc2 = (loc2 - 1);

            if (loc2 <= 2) {
                loc2 = 2;
            }
        }
    }
    var00128 = loc2;
    loc2 = var0012A;

    if (loc2 == 0) {
    }
    loc2 = (loc2 + var00126);

    if (loc2 < 2) {
        loc2 = 2;
    }

    if (loc2 > 189) {
        loc2 = 189;
    }
    var00126 = loc2;

    if (var00138 != 0) {
        var00138 = (var00138 - 1);
    }
    else {
        loc1 = (var0012E + var00132);
        var0012E = loc1;

        if (loc1 == 2) {
            var00132 = 1;
        }

        if (loc1 == 198) {
            var00132 = 0xffff;
        }
        loc3 = (var0012C + var00130);
        var0012C = loc3;

        if (((loc3 == 2) && (loc1 >= loc2)) && (loc1 < (loc2 + 10))) {
            var00130 = 1;
        }
        loc2 = var00128;

        if (((loc3 == 317) && (loc1 >= loc2)) && (loc1 < (loc2 + 10))) {
            var00130 = 0xffff;
        }

        if (loc3 == 0) {
            var0013C = (var0013C + 0xfffffffe);
            return (proc_2 ());
        }
        else {

            if (loc3 == 319) {
                var0013A = (var0013A + 2);
l1:             return (loc4);
            }
            else {
                goto L1;
            }
        }
    }
}


void proc_6 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* bx */
int loc2; /* ax */
    loc1 = ((var00136 * 320) + var00134);
    es[bx] = 18;
    loc2 = var0012E;
    var00136 = loc2;
    loc1 = ((loc2 * 320) + var0012C);
    es[bx] = 14;
    var00134 = var0012C;
    loc1 = (((var00126 - 1) * 320) + 1);
    es[bx] = 18;

    do {
        loc1 = (loc1 + 320);
        es[bx] = 10;
    } while (//*failed*//);
    loc1 = (loc1 + 320);
    es[bx] = 18;
    loc1 = (((var00128 - 1) * 320) + 318);
    es[bx] = 18;

    do {
        loc1 = (loc1 + 320);
        es[bx] = 12;
    } while (//*failed*//);
    loc1 = (loc1 + 320);
    es[bx] = 18;
}


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* al */
    proc_1 ();

    do {
        proc_4 ();

        do {
        } while (((proc_5 () & 8) != 0));

        do {
        } while (((loc1 & 8) == 0));
        proc_6 ();
    } while (//*failed*//);
}

