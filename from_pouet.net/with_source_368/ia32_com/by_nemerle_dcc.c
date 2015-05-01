/*
 * Input file	: from_pouet.net/with_source_368/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 */
{
                    MOV            ax, cs             
                    ADD            ah, 10h            
                    MOV            es, ax             
                    CLD                               
                    MOV            cx, 803h           
                    MOV            si, 100h           
                    MOV            di, si             
                    PUSH           di                 
                    REP MOVSW                         
                    POP            di                 
                    MOV            si, 192h           
                    PUSH           es                 
                    PUSH           120h               
                    PUSH           ds                 
                    POP            es                 
                    MOV            ds, ax             
                    RETF                              
}

