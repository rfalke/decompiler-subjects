              mov al,0x13
              int 0x10
              les bp,[bx]
              rcl al,cl
              mov cx,di
              xchg al,[es:di]
              sar ax,1
              adc al,ch
              xor cx,di
intro:
              xchg al,[es:di]
              adc ax,di
              dec di
              jmp short intro