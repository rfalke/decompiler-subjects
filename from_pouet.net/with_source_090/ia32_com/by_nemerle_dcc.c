/*
 * Input file	: from_pouet.net/with_source_090/ia32_com/subject.exe
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


               L1:  PUSH           ds                 
                    POP            es                 
                    MOV            di, 0F93Fh         
                    STD                               
                    MOV            cx, 0F800h         

               L2:  MOV            al, [di]           
                    SHR            al, 1              
                    TEST           cx, 0FE1Fh         
                    JNE            L3                 
                    MOV            al, 7              

               L3:  STOSB                             
                    MOV            si, di             
                    CMP            al, 7              
                    JNE            L4                 
                    IN             al, 40h            
                    SHR            al, 6              
                    ADD            si, ax             
                    MOV            byte ptr [si+140h], 0Fh

               L4:  LOOP           L2                 
                    HLT                               
                    PUSH           9FECh              
                    POP            es                 
                    CLD                               
                    MOV            ch, 7Ch            
                    REP MOVSW                         
                    HLT                               
                    IN             al, 60h            
                    DEC            al                 
                    JNE            L1                 
                    RET                               
}

