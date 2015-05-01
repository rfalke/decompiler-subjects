/*
 * Input file	: from_pouet.net/with_source_341/ia32_com/subject.exe
 * File type	: COM
 */

#include "dcc.h"


int proc_1 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* bh */
int loc2; /* dx */
    loc1 = 255;

    do {
        loc2 = (968 + 1);
    } while ((--loc1 != 0));
    return (loc2);
}


int proc_2 ()
/* Takes 2 bytes of parameters.
 * C calling convention.
 * Contains instructions not normally used by compilers.
 */
{
long loc1; /* dx:ax */
int loc2; /* cx */
int loc3; /* al */
int loc4; /* tmp */
int loc5; /* ch */
    loc1 = ((var00410 >> 4) * 160);
    loc2 = LO(loc1);
    LO(loc1) = var0040E;
    LO(loc1) = (loc1 / 9);
    var00412 = (loc2 + LO(loc1));

    do {
    } while (((loc3 & 8) != 0));
    loc3 = 12;
    loc3 = 13;

    do {
    } while (((loc3 & 8) == 0));
    loc2 = 16;
    loc4 = var00410;
    HI(loc1) = (loc4 % loc2);
    LO(loc1) = HI(loc1);
    HI(loc1) = (loc4 / loc2);
    HI(loc1) = 980;
    loc3 = 8;
    LO(loc1) = (var0040E - 1);
    HI(loc1) = 0;
    loc2 = 9;
    loc4 = loc1;
    HI(loc1) = (loc4 % loc2);
    LO(loc1) = HI(loc1);
    HI(loc1) = (loc4 / loc2);
    loc5 = loc3;
    loc3 = 51;
    loc3 = (loc5 | 32);
    return (960);
}


void proc_4 (char arg0)
/* Takes 2 bytes of parameters.
 * C calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* al */
int loc2; /* cl */
int loc3; /* ah */
int loc4; /* bl */
int loc5; /* bh */
int loc6; /* dx */
    loc1 = loc2;
    loc3 = (loc1 + var00414);
    loc4 = (loc1 + var00414);
    loc5 = (loc1 + var00414);
    loc6 = (969 - 1);
}


void proc_3 ()
/* Takes no parameters.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
int loc1; /* cx */
int loc2; /* al */
    loc1 = 31;

    do {

        do {
        } while (((loc2 & 8) != 0));

        do {
        } while (((loc2 & 8) == 0));
        proc_4 (7);
        proc_4 (63);
        proc_4 ();
    } while (//*failed*//);
    var00414 = !var00414;
}


void start ()
/* Takes no parameters.
 * Untranslatable routine.  Assembler provided.
 * Unknown calling convention.
 * Contains instructions not normally used by compilers.
 */
{
                    MOV            di, 7Fh            
                    XOR            si, 0              

               L1:  MOV            al, [si+45Fh]      
                    MOV            [di+4DFh], al      
                    INC            si                 
                    DEC            di                 
                    JNS            L1                 
                    MOV            al, 3              
                    INT            10h                	/* Unknown int */

                    CALL           near ptr proc_1    
                    MOV            dx, 3D4h           
                    MOV            ax, 5013h          
                    OUT            dx, ax             
                    MOV            es, [415h]         
                    XOR            di, 0              
                    XOR            dx, 0              
                    XOR            bx, 0              

               L2:  MOV            ax, 7DBh           
                    MOV            cl, 8              
                    REP STOSW                         
                    ADD            di, 10h            
                    MOV            ax, 3C0h           
                    MUL            bx                 
                    CMP            di, ax             
                    JBE            L2                 
                    CMP            dx, 0              
                    JNE            L3                 
                    ADD            di, 10h            
                    INC            dx                 

               L4:  INC            bx                 
                    CMP            bx, 21h            
                    JBE            L2                 
                    XOR            bx, 0              
                    MOV            es, [415h]         
                    MOV            di, 518h           
                    MOV            si, 417h           

               L5:  CMP            si, 437h           
                    JNE            L6                 
                    MOV            di, 2458h          

               L6:  MOV            dl, 8              

               L7:  MOV            al, [si]           
                    MOV            dh, 8              

               L8:  RCL            al, 1              
                    JAE            L9                 
                    MOV            cx, 0FDBh          
                    MOV            es:[di], cx        
                    MOV            es:[di+2], cx      
                    MOV            es:[di+4], cx      
                    MOV            es:[di+6], cx      
                    MOV            es:[di+140h], cx   
                    MOV            es:[di+142h], cx   
                    MOV            es:[di+144h], cx   
                    MOV            es:[di+146h], cx   
                    MOV            es:[di+280h], cx   
                    MOV            es:[di+282h], cx   
                    MOV            es:[di+284h], cx   
                    MOV            es:[di+286h], cx   

               L9:  ADD            di, 8              
                    DEC            dh                 
                    JNE            L8                 
                    INC            si                 
                    ADD            di, 380h           
                    DEC            dx                 
                    JNE            L7                 
                    SUB            di, 1DB0h          
                    INC            bx                 
                    CMP            bx, 8              
                    JE             L10                

               L10: CALL           near ptr proc_2    
                    CALL           near ptr proc_3    
                    XOR            bx, 0              
                    MOV            dx, 100h           

               L11: XOR            ax, 0              
                    MOV            al, [bx+45Fh]      
                    ADD            ax, 60h            
                    CMP            dl, 5              
                    JBE            L12                
                    MOV            ax, 60h            

               L12: MOV            [410h], ax         
                    PUSH           bx                 
                    CMP            dl, 1              
                    JBE            L13                
                    SHL            bl, 1              

               L13: XOR            ax, 0              
                    MOV            al, [bx+45Fh]      
                    CMP            dl, 1              
                    JE             L14                
                    CMP            dl, 3              
                    JBE            L15                
                    CMP            dl, 5              
                    JA             L15                

               L14: MOV            cx, 1A0h           
                    SUB            cx, ax             
                    MOV            [40Eh], cx         

               L16: PUSH           dx                 
                    CALL           near ptr proc_2    
                    POP            dx                 
                    POP            bx                 
                    ADD            bl, dh             
                    CMP            bl, 0FFh           
                    JNE            L17                
                    NEG            dh                 
                    INC            dx                 
                    CMP            dl, 7              
                    JBE            L17                
                    MOV            dl, 0              

               L17: MOV            ah, 0Bh            
                    INT            21h                	/* Check input status */

                    OR             al, al             
                    JE             L11                

               L18: CALL           near ptr proc_3    
                    MOV            ah, 0Ch            
                    INT            21h                	/* Flush input buffer and then input */

                    MOV            ax, 3              
                    INT            10h                	/* Unknown int */

                    MOV            ax, 1112h          
                    XOR            bl, 0              
                    INT            10h                	/* Unknown int */

                    CALL           near ptr proc_1    
                    XOR            bx, 0              
                    MOV            es, [415h]         
                    MOV            di, 66Ch           
                    MOV            si, 417h           

               L19: CMP            si, 437h           
                    JNE            L20                
                    MOV            di, 0C02h          

               L20: MOV            dl, 8              

               L21: MOV            al, [si]           
                    MOV            dh, 8              

               L22: RCL            al, 1              
                    JAE            L23                
                    MOV            cx, 0FDBh          
                    MOV            es:[di], cx        

               L23: ADD            di, 2              
                    DEC            dh                 
                    JNE            L22                
                    INC            si                 
                    ADD            di, 90h            
                    DEC            dx                 
                    JNE            L21                
                    SUB            di, 4EEh           
                    INC            bx                 
                    CMP            bx, 9              
                    JE             L24                

               L24: MOV            si, 39Eh           
                    MOV            es, [415h]         
                    MOV            di, 11B4h          
                    MOV            cx, 1Bh            
                    REP MOVSW                         
                    MOV            dx, 3200h          
                    MOV            ah, 2              
                    INT            10h                	/* Unknown int */

                    CALL           near ptr proc_3    
                    XOR            ah, 0              
                    INT            16h                	/* Unknown int */

                    CALL           near ptr proc_3    
                    MOV            al, 3              
                    INT            10h                	/* Unknown int */

                    XOR            ax, 0              
                    MOV            ch, 16h            
                    REP STOSW                         
                    MOV            si, 39Eh           
                    ADD            si, 36h            
                    MOV            es, [415h]         
                    MOV            di, 66h            
                    MOV            cl, 1Dh            
                    REP MOVSW                         
                    MOV            ah, 4Ch            
                    INT            21h                ;Exit to DOS	/* Terminate process with return code */


               L15: CMP            dl, 7              
                    JE             L14                
                    ADD            ax, 1A0h           
                    MOV            [40Eh], ax         
                    JMP            L16                

               L3:  XOR            dx, 0              
                    JMP            L4                 ;Synthetic inst
}

