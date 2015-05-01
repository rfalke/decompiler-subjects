/*
 * Input file	: from_pouet.net/with_source_049/ia32_com/subject.exe
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

                    LES            di, dword ptr[bx]  

               L1:  PUSH           di                 
                    MOV            bl, 1Bh            
                    STC                               

               L2:  MOV            ax, 0CCE6h         
                    MUL            di                 
                    SUB            dl, dh             
                    INC            bx                 
                    JA             L3                 
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, bx             ;Synthetic inst
                    MOV            bx, tmp            ;Synthetic inst
                    POP            di                 
                    STOSB                             
                    LOOP           L1                 
                    IN             al, 60h            
                    DEC            al                 
                    LOOPNE         L1                 
                    RET                               

               L3:  SBB            di, cx             
                    JMP            L2                 ;Synthetic inst
}

