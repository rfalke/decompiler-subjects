/*
 * Input file	: from_pouet.net/with_source_100/ia32_com/subject.exe
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

               L1:  IMUL           si, [0], 3         
                    ADD            si, cx             
                    INC            ax                 
                    CMP            si, 0C000h         
                    JG             L2                 
                    INC            bp                 
                    INC            bx                 

               L3:  IMUL           di, [0], 140h      
                    ADD            di, bp             
                    STOSB                             
                    STOSB                             
                    MOV            al, 4              
                    STOSB                             
                    STOSB                             
                    STOSB                             
                    MOV            al, 0              
                    STOSB                             
                    STOSB                             
                    STOSB                             
                    JMP            L1                 

               L2:  AND            si, si             
                    JG             L4                 
                    INC            cx                 
                    INC            bp                 

               L5:  DEC            bx                 
                    JMP            L3                 ;Synthetic inst

               L4:  CMP            si, 4000h          
                    JG             L6                 
                    DEC            bp                 
                    INC            bx                 
                    JMP            L3                 

               L6:  DEC            bp                 
                    JMP            L5                 ;Synthetic inst
}

