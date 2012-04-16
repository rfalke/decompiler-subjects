;\ \ \ // / /\  \/  Vyhen (The Furrrnace)
; \ \ \/ /\ \/ /\ \ a 100-byte intrrro
;  \/ / / / /\ \ \/ by Rrrola <rrrola@gmail.com>
;grrreets to everrryone who loves the smell of napalm in the morrrning

; VERSION  R G B   H   I S          L   F   C    W  COLORANT

; CuCl2    8 2 0   0 -32 5 addsp+ror2 sub add xchg  copper(II) chloride
; CH3CH2OH 4 4 2   0 -28 5  imul5+inc sub mov xchg  ethyl alcohol
; Li2CO3   0 3 2   0  12 6 imul91+inc sub  or xchg  lithium carbonate
; Na2B4O7  1 0 3 -16 -14 6 imul53+inc sbb mov  mov  borax
; NaCl     0 1 5   6   0 6 addbx+ror1 sbb mov  mov  table salt
; vyhen    0 1 3   0 -32 5      addbx sub mov xchg  blackbody radiation

R equ 0  ; palette shifts (color of the flame)
G equ 1
B equ 3
H equ 0  ; minimum smoke heat
I equ -32; heat increment
S equ 5  ; heat shift (5 or 6)

  org 100h  ; assume ah=bx=0 si=100h sp=-2

;Initializtion

  mov  al,13h
  int  10h
  les  bp,[bx]  ; bp = 20CD, es ~ A000 (we don't care ;-))

;Palette

  pop  ax       ; sp = 0
  mov  dx,3C8h
  out  dx,al
  inc  dx       ; dx stays 0x3C9

P mov  cx,R+16 | G+16<<5 | B+16<<10 ; cx = 01bbbb1gggg1rrrr
  push sp
  push sp       ; sp stays -1024 = 0xFC00
Q shrd ax,bx,cl
  cmp  al,63
  jb   O
  mov  al,63    ; ax = min(63, palIndex>>[R|G|B])
O out  dx,al
  shr  cx,5
  jnz  Q
  inc  bl
  jnz  P        ; bl = palIndex = 0..255

;Main loop

M mov  bx,dx    ; bx = adr

L add  bp,bx    ; bp = parabola (flickering flames)
 ;ror  bp,1     ;<bp = random (hotter noise)
 ;imul bp,byte 5
 ;inc  bp       ;<bp = LCGrandom (cooler noise)
  js   X        ; x = R+[adr] or [adr+320*raise+1]+[adr+320]
  mov  al,[bx+di+1]
  mov  ch,[bx+si+64]

X add  al,ch
  rcr  al,1

F sub  al,H+1   ; al = newColor = max(H, x/2-1)... fadeout=1
 ;sbb  al,H     ;<al = newColor = max(H, x/2-(x&1))... fadeout=0.5
  adc  al,H     ; use "add|adc al,-?" "jc C" "salc" for faster fadeout

C mov  di,bx    ;<"mov", "add", "or"...
  or   di,sp
  mov  [di-1],bp; fill bottom rows with bp, don't cross segment boundary

W xchg [bx],al  ;<"xchg" (heat=oldColor) or "mov" (heat=newColor, wider)
  add  al,I     ; hot gas raises faster: raise = (heat+I - y*1.25)>>S
  sub  al,bh
  shr  ax,S     ; sets zero flag
  imul di,ax,320
  jz   Z        ; if (raise == 0) R = 0; else R = [adr+320*raise-1]
  mov  al,[bx+di]
Z inc  bx
  mov  ch,[bx]
  jnz  L

  mov  di,sp    ; screen copy (0x0100->0xFC00)
  mov  ch,40h
  rep  movsd

  in   al,60h
  dec  ax       ; ah=0 from shifting
  jnz  M

  push ax
  ret
