;  _____________  shifticida by rrrola [rrrola@gmail.com]
; | \        /  | a 32b game of speed and stamina
; | shift   /\  | for two shift-mashing players or a single schizophrenic
; |______/\_____| greets to everyone who can't write in caps anymore

  org 100h ; assume bh=0 si=0100 di=fffe, 80-column textmode

  mov  cx,41    ; position, will be rewritten
  mov  bl,80    ; columns

  mov  ax,202h
l dec  bx       ; print cx filled and 80-cx empty smileys
  js   r        ; game over on overflow
  int  29h      ; print character in al
  loopnz l
  dec  ax       ; this happens only once if cx==bx or cx==0
  jpo  l        ; parity depends only on al

  int  16h      ; ah=2...get shift state
  xchg ax,di    ; di = old shift state, fffeh on startup
  xor  ax,di    ; al = change in shift state

  shl  ax,15
  cwd           ; carry = left shift, -dx = sign = right shift
  adc  [si+1],dx; position -= sign - carry

  push si
r ret           ; jmp 100h
