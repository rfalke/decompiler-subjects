/*
 * Input file	: from_pouet.net/with_source_070/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 * Contains coprocessor instructions.
 */
{
                    LES            bp, dword ptr[bx]  
                    MOV            al, 13h            
                    INT            10h                	/* Unknown int */

                    DEC            bx                 
                    NOT            si                 

               L1:  MOV            cl, 0CCh           
                    XOR            di, 0              

               L2:  MOV            dx, 140h           

               L3:  MOV            [si], cx           
                    ADD            [si], ax           
                    ESC            FILD uint16_t  ptr [si]
                    MOV            [si], ax           
                    ESC            FIDIV uint16_t  ptr [si]
                    ESC            FSIN               
                    ESC            FILD uint16_t  ptr [si]
                    MOV            [si], dx           
                    ESC            FIDIVR uint16_t  ptr [si]
                    ESC            FCOS               
                    ESC            FMULPST,ST(1       
                    MOV            byte ptr [si], 0FFh
                    ESC            FIMUL uint16_t  ptr [si]
                    ESC            FISTP uint16_t  ptr [si]
                    AND            [si], dx           
                    MOVSB                             
                    DEC            si                 
                    DEC            dx                 
                    JNE            L3                 
                    LOOP           L2                 

               L4:  ADD            al, bl             
                    JNE            L1                 
                    NEG            bl                 
                    JMP            L4                 
}

