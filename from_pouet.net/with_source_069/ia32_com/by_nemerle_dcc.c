/*
 * Input file	: from_pouet.net/with_source_069/ia32_com/subject.exe
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
                    MOV            dl, 40h            
                    MOV            bp, dx             
                    MOV            si, 6F0Ch          

               L1:  IMUL           di, [0], 140h      
                    ADD            di, dx             
                    MOV            cl, 1Eh            

               L2:  INC            byte ptr es:[di]   
                    INC            di                 
                    LOOP           L2                 
                    IMUL           ax, [0], 4E6Dh     
                    SHL            ax, 1              
                    ADC            ax, 61h            
                    SHR            ax, 1              
                    NEG            ax                 
                    SHL            ax, 1              
                    AND            ax, 7FFEh          
                    SHR            ax, 1              
                    MOV            si, ax             
                    CMP            al, 80h            
                    JB             L3                 
                    INC            dx                 
                    INC            dx                 

               L3:  DEC            dx                 
                    INC            bp                 
                    JMP            L1                 
}

