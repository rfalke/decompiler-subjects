	.intel_syntax noprefix
        .file   "a.c"
        .text
    
.globl divisibleBy3
         .type   divisibleBy3, @function
divisibleBy3:
        imul    edi, edi, -1431655765
        cmp     edi, 1431655765
        setbe   al
        ret
         .size   divisibleBy3, .-divisibleBy3


.globl divideByThree
         .type   divideByThree, @function
divideByThree:
        mov     eax, edi
        mov     edi, 2863311531
        imul    rax, rdi
        shr     rax, 33
        ret
         .size   divideByThree, .-divideByThree

.globl countSetBits
         .type   countSetBits, @function
countSetBits:
        xor     eax, eax
        test    edi, edi
        je      .L4
.L3:
        inc     eax
        blsr    edi, edi
        jne     .L3
        ret
.L4:
        ret
         .size   countSetBits, .-countSetBits

.globl isWhitespace
         .type   isWhitespace, @function
isWhitespace:
        xor     eax, eax
        cmp     dil, 32
        ja      .L4x
        movabs  rax, 4294977024
        shrx    rax, rax, rdi
        and     eax, 1
.L4x:
        ret

         .size   isWhitespace, .-isWhitespace

.globl isWhitespace2
         .type   isWhitespace2, @function
isWhitespace2:
  cmp dil, 32
  sete al
  cmp dil, 10
  sete dl    
  or al, dl  
  jne .L3xx    
  and edi, -5             
  cmp dil, 9   
  sete al      
.L3xx:
  ret

         .size   isWhitespace2, .-isWhitespace2
