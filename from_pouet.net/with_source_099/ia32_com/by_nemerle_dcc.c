/*
 * Input file	: from_pouet.net/with_source_099/ia32_com/subject.exe
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

               L1:  IMUL           ax, [0], 3         
                    CMP            ax, 0C000h         
                    JL             L2                 
                    CMP            ax, 4000h          
                    JG             L3                 
                    AND            ax, ax             
                    JG             L4                 
                    SUB            bx, 0C8h           

               L4:  ADD            bp, 140h           

               L3:  ADD            bx, 0C8h           

               L2:  SHR            bp, 1              
                    SHR            bx, 1              
                    IMUL           di, [0], 140h      
                    MOV            byte ptr es:[bp+di], 0Ah
                    PUSH           ax                 
                    IN             al, 60h            
                    DEC            ax                 
                    POP            ax                 
                    JNE            L1                 
                    MOV            ax, 3              
                    INT            10h                	/* Unknown int */

                    RET                               
}

