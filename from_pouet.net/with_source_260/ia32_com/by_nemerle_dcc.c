/*
 * Input file	: from_pouet.net/with_source_260/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


int proc_1 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains coprocessor instructions.
 */
{
int loc1; /* cx */
    return (loc1);
}


int proc_3 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains coprocessor instructions.
 */
{
int loc1; /* cx */
    return (loc1);
}


int proc_2 ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Return value in register ax.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 * Contains coprocessor instructions.
 */
{
                    CALL           near ptr proc_3    
                    ADD            bx, 0Ah            
                    CALL           near ptr proc_3    
                    ESC            FADDPST,ST(1       
                    ESC            FSQRT              
                    ESC            FIDIV uint16_t  ptr [1FBh]
                    ESC            FLD1               
                    ESC            FCOMPST,ST(4       
                    WAIT                              
                    ESC            FSTSWAX            
                    WAIT                              
                    SAHF                              
                    JBE            L1                 
                    ESC            FMULST,ST(3        

               L1:  ESC            FCOS               
                    ESC            FIMUL uint16_t  ptr [1DBh]
                    ESC            FABS               
                    RET                               
}


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 * Contains coprocessor instructions.
 */
{
                    MOV            ax, 13h            
                    INT            10h                	/* Unknown int */

                    PUSH           0A000h             
                    POP            es                 
                    WAIT                              
                    ESC            FINIT              
                    ESC            FLDZ               
                    MOV            cx, 40h            

               L1:  MOV            al, cl             
                    MOV            dx, 3C8h           
                    OUT            dx, al             
                    INC            dx                 
                    MOV            al, cl             
                    OUT            dx, al             
                    OUT            dx, al             
                    SHR            al, 1              
                    MOV            ah, 3              
                    MUL            ah                 
                    CMP            al, 3Fh            
                    JL             L2                 
                    MOV            al, 3Fh            

               L2:  OUT            dx, al             
                    LOOP           L1                 

               L3:  MOV            ch, 0FAh           
                    ESC            FADD dword ptr [1D7h]
                    MOV            bx, 1DDh           
                    CALL           near ptr proc_1    
                    MOV            bx, 1E7h           
                    CALL           near ptr proc_1    
                    MOV            bx, 1F1h           
                    CALL           near ptr proc_1    

               L4:  MOV            ax, cx             
                    DEC            ax                 
                    XOR            dx, 0              
                    MOV            bx, 140h           
                    MOV            tmp, dx:ax         ;Synthetic inst
                    DIV            bx                 
                    MOD            bx                 ;Synthetic inst
                    MOV            [1D3h], dx         
                    MOV            [1D5h], ax         
                    ESC            FILD uint16_t  ptr [1D3h]
                    ESC            FILD uint16_t  ptr [1D5h]
                    MOV            bx, 1DDh           
                    CALL           near ptr proc_2    
                    ESC            ??? dword ptr [1D3h]
                    CALL           near ptr proc_2    
                    ESC            FADD dword ptr [1D3h]
                    ESC            FISTP uint16_t  ptr [1D3h]
                    MOV            ax, [1D3h]         
                    SUB            al, 0Ch            
                    JNS            L5                 
                    MOV            al, 0              
                    CMP            al, 3Fh            
                    JB             L5                 
                    MOV            al, 3Fh            

               L5:  MOV            bx, cx             
                    MOV            es:[bx-1], al      
                    ESC            FCOMPP             
                    LOOP           L4                 
                    IN             al, 60h            
                    DEC            al                 
                    JNE            L3                 
                    INT            20h                ;Exit to DOS	/* Exit */

}

