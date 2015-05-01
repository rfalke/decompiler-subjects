/*
 * Input file	: from_pouet.net/with_source_039/ia32_com/subject.exe
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

               L1:  MOV            ax, di             
                    ADD            ax, bx             
                    XOR            al, ah             
                    AND            al, bh             
                    AND            al, 3Fh            
                    STOSB                             
                    LOOP           L1                 
                    INC            bx                 
                    MOV            dx, 3DAh           

               L2:  IN             al, dx             
                    AND            al, 8              
                    JE             L2                 
}

