/*
 * Input file	: from_pouet.net/with_source_231/ia32_com/subject.exe
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
                    MOV            al, 13h            
                    INT            10h                	/* Unknown int */

                    LES            bx, dword ptr[bx]  
                    MOV            si, 15Ah           

               L1:  CWD                               
                    LODSW                             

               L2:  IMUL           dx, [0], 51h       
                    SHR            dx, 6              
                    INC            dx                 
                    ADD            ax, 1000h          
                    JAE            L2                 
                    SHL            ax, 2              
                    MOV            ch, ah             
                    SHL            ch, 2              
                    ADD            ah, ch             
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, di             ;Synthetic inst
                    MOV            di, tmp            ;Synthetic inst
                    LODSB                             
                    AAM                               
                    MOV            tmp, cl            ;Synthetic inst
                    MOV            cl, al             ;Synthetic inst
                    MOV            al, tmp            ;Synthetic inst
                    SHR            ax, 1              
                    INC            cx                 
                    SHL            cx, 7              

               L3:  MOV            bp, 140h           
                    PUSHA                             
                    MOV            bx, 0FFF2h         
                    ESC            FILD uint16_t  ptr [bx+6]
                    ESC            FLDST,ST(0         
                    ESC            FILD uint16_t  ptr [bx+0Ah]
                    ESC            FIDIV uint16_t  ptr [bx]
                    ESC            FSINCOS            
                    ESC            FMULPST,ST(2       
                    ESC            FMULPST,ST(2       
                    ESC            FRNDINT            
                    ESC            FIMUL uint16_t  ptr [bx]
                    ESC            FADDPST,ST(1       
                    ESC            FISTP dword ptr [bx]
                    POPA                              
                    MOV            es:[bp+di], bh     
                    INC            ax                 
                    LOOP           L3                 
                    XOR            ax, 0C80h          
                    JNE            L1                 
                    INT            16h                	/* Unknown int */

                    ESC            FDIV qword ptr [bx+di+1FF9h]
                    MOV            [5CC2h], al        
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, dx             ;Synthetic inst
                    MOV            dx, tmp            ;Synthetic inst
                    MOVSW                             
                    INSW                              
                    INC            bp                 
                    RET                               
}

