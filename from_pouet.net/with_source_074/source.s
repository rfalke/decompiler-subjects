;;;assemble with...

;;;nasmw -fbin -o bookbind.com bookbind.asm
;;;com file size  =  63 bytes.
;;;no way to exit :(
;;;
;;; by
;;;
;;; mathiisalive@yahoo.com
;;;

org 100h

start:

        mov     al,12h
        int     10h		; 640x480x16 mode

        xor     bp,bp           ; 

        mov     cx,480		; initialize outer loop
        
rowLoop:
        push    cx              ; save counter value

        mov 	cx,639		; initialize inner loop
        sub     bp,cx           ;
pixelLoop:
        push    cx              ; save counter value
        
        xor 	cx,cx
        mul 	bx
        
colorLoop:
        push    dx              ; I dont know wat im doing here.. :)
        mov     ax, bx          ; 
        sub     ax, dx          ; 
        add     dx, bx          ; 
                
        imul 	dx
	rcr     ax,8            ;
        
        pop     dx              ; 
        add     ax,bp           ;
        xchg    bx,ax           ;
        jg      short putpixel   

        add     dx,di           ;
        ;not 	cl
        inc cl
        jnz     short colorLoop ; innermost color loop

putpixel:
        xchg    ax, cx          ; mov color into al
        pop     cx              
        pop     dx              
        push    dx              
        xor     bx,bx           ; draw in page zero
        mov     ah,0Ch 		; put pixel in x,y
        int     10h		; video interrupt
        inc     bp              ; 
        loop    pixelLoop       ; innerloop
        inc     di              ; 
        pop     cx              ; 
        loop    rowLoop		; outerloop
hang:   
	jmp short hang		; will remove this... if i optimize further.
waitForKeyPress:
        ;mul 	cx
        ;int     16h		 ; keyboard request
quit:
        ;mov     ax,3		 ; return to text mode..
        ;int     10h		 ; 
        ;ret                     ; exit program
