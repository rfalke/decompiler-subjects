/*
 * Input file	: from_pouet.net/with_source_394/ia32_mz/subject.exe
 * File type	: EXE
 */

#include "dcc.h"


void proc_1 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
}


void proc_2 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* al */

    do {
    } while (((loc1 & 8) == 0));
}


void proc_4 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
}


void proc_5 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* ax */
    loc1 = 16;
}


void proc_6 ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 */
{
                    MOV            ax, 10h            ;Segment constant
                    MOV            ds, ax             
                    MOV            si, 8C0h           
                    MOV            ax, 0A000h         
                    MOV            es, ax             
                    MOV            di, 3200h          
                    MOV            cx, 9100h          
                    CLD                               
                    REP MOVSB                         
                    RET                               
}


char proc_8 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
char loc1; /* al */

    if (varFFFFDC60 != 7) {
        varFFFFDC60 = (varFFFFDC60 + 1);
        return (loc1);
    }
    else {
        varFFFFDC60 = 0;
        varFFFFDC6A = (varFFFFDC6A + 1);
        return (loc1);
    }
}


void proc_7 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* ax */
int loc2; /* al */
int loc3; /* bx */
int loc4; /* ah */
int loc5; /* si */
int loc6; /* di */
int loc7; /* cx */
int loc8; /* dx */

    do {
        varFFFFDC60 = 0;
        varFFFFDC6A = 0;
        loc1 = 16;
        loc1 = *((0xe055 + varFFFFDC6A));
    } while ((loc2 != 0));

    if (loc2 == 32) {
        loc3 = 0xa00;
    }
    else {

        if (loc2 == 48) {
            loc3 = 208;
        }
        else {

            if (loc2 == 49) {
                loc3 = 216;
            }
            else {

                if (loc2 == 50) {
                    loc3 = 224;
                }
                else {

                    if (loc2 == 51) {
                        loc3 = 232;
                    }
                    else {

                        if (loc2 == 52) {
                            loc3 = 240;
                        }
                        else {

                            if (loc2 == 53) {
                                loc3 = 248;
                            }
                            else {

                                if (loc2 == 54) {
                                    loc3 = 256;
                                }
                                else {

                                    if (loc2 == 55) {
                                        loc3 = 264;
                                    }
                                    else {

                                        if (loc2 == 56) {
                                            loc3 = 272;
                                        }
                                        else {

                                            if (loc2 == 57) {
                                                loc3 = 280;
                                            }
                                            else {

                                                if (loc2 == 63) {
                                                    loc3 = 288;
                                                }
                                                else {

                                                    if (loc2 == 33) {
                                                        loc3 = 296;
                                                    }
                                                    else {

                                                        if (loc2 == 46) {
                                                            loc3 = 304;
                                                        }
                                                        else {

                                                            if (loc2 == 44) {
                                                                loc3 = 312;
                                                            }
                                                            else {
                                                                loc4 = 0;
                                                                loc3 = (loc1 * 8);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    loc1 = 16;
    loc5 = ((0x99c0 + varFFFFDC60) + loc3);
    loc1 = 0xa000;
    loc6 = 0xd97e;
    loc2 = 0;
    loc7 = loc5;
    loc8 = loc6;

    for (;;) {
        loc4 = 8;

        do {
            loc5 = (loc5 + 319);
            loc6 = (loc6 + 319);
        } while ((--loc4 != 0));
        loc5 = loc7;
        loc6 = loc8;

        if (loc2 != 1) {
            loc5 = loc7;
            loc2 = (proc_8 () + 1);
        }
        else {

            if (varFFFFDC60 != 7) {
                varFFFFDC60 = (varFFFFDC60 + 1);
            }
            else {
                varFFFFDC60 = 0;
                varFFFFDC6A = (varFFFFDC6A + 1);
            }
        }
    }	/* end of loop */
}


void proc_3 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* dx */
    proc_4 ();
    proc_5 ();
    proc_6 ();
    proc_7 ();
    varFFFFDC66 = 0;
    varFFFFDC68 = 0;
    loc1 = 968;
}


void proc_9 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* ax */
    loc1 = 16;
    varFFFFDC64 = (*((0xd8c0 + varFFFFDC68)) + 100);
    varFFFFDC62 = (*((0xd920 + varFFFFDC66)) + 68);

    if (varFFFFDC68 == 94) {
        varFFFFDC68 = 0;
    }
    else {
        varFFFFDC68 = (varFFFFDC68 + 1);
        varFFFFDC68 = (varFFFFDC68 + 1);
    }

    if (varFFFFDC66 == 254) {
        varFFFFDC66 = 0;
    }
    else {
        varFFFFDC66 = (varFFFFDC66 + 1);
        varFFFFDC66 = (varFFFFDC66 + 1);
        varFFFFDC72 = 0;
    }
}


char proc_10 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* ax */
int loc2; /* si */
int loc3; /* di */
int loc4; /* al */
char loc5; /* al */
    loc1 = 16;
    loc2 = 0;
    loc1 = 0xa000;
    loc3 = (varFFFFDC62 + (varFFFFDC64 * 320));
    varFFFFDC6C = loc2;
    varFFFFDC6E = loc3;
    varFFFFDC5E = 0;

    do {

        do {
            loc4 = *loc2;
            es[di] = loc4;
            loc2 = (loc2 + 1);
            loc3 = (loc3 + 1);
        } while (//*failed*//);
        varFFFFDC5E = (varFFFFDC5E + 1);
        loc1 = (varFFFFDC5E * 320);
        loc2 = (varFFFFDC6C + loc1);
        loc3 = (varFFFFDC6E + loc1);
    } while ((varFFFFDC5E != 6));
    varFFFFDC5E = 0;
    return (loc5);
}


void proc_11 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* ax */
int loc2; /* di */
int loc3; /* si */
int loc4; /* ah */
int loc5; /* al */
int loc6; /* bx */
int loc7; /* cx */
int loc8; /* dx */
    loc1 = 0xa000;
    loc2 = 0xd840;
    loc3 = 0xd842;
    loc4 = 8;

    do {
        loc2 = (loc2 + 2);
        loc3 = (loc3 + 2);
    } while ((--loc4 != 0));
    loc1 = 16;
    loc1 = *((0xe055 + varFFFFDC6A));

    while ((loc5 == 0)) {
        varFFFFDC60 = 0;
        varFFFFDC6A = 0;
        loc1 = 16;
        loc1 = *((0xe055 + varFFFFDC6A));
    }	/* end of while */

    if (loc5 == 32) {
        loc6 = 0xa00;
    }
    else {

        if (loc5 == 48) {
            loc6 = 208;
        }
        else {

            if (loc5 == 49) {
                loc6 = 216;
            }
            else {

                if (loc5 == 50) {
                    loc6 = 224;
                }
                else {

                    if (loc5 == 51) {
                        loc6 = 232;
                    }
                    else {

                        if (loc5 == 52) {
                            loc6 = 240;
                        }
                        else {

                            if (loc5 == 53) {
                                loc6 = 248;
                            }
                            else {

                                if (loc5 == 54) {
                                    loc6 = 256;
                                }
                                else {

                                    if (loc5 == 55) {
                                        loc6 = 264;
                                    }
                                    else {

                                        if (loc5 == 56) {
                                            loc6 = 272;
                                        }
                                        else {

                                            if (loc5 == 57) {
                                                loc6 = 280;
                                            }
                                            else {

                                                if (loc5 == 63) {
                                                    loc6 = 288;
                                                }
                                                else {

                                                    if (loc5 == 33) {
                                                        loc6 = 296;
                                                    }
                                                    else {

                                                        if (loc5 == 46) {
                                                            loc6 = 304;
                                                        }
                                                        else {

                                                            if (loc5 == 44) {
                                                                loc6 = 312;
                                                            }
                                                            else {
                                                                loc4 = 0;
                                                                loc6 = (loc1 * 8);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    loc1 = 16;
    loc3 = ((0x99c0 + varFFFFDC60) + loc6);
    loc1 = 0xa000;
    loc2 = 0xd97e;
    loc5 = 0;
    loc7 = loc3;
    loc8 = loc2;

    for (;;) {
        loc4 = 8;

        do {
            loc3 = (loc3 + 319);
            loc2 = (loc2 + 319);
        } while ((--loc4 != 0));
        loc3 = loc7;
        loc2 = loc8;

        if (loc5 != 1) {
            loc3 = loc7;
            loc5 = (proc_8 () + 1);
        }
        else {

            if (varFFFFDC60 != 7) {
                varFFFFDC60 = (varFFFFDC60 + 1);
            }
            else {
                varFFFFDC60 = 0;
                varFFFFDC6A = (varFFFFDC6A + 1);
            }
        }
    }	/* end of loop */
}


void proc_13 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* dx */
    loc1 = 968;
}


void proc_14 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* ax */
int loc2; /* al */
int loc3; /* bx */
int loc4; /* dx */
int loc5; /* ah */
int loc6; /* si */
long loc7; /* dx:ax */
int loc8; /* di */
    loc1 = 16;
    loc1 = *((0xdb7d + varFFFFDC78));

    if (loc2 == 32) {
        loc3 = 0x1400;
    }
    else {
        loc4 = ((loc1 - 1) * 8);
        loc5 = 0;
        loc3 = loc1;
    }
    loc1 = 16;
    loc6 = (0xadc0 + loc3);
    loc1 = 0xa000;
    loc5 = 0;
    loc2 = varFFFFDC7B;
    loc7 = (LO(loc7) * 8);
    loc8 = (0xf00 + LO(loc7));
    HI(loc7) = 16;

    do {
        loc6 = (loc6 + 312);
        loc8 = (loc8 + 312);
    } while ((--HI(loc7) != 0));

    if (varFFFFDC7B != 39) {
        varFFFFDC7B = (varFFFFDC7B + 1);
        varFFFFDC78 = (varFFFFDC78 + 1);
    }
    else {
        varFFFFDC7B = 0;
        varFFFFDC77 = 0;

        if (varFFFFDC78 <= 0x4b0) {
            varFFFFDC78 = (varFFFFDC78 + 1);
        }
        else {
            varFFFFDC78 = 0;
        }
    }
}


void proc_12 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{

    if (varFFFFDC77 != 1) {

        if (varFFFFDC7C != 63) {
            varFFFFDC7C = (varFFFFDC7C + 1);
            proc_13 ();
        }
        else {

            if (varFFFFDC76 != 255) {
                varFFFFDC76 = (varFFFFDC76 + 1);
            }
            else {
                varFFFFDC77 = 1;
                varFFFFDC76 = 0;
            }
        }
    }
    else {

        if (varFFFFDC7C != 0) {
            proc_13 ();
            varFFFFDC7C = (varFFFFDC7C - 1);
        }
        else {
            proc_14 ();
        }
    }
}


void proc_15 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* dx */

    while ((varFFFFDC5D != 1)) {
        loc1 = 968;

        if (varFFFFDC5C != 63) {
            varFFFFDC5C = (varFFFFDC5C + 1);
        }
        else {
            varFFFFDC5D = 1;
        }
    }	/* end of while */
    loc1 = 968;

    if (varFFFFDC5C != 15) {
        varFFFFDC5C = (varFFFFDC5C - 1);
    }
    else {
        varFFFFDC5D = 0;
    }
}


char proc_16 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* ax */
int loc2; /* si */
int loc3; /* di */
char loc4; /* al */
    loc1 = 16;
    loc1 = 0xa000;
    varFFFFDC6C = ((0x8c0 + varFFFFDC62) + ((varFFFFDC64 - 40) * 320));
    varFFFFDC6E = (varFFFFDC62 + (varFFFFDC64 * 320));
    varFFFFDC5E = 0;

    do {
        varFFFFDC5E = (varFFFFDC5E + 1);
        loc1 = (varFFFFDC5E * 320);
        loc2 = varFFFFDC6C;
        loc3 = varFFFFDC6E;
    } while ((varFFFFDC5E != 6));
    varFFFFDC5E = 0;
    return (loc4);
}


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* ax */
    loc1 = 16;
    proc_1 ();

    do {
        proc_2 ();
    } while (//*failed*//);
    proc_1 ();
    proc_3 ();

    do {
        proc_9 ();
        proc_10 ();
        proc_2 ();
        proc_11 ();
        proc_12 ();
        proc_15 ();
    } while ((proc_16 () != 1));
    proc_1 ();
}

