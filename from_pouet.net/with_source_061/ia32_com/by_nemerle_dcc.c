/*
 * Input file	: from_pouet.net/with_source_061/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
                    PUSH           0A000h             
                    POP            es                 
                    MOV            al, 13h            
                    INT            10h                	/* Unknown int */

                    MOV            dx, 3C9h           

               L1:  MOV            al, cl             
                    SHR            al, 1              
                    SUB            al, 40h            
                    JL             L2                 
                    NOT            al                 

               L2:  OUT            dx, al             
                    OUT            dx, al             
                    OUT            dx, al             
                    LOOP           L1                 
                    MOV            bx, 140h           
                    XOR            di, 0              

               L3:  MOV            ax, di             
                    XOR            dx, dx             
                    MOV            tmp, dx:ax         ;Synthetic inst
                    DIV            bx                 
                    MOD            bx                 ;Synthetic inst
                    MOV            al, dl             
                    STOSB                             
                    TEST           di, di             
                    JNE            L3                 
                    XOR            ax, 0              
                    INT            16h                	/* Unknown int */

                    INT            20h                ;Exit to DOS	/* Exit */

}

