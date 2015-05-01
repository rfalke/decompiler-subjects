/*
 * Input file	: from_pouet.net/with_source_130/ia32_com/subject.exe
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

                    MOV            dx, 3C9h           
                    XOR            ax, 0              

               L1:  OUT            dx, al             
                    OUT            dx, al             
                    OUT            dx, al             
                    INC            ax                 
                    JNE            L1                 
                    MOV            ax, 0A000h         
                    MOV            es, ax             
                    MOV            bp, 7D00h          
                    MOV            bx, bp             

               L2:  INC            bx                 
                    CMP            bx, 7E40h          
                    JNE            L3                 
                    MOV            bx, bp             

               L3:  MOV            ah, 0              
                    IN             al, 60h            
                    DEC            ax                 
                    JNE            L4                 
                    RET                               

               L4:  MOV            al, 40h            
                    MOV            es:[bx], al        
                    MOV            dx, 3DAh           

               L5:  IN             al, dx             
                    AND            al, 8              
                    JE             L5                 
                    MOV            di, bp             

               L6:  INC            di                 
                    CMP            di, 7E40h          
                    JE             L2                 
                    MOV            al, es:[di]        
                    CMP            al, 0              
                    JE             L6                 
                    DEC            ax                 
                    MOV            es:[di], al        
                    JMP            L6                 
}

