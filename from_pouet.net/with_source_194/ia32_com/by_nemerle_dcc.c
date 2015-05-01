/*
 * Input file	: from_pouet.net/with_source_194/ia32_com/subject.exe
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
                    MOV            ax, 3              
                    INT            10h                	/* Unknown int */


               L1:  MOV            cx, 1F4h           

               L2:  PUSH           cx                 
                    PUSH           0B800h             
                    POP            ds                 
                    PUSH           cs                 
                    POP            es                 
                    MOV            di, 1D0h           
                    XOR            si, 0              
                    MOV            cx, 7D0h           

               L3:  MOVSB                             
                    INC            si                 
                    LOOP           L3                 
                    MOV            cx, 7D0h           
                    PUSH           es                 
                    POP            ds                 
                    MOV            si, 1D0h           
                    PUSH           cs                 
                    POP            ax                 
                    ADD            ax, 96h            
                    MOV            es, ax             
                    MOV            di, si             

               L4:  MOV            al, ds:[si-51h]    
                    MOV            bx, ax             
                    MOV            al, ds:[si-4Fh]    
                    ADC            bx, ax             
                    MOV            al, ds:[si+51h]    
                    ADC            bx, ax             
                    MOV            al, ds:[si+4Fh]    
                    ADC            bx, ax             
                    ADD            bx, 1              
                    SHR            bx, 2              
                    MOV            es:[di], bl        
                    INC            si                 
                    INC            di                 
                    LOOP           L4                 
                    PUSH           es                 
                    POP            ds                 
                    PUSH           0B800h             
                    POP            es                 
                    XOR            di, 0              
                    MOV            si, 1D0h           
                    MOV            cx, 7D0h           

               L5:  MOVSB                             
                    MOV            al, ds:[si]        
                    AND            al, 70h            
                    MOV            bl, al             
                    SHR            bl, 4              
                    AND            bl, 5              
                    OR             al, bl             
                    STOSB                             
                    LOOP           L5                 
                    MOV            cx, 50h            
                    XOR            di, 0              
                    POP            ax                 
                    PUSH           ax                 

               L6:  MOV            es:[di+0F00h], al  
                    STOSB                             
                    INC            di                 
                    LOOP           L6                 
                    MOV            cx, 19h            
                    XOR            di, 0              

               L7:  MOV            es:[di+9Eh], al    
                    STOSB                             
                    ADD            di, 9Fh            
                    LOOP           L7                 
                    ADD            al, 2              
                    MOV            es:[7D0h], al      
                    MOV            es:[7D2h], al      
                    MOV            cx, 14h            

               L8:  PUSH           cx                 
                    MOV            cx, 0FFFAh         

               L9:  NOP                               
                    LOOP           L9                 
                    POP            cx                 
                    LOOP           L8                 
                    MOV            ah, 1              
                    INT            16h                	/* Unknown int */

                    JNE            L10                
                    POP            cx                 
                    LOOP           L11                
                    JMP            L1                 

               L11: JMP            L2                 

               L10: POP            cx                 
                    XOR            ax, 0              
                    INT            16h                	/* Unknown int */

                    RET                               
}

