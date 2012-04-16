.model tiny
.code
.586
org 100h
c0de:

    ; initialize graphics mode

   mov bp, offset ops
   mov ax, 0013h
   int 10h

    ; load video segment
   push 0A000h
   pop es

 ; set palette to color scale
ploop:
	mov		al,cl
	mov		dx,03c8h
	out		dx,al
	inc		dx
	mov		al,cl
	out		dx,al	
	out		dx,al	
	shr		al,1
	mov		ah,3
	mul		ah
	cmp		al,63
	jl		less
	mov		al,63
less:
	out		dx,al	
	loop	ploop
		
program_loop:
    
    ; calculate x delta value
   fld dword ptr [bp+4]
   ;fsub dword ptr [bp]
   fidiv l
   fst dword ptr [bp+16]    
	 
	  ; calculate y delta value
	 fld dword ptr [bp+8]
   fsub dword ptr [bp]
   fidiv l
   fst dword ptr [bp+20]  

	  ; increment zoom-in value
	 add [l],20
	 
	 	 
loop1: ; increment di as loop counter
   
    ; load di for fpu use
   mov i,di
    
    ; a:=xmin+i*xdiff;
   fld  dword ptr [bp+16]
   fimul i
	 fst dword ptr [bp+24]    
	 
   loop2:
     ; b:=ymin+j*ydiff;
    mov i,si
    fld  dword ptr [bp+20]
   	fimul i
   	fadd dword ptr [bp]
	 	fst dword ptr [bp+28]
    
     ; x=0;y=0;zahl=dx=0
    mov dword ptr [bp+32],0
    mov dword ptr [bp+36],0   
    	
    xor cx,cx
    loop3: ; cx as loop var
			
			 ; (x*x+y*y)<4
			fld  dword ptr [bp+36]  
			fmul ST(0),ST(0)
			fst ST(1);
			fld  dword ptr [bp+32]  
			fmul ST,ST(0) 
			fadd ST,ST(2)
			fcom b
			fstsw ax
			finit 
			sahf			
			jnb out_l3					
			
    	 ; tmp:=x*x-y*y+a; 
			fld  dword ptr [bp+36]  
			fmul ST,ST(0) 
			fld  dword ptr [bp+32]  
			fmul ST,ST(0)
			fsub ST,ST(1);
			fadd dword ptr [bp+24] 
			fst ST(2)

			 ; y:=2*x*y+b;
			fld dword ptr [bp+32]
			fadd ST,ST(0)
			fmul dword ptr [bp+36]
			fadd dword ptr [bp+28]
			fst dword ptr [bp+36]
			
			 ; x:=tmp
			fld ST(3)
			fst dword ptr [bp+32]
							
	  	inc cx
    	cmp cx,63
    jb loop3
    out_l3:
    
     ; putpixel
    mov ax, 320
    imul si
    mov bx,di
    add bx,ax
    mov byte ptr es:[bx], cl
   	inc si   	
   	cmp si,200
   jng loop2
   
   xor si,si 
   
   inc di
   cmp di,319
   jng loop1
   xor di,di
   
    ; wait for vsync
   mov dx, 3DAh
vsync:
    in al, dx
    and al, 08h
    jz vsync
    
     ; check for Esc keypress
    in al, 60h
    dec al
    jnz program_loop
	int 20h  

i dw ?
b dd 4.0 ; four for fpu ;)
l dw 320 ; gloabl loop counter
ops:
	;miny;maxx;maxy;dx;dy;a;b;x,y
	dd -0.85,-3.00,2.50,?,?,?,?,?,?
end c0de