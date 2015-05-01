/*
 * Input file	: from_pouet.net/with_source_367/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


long proc_2 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* tmp */
int loc2; /* ah */
int loc3; /* al */
long loc4; /* dx:ax */
    loc1 = loc2;
    loc2 = loc3;
    loc3 = loc1;
    return (loc4);
}


long proc_1 ()
/* Takes no parameters.
 * Unknown calling convention.
 */
{
int loc1; /* tmp */
int loc2; /* ah */
int loc3; /* al */
long loc4; /* dx:ax */
    proc_2 ();
    loc1 = loc2;
    loc2 = loc3;
    loc3 = loc1;
    return (loc4);
}


void start (unsigned char arg0)
/* Takes 9 bytes of parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 */
{
                    SUB            sp, 10h            
                    MOV            bp, sp             
                    MOV            si, 2FAh           
                    CLD                               
                    CALL           near ptr proc_1    
                    ADD            ax, 100h           
                    MOV            cx, ax             
                    CALL           near ptr proc_1    
                    MOV            dx, ax             
                    ADD            ax, si             
                    ADD            ax, 6              
                    MOV            di, ax             
                    CALL           near ptr proc_1    
                    LODSW                             
                    MOV            [bp+0Ah], ah       
                    XOR            ah, 0              
                    MOV            [bp], si           
                    MOV            si, di             
                    ADD            ax, cx             
                    MOV            di, ax             
                    CMP            di, si             
                    JBE            L1                 
                    STD                               
                    PUSH           di                 
                    DEC            si                 
                    DEC            di                 
                    MOV            cx, dx             
                    REP MOVSB                         
                    INC            di                 
                    MOV            [bp], di           
                    POP            si                 
                    CLD                               

               L1:  MOV            di, si             
                    PUSH           si                 
                    MOV            si, 156h           
                    MOV            cx, 1A0h           
                    REP MOVSB                         
                    RET                               
}

