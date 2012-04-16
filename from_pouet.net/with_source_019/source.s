.model tiny

.code

org 100h

start:
  mov al,13h    ;//ah assumed to be 0. ok.
  int 10h

  pop sp        ;//com loader pushes 0, => sp == 0
  pop cx        ;//2 instruction bytes for int 20h => cx = 20CDh
                ;//pop something else for less stars
  pop ds        ;//we need the video segment 0A000h, here we
                ;//find 9FFFh (upper memory segment limit) on most machines.
                ;//this is not clean, but who cares...
lp1:
  pop ax        ;//randomize, hope no irq occurs while popping code!
  aaa           ;//afterwards al<10
lp2:
  xchg [di],al  ;//clean & put star
                ;//es prefix removed
  add di,ax     ;//new position for star / randomize position in init
  loop lp1      ;//init loop, skipped in star moving loop
  inc di        ;//a clean pixel must also move
                ;//was stosb
  cbw           ;//clear ah
                ;//was xor ax,ax
  inc cx        ;//to skip loop command
  jmp lp2       ;//star moving loop

end start