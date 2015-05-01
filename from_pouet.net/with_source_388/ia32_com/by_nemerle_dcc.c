/*
 * Input file	: from_pouet.net/with_source_388/ia32_com/subject.exe
 * File type	: EXE
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
                    PUSH           ax                 
                    MOV            ax, 299Dh          
                    MOV            dx, 53Ah           
                    ADD            ax, 10h            ;Segment constant
                    CMP            ax, [2]            
                    JB             L1                 
                    MOV            ah, 9              
                    MOV            dx, 11Ch           
                    INT            21h                	/* Display string */

                    MOV            ax, 4C01h          
                    INT            21h                ;Exit to DOS	/* Terminate process with return code */


               L1:  POP            cx                 
                    SUB            ax, 20h            
                    MOV            ss, ax             
                    PUSH           cx                 
                    SUB            ax, 25h            
                    MOV            es, ax             
                    PUSH           ax                 
                    MOV            cx, 124h           
                    XOR            di, 0              
                    PUSH           di                 
                    MOV            si, 154h           
                    CLD                               
                    REP MOVSW                         
                    RETF                              
}

