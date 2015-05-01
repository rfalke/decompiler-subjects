/*
 * Input file	: from_pouet.net/with_source_036/ia32_com/subject.exe
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
                    MOV            al, 12h            
                    INT            10h                	/* Unknown int */

                    LDS            ax, dword ptr[bx]  

               L1:  MOV            ax, di             
                    XOR            dx, dx             
                    MOV            bx, 2              
                    MOV            tmp, dx:ax         ;Synthetic inst
                    DIV            bx                 
                    MOD            bx                 ;Synthetic inst
                    ADD            ax, bx             
                    AND            ax, dx             
                    XOR            ax, cx             
                    SHR            ax, cl             
                    INC            di                 
                    XOR            [di], al           
                    JNE            L1                 
                    INC            cx                 
                    JMP            L1                 
}

