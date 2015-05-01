/*
 * Input file	: from_pouet.net/with_source_094/ia32_com/subject.exe
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
                    MOV            al, 13h            
                    INT            10h                	/* Unknown int */

                    PUSH           0A000h             
                    POP            es                 

               L1:  MOV            bx, ax             
                    ADD            al, 9Ch            
                    IMUL           al                 
                    SHR            ax, 7              
                    NOT            al                 
                    AND            al, 7Fh            
                    SUB            dx, 0A0h           
                    MOV            bh, al             
                    IMUL           dx                 
                    ADD            ax, si             
                    SHR            ax, 7              
                    XOR            al, bl             
                    AND            al, 20h            
                    JE             L2                 
                    NOT            bh                 
                    SHR            bx, 0Ch            
                    SUB            ax, bx             

               L2:  STOSB                             
                    CWD                               
                    MOV            ax, di             
                    MOV            bp, 140h           
                    MOV            tmp, dx:ax         ;Synthetic inst
                    DIV            bp                 
                    MOD            bp                 ;Synthetic inst
                    LOOP           L1                 
                    ADD            si, 40h            
                    JMP            L1                 
}

