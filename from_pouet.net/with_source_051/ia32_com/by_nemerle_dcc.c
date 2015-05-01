/*
 * Input file	: from_pouet.net/with_source_051/ia32_com/subject.exe
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
                    MOV            cx, 29h            
                    MOV            bl, 50h            
                    MOV            ax, 202h           

               L1:  DEC            bx                 
                    JS             L2                 
                    INT            29h                	/* Reserved */

                    LOOPNE         L1                 
                    DEC            ax                 
                    JNP            L1                 
                    INT            16h                	/* Unknown int */

                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, di             ;Synthetic inst
                    MOV            di, tmp            ;Synthetic inst
                    XOR            ax, di             
                    SHL            ax, 0Fh            
                    CWD                               
                    ADC            [si+1], dx         
                    PUSH           si                 

               L2:  RET                               
}

