; prismatic thingy
; by vladimir filipovic
; christmas 2006 hugi size coding compo
; written 24-dec-2006

; - exits on ESC
; - restores text mode
; - syncs on screen retrace

; 63 bytes in size


; sorry that it's terribly lacking in comments and readability
; i'm writing it two hours before the deadline

; there's surely some room in there to shave off a few more bytes.


.286

a segment
assume cs:a


org 100h

start:


push word ptr 0a000h
pop es

mov al,13h
int 10h

mov dx,3dah             ; will be used down the line for port i/o


main_loop:
inc bh

mov ch,200              ; number of lines

inner_loop:

mov di,cx               ; CL,CH = x,y   DI = pixel address (proportional)
shr di,2
;and di,0ffc0h          ; uncomment for straight non-proportional display
add di,cx




; okay, so the first draft of this demo used a formula like
; cos[cl xor ch +bh] + cos[ch+bh/2] + cos[bh]
; or something more or less like that, which gave a really beautiful
; "prismatic plasma" effect.

; i spent the whole night trying to cut it down to 64 bytes. i swear i
; even tried putting the cos table into the PSP to have 0 as the base
; address, and even then it was still too long.

; in the end i gave up, chucked the whole trigonometry code and then put
; that MUL (for squaring) in there to add at least some non-linearity.
; it still looks nice, but not nearly as nice as the trig version did.

mov ax,cx

xor al,ah
add al,bh
mul al

add ah,ch
add ah,bh               ; change this last one to SUB AH,BH for a
                        ; different, slower pattern





; okay, i'm fucking sure this part can be done in fewer bytes, but
; it's 22:35 right now, this is already less than 64 bytes, and i
; have one more demo to try to cut down to size till midnight!



                        ; now we want to translate AH to a pretty palette value
mov al,ah
aam                     ; ie. AH:=AL/10
mov al,ah
add al,32

stosb
stosb                   ; twice, to cover the proportional display gaps
loop inner_loop


retrace:
in al,dx
test al,8               ; sync for screen retrace
jz retrace


in al,60h
cmp al,1                ; ESC pressed?
jne main_loop


mov ax,3                ; mode co80
int 10h

retn

a ends
end start



; 32 56 104
