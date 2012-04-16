;256 BYTES particle engine with keygoard control
;Nasm syntax
;by fr33ke
;Sorry for being incomprehensible, but this is how I wrote it

%DEFINE TAIL 25

ORG 0x100		;Com file

cld			;make sure stos and lods are handled correctly

;**SET VIDEO MODE
mov ax, 0x0013
int 0x10		;set video 320x200x256

;**SET PALETTE COLORS
xor al, al		;initialise palette making at color 0
mov dx, 0x03c8
out dx, al		;palet color# (0) into port 0x03c8

inc dx			;now stuff the colors in 0x03c9
xor cx, cx		;loop 256 times (0 = 256 (mod 256))

repeat:

shr al, 1
out dx, al

out dx, al

mov al, cl
shr al, 2
out dx, al

inc cl
jnz repeat

;**INITIALIZE PARTICLES

mov cx, MAX_PARTICLES	;for each particle
mov di, end		;di -> particle array
in al, 40h		;al = pretty random (timer)

init_particles:
call resetprog		;reset particle info
loop init_particles

;**SET SEGMENTS
push 0xA000
pop fs			;fs -> video RAM

over:
;**DARKEN SCREEN
xor di, di		;starting at 0,0
fill:
mov al, [fs:di]		;al=pixel color
sub al, TAIL		;decrease al
jnc next		;no wraparound
xor al, al
next:
mov [fs:di], al		;put back pixel
inc di			;next please!
jnz fill

;**SHOW PARTICLES

show:
db 0B9h		;mov cx, ?
particles: dw 100h

cmp cx, MAX_PARTICLES
jb addnshow

dec word [particles]
jmp short show

addnshow:
inc cx
mov si, end

addnshowloop:
mov di, si
mov bx, 4

addit:
dw 0483h	;add word [si], byte ?
gravx db 0

lodsw
add ax,[si+bx]
cmp ax, 320 << 4
jae reset
mov [si+bx], ax

dw 0483h	;add word [si], byte ?
gravy db 1

lodsw
add ax,[si+bx]
cmp ax, 200 << 4
jge reset
mov [si+bx], ax

lodsw
add [si+bx], ax
jnc reset

lodsw
shr ax, 4
mov di, ax
lodsw
mov bx, ax
shr ax, 4
imul ax, 320
add di, ax
lodsw
test bx, bx
js continue

mov byte [fs:di], al

continue:

loop addnshowloop

;*** Keyboard handling
delay:
mov ah, 06h
mov dl, 0xFF
int 21h
;jz over - fuck al = 0

mov di, gravy

sub al, "w"
jnz not_w
dec byte [di]   ;[gravy]
not_w:

sub al, ("s"-"w") % 256
jnz not_s
inc byte [di]   ;[gravy]
not_s:

mov di, gravx

sub al, ("a"-"s") % 256
jnz not_a
dec byte [di]   ;[gravx]
not_a:

sub al, ("d"-"a") % 256
jnz not_d
inc byte [di]   ;[gravx]
not_d:

mov di, particles

sub al, ("+"-"d") % 256
jnz not_plus
inc word [di]   ;[particles]
not_plus:

sub al, ("-"-"+") % 256
jnz not_minus
dec word [di]   ;[particles]
not_minus:

sub al, (0x1B - "-") % 256  ;Check escape
jnz over
ret

reset:
dec cx
jz delay
push addnshowloop
in al, 40h

resetprog:
mov dx, 37	;randomizer
mul dx		;ax*=37
add ax, cx	;ax+=cx
push ax		;save ax

cbw
and al, 31
xor al, ah
stosw		;-32 <= xv < 32

pop ax		;get ax
push ax		;but save it too

mov al, ah
or al, 0xFF - 0xF
sub al, 0x40
cbw

stosw		;-79 <= yv <= -64

mov al, -1  ;ah should be 0xFF from the previous one

stosw		;life decreases with one

mov ax, 160<<4	;x
stosw
mov ax, 200<<4	;y
stosw
mov ax, 255	;z / life
stosw

pop ax
mov si, di
ret

end equ ($-$$) + (($-$$) % 2) + $$
MAX_PARTICLES equ (256*256-(end-$$)-256)/12-10