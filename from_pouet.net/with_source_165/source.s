;colorfast
;y0bi / wAMMA
;3.12.2006
section .text
org 100h
                mov al,13h
                int 10h

                mov dx,3d4h
                mov ah,20h
                out dx,ax
                mov ds,ax
;------------------------        
                mov cx,32
PlasmaTabOuter:
                        
                imul dx
                inc ax
                xchg ax,dx
PlasmaTabInner:

				cmp cl,32-2
				jb whut
				mov [bx],cl
whut:			
		        mov al,dl
                imul al
                xchg si,ax
                mov al,dh
                imul al
                add ax,si
                cmp ah,31
                jbe ok
                mov ah,31
ok:
                add [bx],ah
                inc dx
                dec bx
                jnz PlasmaTabInner
                loop PlasmaTabOuter
;---------------------------------        
                push 0a000h
                pop es
                
                xor bp,bp
MainLoop:
				mov dx,3c9h
				mov si,768
PaletteLoop:		
				inc cx
				cmp cl,3
				jb ok2
				xor cx,cx
ok2:				
				mov ax,bp
				shl cl,1
				shr ax,cl
				shr cl,1
				add ax,si
				cbw
				xor al,ah
				shr al,1
				out dx,al
				dec si
				jnz PaletteLoop
					
				dec bh
                inc bp
PlasmaLoop:
				mov ah,8
                mov al,[ds:si+bp]
                add al,[si+bx]
                cmp ax,bp
                jb part2
                cbw 
                xor al,ah
                shr al,2
                mov ah,al
                add ax,si
                xor al,ah
part2:
                stosb
                dec si
                jnz PlasmaLoop

                in al,60h
                cmp al,1
                jne MainLoop

;                mov ax,3h                    
;                int 10h
                retn
end
