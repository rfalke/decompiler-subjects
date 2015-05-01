/*
 * Input file	: from_pouet.net/with_source_364/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


int proc_2 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* dx */
    loc1 = 904;

    do {
    } while (//*failed*//);
    loc1 = (loc1 + 1);

    do {
    } while (//*failed*//);
    return (loc1);
}


int proc_1 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* ax */
int loc2; /* si */
int loc3; /* ah */
int loc4; /* al */
int loc5; /* bx */
    loc1 = 0x2508;
    loc1 = 244;

    do {
        loc1 = proc_2 ();
    } while ((--loc1 != 0));
    loc2 = 0x8fd;

    do {
        loc3 = cs[si];

        do {
            loc1 = (proc_2 () + 1);
        } while (((loc4 & 31) != 0));
    } while (((loc4 & loc4) != 0));
    return (loc5);
}


int proc_4 (char arg0, int arg1, int arg2)
/* Uses register arguments:
 *     arg0 = dl.
 *     arg1 = di.
 *     arg2 = cx.
 * Untranslatable routine.  Assembler provided.
 * Return value in register ax.
 * Unknown calling convention.
 */
{
                    PUSH           dx                 
                    MOV            dx, di             
                    XOR            ax, 0              

               L1:  LODSB                             
                    CMP            al, 20h            
                    JB             L2                 
                    STOSW                             

               L3:  LOOP           L1                 

               L4:  POP            dx                 
                    RET                               

               L2:  CMP            al, 10h            
                    JAE            L5                 
                    AND            ah, 0F0h           
                    OR             ah, al             
                    JMP            L3                 

               L5:  CMP            al, 18h            
                    JE             L6                 
                    JAE            L7                 
                    SUB            al, 10h            
                    AND            ah, 8Fh            
                    ADD            al, al             
                    ADD            al, al             
                    ADD            al, al             
                    ADD            al, al             
                    OR             ah, al             
                    JMP            L3                 

               L7:  CMP            al, 19h            
                    MOV            bx, cx             
                    LODSB                             
                    MOV            cl, al             
                    MOV            al, 20h            
                    JE             L8                 
                    LODSB                             
                    DEC            bx                 

               L8:  XOR            ch, 0              
                    INC            cx                 
                    REP STOSW                         
                    MOV            cx, bx             
                    DEC            cx                 
                    LOOPNE         L1                 
                    JMP            L4                 

               L6:  ADD            dx, 0A0h           
                    MOV            di, dx             
                    JMP            L3                 
}


int proc_3 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* di */
int loc2; /* bl */
int loc3; /* cx */
    loc1 = (0xfa0 + 0x5b4);

    if ((loc2 & 1) == 0) {
        loc3 = 95;
    }
    else {
        loc3 = 205;
        loc1 = (loc1 + 70);
    }
    return (proc_4 ());
}


int proc_6 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* ah */
int loc2; /* bl */
int loc3; /* bx */
int loc4; /* ax */

    if (*HLI_INVALID*) {

        do {
            loc1 = (loc1 | loc2);
        } while (//*failed*//);
        HLI_POP loc3
        HLI_POP loc4
    }
    return (loc3);
}


void proc_5 ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 */
{
                    TEST           dl, 4              
                    JE             L1                 
                    XOR            di, 0              
                    MOV            cx, 7D0h           
                    MOV            ax, 0B1h           
                    TEST           bp, 1              
                    JNE            L2                 
                    NOT            ah                 

               L2:  REP STOSW                         

               L1:  TEST           dl, 40h            
                    JE             L3                 
                    PUSH           ds                 
                    PUSH           di                 
                    PUSH           si                 
                    PUSH           es                 
                    POP            ds                 
                    XOR            di, 0              
                    MOV            si, 0FA0h          
                    MOV            ax, bp             
                    MOV            cl, 50h            
                    MOV            tmp, ax            ;Synthetic inst
                    DIV            cl                 
                    MOD            cl                 ;Synthetic inst
                    MOV            bl, ah             
                    XOR            bh, 0              
                    PUSH           bp                 
                    MOV            bp, bx             
                    ADD            bx, bx             
                    MOV            dh, 19h            

               L4:  MOV            cx, 50h            

               L5:  LODSW                             
                    CMP            al, 20h            
                    JNE            L6                 
                    TEST           ah, 0F0h           
                    JNE            L6                 
                    CMP            cx, bp             
                    JB             L7                 
                    MOV            ax, [bx+si+0F9Eh]  

               L6:  STOSW                             
                    LOOP           L5                 
                    DEC            dh                 
                    JNE            L4                 
                    POP            bp                 
                    POP            si                 
                    POP            di                 
                    POP            ds                 

               L3:  TEST           dl, 80h            
                    JE             L8                 
                    PUSH           ds                 
                    PUSH           si                 
                    PUSH           di                 
                    PUSH           es                 
                    POP            ds                 
                    MOV            si, 0FA0h          
                    XOR            di, 0              
                    MOV            dh, 19h            
                    XOR            bx, 0              

               L9:  MOV            ax, bp             
                    ADD            ax, ax             
                    ADD            ax, ax             
                    ADD            al, dh             
                    ADD            al, bh             
                    ADD            ax, ax             
                    ADD            ax, ax             
                    CWD                               
                    XOR            al, ah             
                    MOV            ah, al             
                    SHR            ah, 1              
                    SUB            al, ah             
                    XOR            ah, 0              
                    ADD            ax, 8              
                    MOV            cx, bp             
                    MOV            bl, bh             
                    ADD            bl, dh             
                    ADD            bl, cl             
                    AND            bl, 19h            
                    CMP            ax, 50h            
                    JB             L10                
                    MOV            ax, 50h            

               L10: MOV            cx, ax             
                    CALL           near ptr proc_6    
                    MOV            cx, bp             
                    MOV            bl, bh             
                    ADD            bl, dh             
                    ADD            bl, cl             
                    NOT            bl                 
                    AND            bl, 19h            
                    MOV            cx, 50h            
                    SUB            cx, ax             
                    CALL           near ptr proc_6    
                    ADD            bx, dx             
                    ADD            bx, dx             
                    DEC            dh                 
                    JNE            L9                 
                    POP            di                 
                    POP            si                 
                    POP            ds                 

               L8:  TEST           dl, 10h            
                    JE             L11                
                    PUSH           ds                 
                    PUSH           si                 
                    PUSH           di                 
                    PUSH           es                 
                    POP            ds                 
                    XOR            di, 0              
                    MOV            si, 0FA0h          
                    MOV            cx, 7D0h           
                    TEST           dl, 1              
                    JNE            L12                

               L13: LODSW                             
                    LEA            bx, [bp+si]        
                    OR             bx, cx             
                    ADD            bx, bp             
                    ADD            bx, bx             
                    AND            bl, 1Bh            
                    OR             ah, bl             
                    STOSW                             
                    LOOP           L13                

               L14: POP            di                 
                    POP            si                 
                    POP            ds                 

               L11: RET                               

               L12: PUSH           dx                 
                    MOV            di, 1              
                    MOV            dx, 4Eh            

               L15: MOV            ax, bp             
                    ADD            ax, ax             
                    MOV            bx, dx             
                    MOV            cl, 50h            

               L16: ADD            ax, bx             
                    ADD            ax, bp             
                    ADD            bx, dx             
                    PUSH           ax                 
                    MOV            al, ah             
                    AND            al, 19h            
                    XOR            al, 0Fh            
                    STOSB                             
                    POP            ax                 
                    INC            di                 
                    LOOP           L16                
                    SUB            dl, 3              
                    JNE            L15                
                    POP            dx                 
                    JMP            L14                ;Synthetic inst

               L7:  MOV            ax, [bx+si+0EFEh]  
                    JMP            L6                 ;Synthetic inst
}


void start ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains impure code.
 * Contains instructions not normally used by compilers.
 */
{
int loc1;
int loc2;
int loc3; /* al */
int loc4; /* bx */
int loc5; /* es */
int loc6; /* dx */
int loc7; /* bp */
int loc8; /* cx */
int loc9; /* ax */
int loc10; /* dl */
int loc11; /* bl */
int loc12; /* ds */
int loc13; /* ah */

    if (loc3 != 7) {
        var0013A = 0xb800;
    }
    var00501 = loc4;
    var00503 = loc5;
    loc6 = 0x4a6;
    loc7 = 0;
    loc8 = 0x1770;
    loc9 = 0;
    loc1 = loc9;
    loc6 = 0xb000;
    loc5 = loc6;

    while ((loc7 != 32)) {

        if (loc7 == 96) {
            loc10 = (loc10 | 4);
        }

        if (loc7 == 128) {
            loc10 = (loc10 ^ 4);
            loc11 = (loc11 & 254);
            loc1 = 0xfa0;
            loc10 = (loc10 | 136);
        }

        if (loc7 == 256) {
            loc11 = (loc11 | 1);
            loc1 = 0xfa0;
            loc10 = (loc10 | 8);
        }

        if (loc7 == 286) {
        }

        if (loc7 == 320) {
            loc10 = (loc10 ^ 132);
        }

        if (loc7 == 352) {
            loc1 = 0xfa0;
            loc8 = 0x7d0;
            loc4 = proc_4 ((loc10 ^ 4), 0x1180, 429);
            loc10 = (loc10 | 32);
        }

        if (loc7 == 384) {
            loc10 = (loc10 ^ 48);
            loc11 = (loc11 & 254);
            loc1 = 0xfa0;
            loc10 = (loc10 | 8);
        }

        if (loc7 == 464) {
        }

        if (loc7 == 512) {
            loc11 = (loc11 | 1);
            loc1 = 0xfa0;
            loc10 = (loc10 | 8);
        }

        if (loc7 == 542) {
        }

        if (loc7 == 640) {
            loc1 = 0;
            loc8 = 0x1770;
            loc4 = proc_4 (0x1cc0, 235);
            loc4 = proc_4 (0xfa0, 161);
            loc10 = 64;
        }

        if (loc7 == 704) {
            loc11 = (loc11 & 254);
            loc1 = 0xfa0;
            loc10 = (loc10 | 8);
        }

        if (loc7 == 768) {
            loc11 = (loc11 | 1);
            loc1 = 0xfa0;
            loc10 = (loc10 | 8);
        }

        if (loc7 == 798) {
        }

        if (loc7 == 832) {
            loc1 = 0xfa0;
            loc8 = 0x7d0;
            loc4 = proc_4 (0x1180, 242);
            loc10 = 32;
        }

        if (loc7 == 864) {
            loc10 = 17;
        }

        if (loc7 == 896) {
            loc1 = 0x8c0;
            loc10 = (loc10 | 10);
        }

        if (loc7 == 0x440) {
            loc1 = 0xdc0;
            loc10 = (loc10 | 8);
        }

        if (loc7 == 0x480) {
            loc10 = (loc10 | 255);
        }

        if (loc10 != 255) {

            if ((loc10 & 8) != 0) {
                loc8 = 1;

                if ((loc10 & 2) != 0) {
                    loc8 = 3;

                    if ((loc7 & 3) == 0) {
                        loc8 = (loc8 - 1);
                    }
                }

                do {
                    loc10 = (loc10 ^ 8);
                } while (//*failed*//);
                HLI_POP loc12
                ds[di-3] = 15;
                ds[di-5] = 7;
                ds[di-9] = 14;
                ds[di-0xb] = 12;
                ds[di-0xf] = 14;
                HLI_POP loc12
            }

            if ((loc10 & 32) != 0) {
                HLI_POP loc12
                loc1 = 0;
                loc3 = ((loc7 << 3) ^ loc13);
                loc13 = 0;
                loc9 = ((loc9 + loc9) + loc9);
                loc4 = loc9;
                loc9 = (((loc9 + loc9) + loc4) & 0xffc0);
                loc4 = ((loc9 >> 1) >> 1);
                loc9 = (loc9 + loc4);
                loc2 = (0xfa0 - loc9);
                loc8 = 0x7d0;
                HLI_POP loc1
                HLI_POP loc12
            }

            while ((loc7 >= var004AB)) {
                loc9 = 0;
                loc12 = loc9;
                HLI_POP loc12

                if ((var0E617 & 7) == 0) {
                    proc_5 ();
                }
                else {
                    loc9 = 0x2508;
                    loc9 = 244;

                    do {
                        loc9 = proc_2 ();
                    } while ((--loc9 != 0));
                    loc2 = 0x8fd;

                    do {
                        loc13 = cs[si];

                        do {
                            loc9 = (proc_2 () + 1);
                        } while (((loc3 & 31) != 0));
                    } while (((loc3 & loc3) != 0));
                }
            }	/* end of while */
            loc7 = (loc7 + 1);
        }
    }	/* end of while */
    loc1 = 0;
    loc10 = (loc10 | 8);
}

