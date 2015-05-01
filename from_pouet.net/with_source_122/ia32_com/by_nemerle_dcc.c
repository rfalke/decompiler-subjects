/*
 * Input file	: from_pouet.net/with_source_122/ia32_com/subject.exe
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
                    CLI                               

               L1:  MOV            dx, 3DAh           

               L2:  IN             al, dx             
                    AND            al, 8              
                    JE             L2                 
                    INC            cl                 
                    MOV            bx, 18Fh           

               L3:  MOV            dx, 3DAh           

               L4:  IN             al, dx             
                    AND            al, 1              
                    JNE            L4                 

               L5:  IN             al, dx             
                    AND            al, 1              
                    JE             L5                 
                    XOR            al, 0              
                    MOV            dx, 3C8h           
                    OUT            dx, al             
                    INC            dx                 
                    MOV            al, cl             
                    OUT            dx, al             
                    MOV            al, bl             
                    SHR            al, 1              
                    OUT            dx, al             
                    ADD            ch, al             
                    MOV            al, ch             
                    OUT            dx, al             
                    DEC            bx                 
                    JNE            L3                 
                    IN             al, 60h            
                    DEC            ax                 
                    JNE            L1                 
                    DEC            dx                 
                    OUT            dx, al             
                    INC            dx                 
                    OUT            dx, al             
                    OUT            dx, al             
                    OUT            dx, al             
                    RET                               
}

