/*
 * Input file	: from_pouet.net/with_source_109/ia32_com/subject.exe
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

               L1:  MOV            ax, di             
                    XOR            dx, dx             
                    MOV            bp, 140h           
                    MOV            tmp, dx:ax         ;Synthetic inst
                    DIV            bp                 
                    MOD            bp                 ;Synthetic inst
                    SUB            ax, 4Bh            
                    MOV            tmp, ax            ;Synthetic inst
                    MOV            ax, si             ;Synthetic inst
                    MOV            si, tmp            ;Synthetic inst
                    MOV            al, 1              
                    SUB            dx, 0B0h           
                    JG             L2                 
                    NEG            dx                 
                    INC            ax                 

               L2:  CMP            dx, 32h            
                    JG             L3                 
                    CMP            dx, si             
                    JG             L4                 
                    MOV            al, 4              
                    SUB            dx, 64h            
                    NEG            si                 
                    CMP            si, dx             
                    JL             L3                 

               L4:  ADD            si, 32h            
                    CMP            dx, si             
                    JL             L5                 

               L3:  MOV            al, 7              

               L5:  STOSB                             
                    JMP            L1                 
}

