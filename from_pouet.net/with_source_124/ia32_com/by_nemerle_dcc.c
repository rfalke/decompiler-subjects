/*
 * Input file	: from_pouet.net/with_source_124/ia32_com/subject.exe
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

                    LES            bx, dword ptr[bx]  
                    MOV            al, 1              

               L1:  MOV            cl, bl             
                    ADD            cl, al             
                    JNE            L2                 
                    NEG            al                 

               L2:  XOR            di, 0              
                    MOV            dl, 0C8h           
                    ADD            bl, al             
                    PUSH           ax                 

               L3:  MOV            cx, 140h           

               L4:  MOV            al, cl             
                    ADD            al, bl             
                    CMP            al, 0A0h           
                    JB             L5                 
                    SUB            al, bl             
                    SUB            al, bl             
                    ADD            al, dl             
                    AND            al, dl             

               L5:  AND            al, 1Fh            
                    ADD            al, 10h            
                    STOSB                             
                    LOOP           L4                 
                    DEC            dl                 
                    JNE            L3                 
                    POP            ax                 
                    JMP            L1                 
}

