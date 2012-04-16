;fasm
org 100h
use16

;----- set 13h 320x200x256 vga ----
mov al,13h ;assuming ax=0 / cx=0
int 10h

push 09000h
pop es

;dec cx ;cl=255
mov cx,1200
init_stars:
mov si,cx ;correct offset (cx*2)
shl si,1   ;mul 2
call create_star
loop init_stars

weiter:
;---draw stars---
mov cx,1200  ;number of visible stars
malen:
mov si,cx
shl si,1   ;mul 2 ;always correct offset

cmp byte [key],4 ;backwards @ 4 and 5
jae backwards

dec byte [s_z+si]      ;move towards viewer

jmp short tester             ;saved 1 byte instead of call create_star

backwards:
inc byte [s_z+si]       ;move away from viewer
;cmp byte [s_z+si],255
;jae newone
tester:
jnz okee                      ;not reached farest point

newone:
call create_star             ;create new star :)

okee:
cmp byte [s_c+si],40 ;color management
adc byte [s_c+si],0 ;saves 1 byte
;je go_on
;inc byte [s_c+si]
;go_on:


;rotate around z axis = 57b
;thanks to the source of the 256b intro "Squirmer" by Gergely Kutenich
;where i found out to handle these parts @ fpu
fninit ;init fpu WITHOUT fwait
;                    st(0)
fldpi               ;pi
fimul word [grad]     ;pi*grad
fidiv word [for_rad]  ;pi*grad/180 (grad in rad!)
fsincos             ;cos sin

fld st1           ;sin cos sin
fimul word [s_y+si]   ;sin*y cos sin
fld st1           ;cos sin*y cos sin
fimul word [s_x+si]   ;cos*x sin*y cos sin
fsub st0,st1    ;cos*x-sin*y sin*y cos sin
fist word [sn_x+si]

fxch st2    ;st0<-->st1 cos sin*y cos*x-sin*y sin
fimul word [s_y+si]   ;cos*y sin*y cos*x-sin*y sin
fld st3           ;sin cos*y sin*y cos*x-sin*y sin
fimul word [s_x+si]   ;sin*x cos*y sin*y cos*x-sin*y sin
fadd st0,st1    ;sin*x+cos*y sin*y cos*x-sin*y sin
fist word [sn_y+si]
;###end rotation

;############generate 2d x,y out of 3d x,y,z -->99b
calc2d:
gocalc:
mov ax,100;word viewx ;nx:=(viewx*x div (z+cnz)) + cnx;
imul word [sn_x+si]

;mov bx,word cnz

idiv word [s_z+si]
add ax,160 ;cnx
mov word [calcx],ax ;save calculated 2d value

mov ax,100;word viewy ;ny:=(viewy*y div (z+cnz)) + cny;
imul word [sn_y+si]

;mov bx,word cnz

idiv word [s_z+si]
add ax,100 ;cny
mov word [calcy],ax ;save calculated 2d value

;set 2d pixel at x,y
mov ax,320 ;es:[320*y+x]
imul word [calcy]
add ax,word [calcx]
mov di,ax         ;save correct offset

cmp word [calcx],319  ;no error on display!
ja nix
cmp word [calcy],199
ja nix

mov al,byte [s_c+si]

stosb;mov byte es:[di],al

cmp byte [bigstars],1 ;big at -1
jne nix

stosb
add di,320-2
stosb
stosb
nix:
;############ /generate 2d x,y out of 3d x,y,z


dec cx
jnz malen
;-----------------

cmp byte [key],2 ;only rotate at 2
je dorotation
cmp byte [key],3 ;and at 3
je dorotation
cmp byte [key],6 ;and 6 + 7
jae dorotation2

jmp short weidda

dorotation:
inc word [grad]  ;degrees for rotation
cmp word [grad],361   ;reached 360°?
jb weidda
mov word [grad],1
jmp short weidda

dorotation2:
dec word [grad]  ;degrees for rotation
jnz weidda
mov word [grad],360


weidda:

;wait for vsync
mov dx, 3dah  ;port on vga to check retrace
;vsync1:
;in al,dx      ;get byte
;test al,8     ;test bit 8 (and); bit 1 for horizontal retrace
;jnz vsync1    ;1 = in retrace; loop until 0
vsync2:
in al,dx
test al,8
jz vsync2     ;0 = not in retrace; loop until 1

;cx=0
;###### waste 40b
mov bl,30
mov dx,5
xor di,di
waste3:
mov cl,40
waste:

mov al,[es:di+32000-320*80+170];[di+32000-20*320-180];grab from starfield (vscreen)

cmp al,0
je no_new_color

add al,dl

no_new_color:
;mov [es:di],al
stosb;mov es:[di],al
loop waste
add di,320-40
dec bl
jnz waste3

mov bl,30
add di,320*7
dec dx
jnz waste3
;###### /waste

;cx=0

;vscreen ---> vga
push ds ;save
push 0a000h
pop es
push 09000h
pop ds

;mov cx,32000
dec cx ;ffffh
mov di,si ;---> now di=si --> 2 bytes less that xor di,di + xor si,si
rep movsw ;ds:si--->es:di

pop ds ;restore
push 09000h
pop es

dec cx ;--> ffffh
;mov cx,32000;32000  ;clrscr @09000h
;xor di,di ;doesn't matter because of cx=ffffh
xor ax,ax
rep stosw ;slow but handles cx=ffffh perfect


mov ah,01h     ;00 readkey; 01 keypressed
int 16h        ;bios int
jnz ende

inc byte [counter]
jnz ding

;0=no rotation + small stars <-----------.
;1=no rotation + big stars               |
;2=rotation + small stars                |
;3=rotation + big stars                  |
;4=backwards + no rotation + small stars |
;5=backwards + no rotation + big stars   |
;6=backwards + rotation + small stars    |
;7=backwards + rotation + big stars      |
;8 --------------------------------------'

inc byte [key]

neg byte [bigstars]

cmp byte [key],8
jb ding

sub byte [key],8

ding:
jmp weiter     ;go on

ende:
mov ax, 0003h
int 10h ; set 03h = textmode 80x25
ret ;back to dos

;########################## procedures/functions ##########################


;############create random number within range -->63b incl create_star
get_rnd:
in al,40h
xor dx,dx
idiv bx     ;0-99 in dx / dx:ax div bx
inc dx ;never 0
ret

;############create x,y,z for star[cx]
create_star:
mov byte [s_c+si],15 ;16 ;for the sparkles (16=after fading in)
sternx:;-------create x-values--------
mov bx,100 ;1-100
call get_rnd
sub dx,50 ;80
mov word [s_x+si],dx ;save
sterny:;-------create y-values--------
call get_rnd
sub dx,50
mov word [s_y+si],dx ;save
sternz:;-------create z-values--------
mov bx,254;1-255
call get_rnd
mov word [s_z+si],dx ;save
ret


for_rad dw 180 ;180°

grad dw 27 ;better start that with 0 ;for rotation

key db 0 ;for the things going on

counter db 0 ;for auto change

bigstars db -1


;data segment
;-------- data ------------
s_x dw 2048 dup ? ;x
s_y dw 2048 dup ? ;y
s_z dw 2048 dup ? ;z
s_c dw 2048 dup ? ;color

sn_x dw 2048 dup ? ;x after rotation
sn_y dw 2048 dup ? ;y

calcx dw ? ;calculated 2d x
calcy dw ? ;calculated 2d y