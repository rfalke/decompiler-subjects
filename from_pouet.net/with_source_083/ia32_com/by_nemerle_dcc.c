/*
 * Input file	: from_pouet.net/with_source_083/ia32_com/subject.exe
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

               L1:  MOV            bx, 32A0h          
                    INC            dh                 
                    MOV            dl, 0A0h           

               L2:  MOV            si, 140h           
                    MOV            ah, dh             
                    ADD            ah, dl             
                    CMP            ah, 0A0h           
                    JB             L3                 
                    SUB            ah, 0A0h           

               L3:  MOV            al, 0              
                    ADD            si, ax             
                    MOV            di, bx             
                    MOV            cx, 0FFh           

               L4:  ADD            al, dl             
                    JAE            L5                 
                    INC            si                 
                    DEC            cx                 

               L5:  MOVSB                             
                    DEC            cx                 
                    JNS            L4                 
                    ADD            bx, 13Fh           
                    DEC            dl                 
                    JNE            L2                 
                    IN             al, 60h            
                    DEC            al                 
                    JNE            L1                 
                    RET                               
}

