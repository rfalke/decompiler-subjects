/*
 * Input file	: from_pouet.net/with_source_041/ia32_com/subject.exe
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
                    MOV            al, 3              
                    INT            10h                	/* Unknown int */

                    MOV            bh, 0B8h           
                    MOV            ds, bx             

               L1:  AND            bh, 3Fh            
                    IN             ax, 40h            
                    TEST           ax, 0F5F0h         
                    JE             L2                 
                    MOV            ax, [bx]           
                    SHR            byte ptr [bx], 1   
                    JE             L3                 

               L2:  MOV            [bx+0A0h], ax      

               L3:  DEC            bx                 
                    DEC            bx                 
                    JMP            L1                 
}

