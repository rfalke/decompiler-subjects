;**************************************************************
;*** Mekka/Symposium 2k-1 4k intro contribution             ***
;*** called "Chicken Dance 2" by SquoQuo                    ***
;***                                                        ***
;*** Warning! Bad english approaching!                      ***
;***                                                        ***
;*** Mode 13h must run with 70Hz, because the whole         ***
;*** synchronisation (music/video) is coupled on the        ***
;*** VSync                                                  ***
;***                                                        ***
;*** You may use this source code as long as you learn      ***
;*** something from it (at least, that i did a bad code ;-) ***
;*** If you really learned something from it, please        ***
;*** (at least) greet us in your production                 ***
;***                                                        ***
;*** '2k-1 by Hopper/SquoQuo                                ***
;**************************************************************

                DOSSEG          ; some stupid stuff now, unfortunately needed
                .MODEL SMALL    ; small model, i.e. 16bit jumps, etc.
                .486            ; support 386/486 instructions
                .DATA           ; CS, DS should be the same now!
                .CODE
                org 0100h

start:          mov ax,cs
                add ax,4096
                mov [first_free_seg],ax ; dirty calculation of free segment!

                call gus_init           ; init GUS and load up samples
                mov bh,3                ; play a little sample on all channels
                mov bl,3                ; to start GUS sound (this is needed,
                mov al,27               ; without sound starts at pattern 3!)
gus_start_loop: call gus_play_note
                dec bh
                jns gus_start_loop



;***********************************************************
;*** Calculates the text screens (offset himem_text_offset)
;*** Font is taken from VGA BIOS
;***********************************************************
;*** format of text_data:
;*** text_screen, x, y, string (0-terminated)
;***********************************************************
                mov ax,[first_free_seg]
                mov es,ax
                xor di,di
                xor eax,eax
                mov dh,4
text_clear_loop:mov cx,16384
                rep stosd
                mov bx,es
                add bx,65536/16
                mov es,bx
                dec dh
                jnz text_clear_loop

                mov ax,[first_free_seg]
                mov es,ax
                mov dh,3
text_plasma_out:mov cx,12000
text_plasma_in: call random
                mov di,ax
                call random
                and al,15
                stosb
                stosb
                add di,318
                stosb
                stosb
                loop text_plasma_in
                mov ax,es
                add ax,65536/16
                mov es,ax
                dec dh
                jnz text_plasma_out

                call text_sm_sm
                call text_sm_sm

                mov ax,1130h
                mov bh,06h      ; double dot font
                int 10h         ; ES:BP holds now the font address
                mov si,bp
                mov bp,OFFSET text_data
text_outer:     mov al,cs:[bp]
                cmp al,255
                je text_sign  ; end of text->draw sign
                shl ax,12
                add ax,cs:[first_free_seg] ; load first segment
                mov gs,ax
                mov ax,cs:[bp+1]
                shr ax,2        ; could give some trouble (eax shift?)
                add ax,cs:[bp+1]
                add bp,3
                mov di,ax
text_inner:     mov bl,cs:[bp]
                mov ah,15
                inc bp
                cmp bl,0
                je text_outer
                xor bh,bh
                shl bx,4
                mov cl,16
text_very_inner:mov al,es:[si+bx]
                mov ch,8
text_most_inner:test al,80h
                je text_nothing
                mov gs:[di-321],ah
                mov gs:[di-320],ah
                mov gs:[di-1],ah
                mov gs:[di],ah
                mov gs:[di+1],ah
                mov gs:[di+320],ah
                mov gs:[di+321],ah
text_nothing:   add di,2
                shl al,1
                dec ch
                jnz text_most_inner
                inc bx
                add di,624
                dec cl
                jnz text_very_inner
                sub di,10224
                jmp text_inner

text_sign:      mov ax,[first_free_seg]
                add ax,65536/16
                mov es,ax
                mov al,15
                mov di,320*35+200
                mov dl,15
text_sign_loop1:mov cx,30
text_sign_in1:  mov es:[di+320*100],al
                mov es:[di+35],al
                mov es:[di+320*100+35],al
                stosb
                loop text_sign_in1
                add di,290
                dec dl
                jne text_sign_loop1
                mov di,320*50+215
                mov dl,100
text_sign_loop2:mov cl,15
text_sign_in2:  mov es:[di+20],al
                stosb
                loop text_sign_in2
                add di,305
                dec dl
                jne text_sign_loop2

text_smooth:    call text_sm_sm
                mov dx,[first_free_seg]
                mov bh,3
text_sm_outer:  mov gs,dx
                xor di,di
                xor al,al
                mov cx,64000
text_sm_inner:  sub al,2
                jns text_sm_not
                xor al,al
text_sm_not:    mov bl,gs:[di]
                cmp bl,al
                jbe text_sm_skip
                mov al,bl
text_sm_skip:   mov gs:[di],al
                inc di
                loop text_sm_inner
                add dx,65536/16
                dec bh
                jnz text_sm_outer

text_end:       mov ax,[first_free_seg]
                mov es,ax
                add ax,65536/16
                mov fs,ax
                xor di,di
                mov cx,16384
text_mix_loop:  mov eax,es:[di]
                mov ebx,fs:[di]
                shl ebx,4
                or eax,ebx
                stosd
                loop text_mix_loop

chicken_calc:   mov ax,[first_free_seg]
                add ax,65536/16*3
                mov es,ax
                xor eax,eax
                mov di,ax
                mov cx,16*64*6
                rep stosd

                mov ax,cs  ;needed???
                mov ds,ax  ;needed???
                mov si,OFFSET chicken_walk1
                xor di,di
chicken_calc1:  mov dh,[si]            ; load start-row
                inc si
                movzx ax,dh            ; add start-row to screen offset
                shl ax,6
                add di,ax
chicken_loop_o: mov dl,[si]            ; load horizontal start value
                inc si
                movzx ax,dl
                add di,ax              ; and add it to screen offset
chicken_calc3:  mov cl,[si]            ; load draw value
                inc si
                cmp cl,0               ; eol-tag?
                je  chicken_calc4      ; -> next line
                mov al,cl              ; save value
                shr al,6               ; extract color
                and cl,63              ; and mask out number of pixel
                add dl,cl              ; add number of pixels to counter
                xor ch,ch
                rep stosb
                jmp chicken_calc3      ; load next byte
chicken_calc4:  mov al,64              ; calculate not-drawn pixel number
                sub al,dl
                xor ah,ah
                add di,ax              ; and shift the pointer about that value
                inc dh                 ; eol reached, so increment line counter
                cmp dh,64              ; end of picture?
                jne chicken_loop_o     ; no->draw next line

                dec [chick_calc_pic]   ; decrement global picture counter
                jne chicken_calc1

                mov si,64*64*4+63
                mov dl,64
chicken_mir_1:  mov cx,64
chicken_mir_2:  mov al,es:[si]
                dec si
                stosb
                loop chicken_mir_2
                add si,128
                dec dl
                jne chicken_mir_1

                mov ax,13h              ; switch to 320x200x8
                int 10h

dummy_shower:   mov bl,63
                call set_palette        ; set palette to black

                xor bl,bl               ; show first screen (2 texts)
                call copy_picture

dummy_startup:  inc [global_counter]    
                mov ax,[global_counter]
                cmp ax,1024             ; let chicken dance now?
                ja perhaps_phase3
                jne perhaps_phase0
                mov ax,0a000h           ; set chicken palette and draw background
                mov es,ax
                mov di,0
                xor eax,eax
                mov cx,12800
                rep stosd               ; set first 160 lines to light blue
                mov al,4
chick_bgr_loop: mov cx,320              ; draw 40 lines with ascending blue
                rep stosb
                inc al
                cmp al,44
                jne chick_bgr_loop
                jmp after_perhaps
perhaps_phase0: cmp ax,64
                ja perhaps_phase2
                mov bl,64               ; 64 frames fade in
                sub bl,al
                xor bh,bh
                call set_palette
                jmp after_perhaps
perhaps_phase2: cmp ax,448              ; 384 frames title shown
                jbe after_perhaps
                cmp ax,576
                jae perhaps_phase2a
                sub ax,448              ; 128 frames cross-fading
                shr ax,1
                mov bh,al
                xor bl,bl
                call set_palette
                jmp after_perhaps
perhaps_phase2a:cmp ax,960
                jbe after_perhaps
                cmp ax,1024
                jae perhaps_phase3
                sub ax,960              ; 64 frames fading out
                mov bl,al
                mov bh,63 
                call set_palette
                jmp after_perhaps 

perhaps_phase3: cmp ax,3072
                ja perhaps_phase4       ; show last screen
                jne perhaps_phase3a
                mov bl,63
                call set_palette        ; frame 2620?
                mov bl,2                ; ->copy last screen and set palette
                call copy_picture
                jmp after_perhaps

perhaps_phase3a:mov dx,3c8h
                mov si,OFFSET chicken_pal
                mov ax,cs
                mov ds,ax
                mov bl,31
chicken_pal_o:  mov cx,3
chicken_pal_l:  mov al,bl
                shl al,2
                add al,cl
                add al,128
                out dx,al
                inc dl
                lodsb
                out dx,al
                lodsb
                out dx,al
                lodsb
                out dx,al
                dec dl
                loop chicken_pal_l
                mov al,bl
                shl al,2
                add al,128
                out dx,al
                inc dl
                mov al,63
                out dx,al
                mov al,byte ptr [global_counter]
                shr al,1
                add al,bl
                shl al,2
                out dx,al
                out dx,al
                dec dl
                sub si,9
                dec bl
                jns chicken_pal_o
                mov cl,4
chicken_pal_bgr:mov al,cl
                out dx,al
                inc dl
                xor al,al
                out dx,al
                mov al,cl
                shr al,1
                out dx,al
                mov al,cl
                out dx,al
                dec dl
                inc cl
                cmp cl,44
                jne chicken_pal_bgr

                mov ax,0a000h
                mov es,ax
                xor di,di
                xor dl,dl
per_back_outer: mov cx,320
                mov al,dl
                shl al,2
                cmp al,128
                jae per_back_outer2
                add al,128
per_back_outer2:rep stosb
                inc dl
                cmp dl,160
                jne per_back_outer

                mov bx,[global_counter]
                sub bx,6   ; needed for perfect (?) sync of chicken to music
                shr bx,3
                mov al,bl
                and al,3
                cmp al,3                ; phase 3?
                jne c_n_phase3
                mov al,2                ; yes->draw pic 2
                jmp chicken
c_n_phase3:     cmp al,1                ; phase 1?
                je  chicken
c_n_phase1:     xor al,al              ; else draw pic 1
chicken:        cmp bx,192             ; time for concon (?)
                jbe chicken_c
                cmp bx,320
                ja  chicken_c
                add al,3
chicken_c:      xor ah,ah
                shl ax,8
                add ax,[first_free_seg]
                add ax,65536/16*3+64
                mov ds,ax

                mov dh,0            ; mirror flag off
                cmp bx,192
                jbe chick_drawer
                cmp bx,320
                jbe chick_dance  
                mov dh,1            ; mirror flag on (walk back again)
                mov ax,512
                sub ax,bx
                mov bx,ax
                jmp chick_drawer
chick_dance:    mov bx,192

chick_drawer:   shl bx,2
                sub bx,736
                jns chicken_n_s
                mov cx,bx
                add cx,256
                cmp dh,1
                je  chick_draw_m
                neg bx
                mov si,bx
                jmp chick_draw_a
chick_draw_m:   mov si,bx
                neg bx
chick_draw_a:   mov di,0
                add bx,64
                jmp chicken_a_s
chicken_n_s:    mov cx,256
                mov si,0
                mov di,bx
                mov bx,64
chicken_a_s:    shr cx,2
                add di,112*320      ; now di holds screen offset
                                    ; si holds chicken data offset
                                    ; bx holds add factor after drawing the line
                                    ; cx holds loop factor for drawing
                mov dl,48
chicken_y_loop: push cx
                cmp dh,1
                jne chicken_x_lo_m
chicken_x_loop: mov eax,es:[di]
                sub si,4
                and si,63
                or  eax,ds:[si]
                bswap eax
                stosd
                loop chicken_x_loop
                sub si,bx
                jmp chicken_aft
chicken_x_lo_m: mov eax,es:[di]
                and si,63
                or  eax,ds:[si]
                add si,4
                stosd
                loop chicken_x_lo_m
                add si,bx
chicken_aft:    pop cx
                add di,bx
                mov ax,ds
                add ax,64/16
                mov ds,ax
                dec dl
                jne chicken_y_loop

                mov bx,[global_counter]
                cmp bx,2560
                jb  after_perhaps

                mov di,152*320+60
                mov dl,4
per_egg_outer:  mov si,OFFSET egg_data
                mov cx,8
per_draw_egg:   mov eax,cs:[si]
                or  es:[di],eax
                bswap eax
                or  es:[di+4],eax
                add si,4
                add di,320
                loop per_draw_egg
                sub di,2496
                dec dl
                jne per_egg_outer

                jmp after_perhaps

perhaps_phase4: cmp ax,3140
                ja perhaps_phase5
                mov bx,3140
                sub bx,ax               ; fade in
                call set_palette
perhaps_phase5: cmp ax,3644
                jbe after_perhaps
                cmp ax,3772             
                je dummy_end            ; we reached the end
                mov bx,ax               ; fade out again
                sub bx,3644
                shr bl,1
                call set_palette

after_perhaps:  dec cs:[dummy_303_c_d]     ; change cut and res of 303 (triangle waves)
                jns dummy_303_t1
                mov cs:[dummy_303_c_d],24
                inc cs:[dummy_gus_cut]
                and cs:[dummy_gus_cut],31
dummy_303_t1:   dec cs:[dummy_303_r_d]
                jns dummy_303_t2
                mov cs:[dummy_303_r_d],87
                inc cs:[dummy_gus_res]
                and cs:[dummy_gus_res],15
dummy_303_t2:   dec cs:[dummy_song_d]
                jne dummy_song_aft
                mov cs:[dummy_song_d],8
                inc cs:[dummy_song_pat]
                cmp cs:[dummy_song_pat],64
                jne dummy_s_n_p         ; end of pattern?
                mov cs:[dummy_song_pat],0
                inc cs:[dummy_song_p]
                mov al,[pat_mute_pos]
                xor ah,ah
                mov di,OFFSET pattern_muter
                add di,ax
                mov al,cs:[di]
                mov cs:[dummy_s_mute],al
                inc [pat_mute_pos]
dummy_s_n_p:    mov di,OFFSET song_pattern
                mov dl,cs:[dummy_s_mute]
                xor bh,bh
                add di,[dummy_song_pat]
dummy_play_row: test dl,1               ; mute channel?
                je dummy_play_not       ; yes->skip voice
                cmp bh,1                ; voice 3 (303)?
                jne dummy_play_n        ; no->normal voice
                cmp [dummy_song_p],3    ; 4th pattern?
                jne dummy_play_n
                cmp [dummy_song_p],4
                jne dummy_play_n       
                add di,64               ; yes->play fillin 303 pattern
dummy_play_n:   mov al,cs:[di]          ; get note
                mov bl,al
                and bl,7                ; extract instrument
                shr al,3                ; and note number

;;;                cmp cs:[gus_base],280h  ; gus_base=280h (no GUS present)??
;;;                je dummy_song_aft       ; yes->skip song structure

                call gus_play_note      ; and play sample
dummy_play_not: add di,64
                shr dl,1                
                inc bh
                cmp bh,4                ; all 4 voices
                jne dummy_play_row
                
dummy_song_aft: mov dx,3dah
synchros_1:     in al,dx
                test al,8
                jnz synchros_1
synchros_2:     in al,dx
                test al,8
                jz synchros_2
                in al,060h
                cmp al,129
                jne dummy_startup       ; ESC not pressed->loop again

dummy_end:      mov cl,3                ;********** only to stop all sounds
gus_stop_loop:  call gus_stop_voice
                dec cl
                jns gus_stop_loop

end_this_shit:  mov ax,3        ; switch back to textmode (80x25x4)
                int 10h
                ret

;*****************************
;**** Main routine, shows the frames, the text, calculates the palette
;**** plays the music and does all the rest (which is not present)
;*****************************

;*** copies screen no.<BL> into screen ***
copy_picture:   mov ax,[first_free_seg]
                shl bx,12
                add ax,bx
                mov ds,ax
                mov ax,0a000h
                mov es,ax
                mov di,0
                mov si,0
                mov cx,16000
                rep movsd
                ret


;*************************************
;*** Set palette to dull greys
;*** BL holds the luminance (0->normal, 63->black)
;*** BH determines mix level (0->colour 0-15,  63->colour 0-240 (16 steps))
;*************************************
set_palette:    pusha
                xor cl,cl
set_pal_loop:   mov dx,3c8h     ; this is our "base" port-nr.
                mov al,cl
                out dx,al       ; and send it
                inc dl
                mov ah,al
                shr ah,4
                and al,15
                shl ax,2

                sub al,bh
                jns set_pal_mix1
                xor al,al
set_pal_mix1:   not bh
                and bh,63
                sub ah,bh
                jns set_pal_mix2
                xor ah,ah
set_pal_mix2:   add al,ah
                cmp al,63
                jbe set_pal_mix3
                mov al,63
set_pal_mix3:   sub al,bl
                jns set_pal_write
                xor al,al
set_pal_write:  mov ah,al
                cmp al,32
                jae set_pal_half2
                shr al,1
                out dx,al
                xor al,al
                out dx,al
                mov al,ah
                out dx,al
                jmp set_pal_after
set_pal_half2:  mov al,ah
                sub al,16
                out dx,al
                mov al,ah
                sub al,32
                shl al,1
                out dx,al
                mov al,ah
                out dx,al
set_pal_after:  not bh
                and bh,63
                inc cl
                jnz set_pal_loop
                popa
                ret             ; then go back where we came from

;*****************************************
;*** generate pseudo random-number in eax
;*** "borrowed" from stoned
;*****************************************

random:         mov eax,[random_seed]           ; create new muting
                xor eax,1036745819
                add eax,1876389621
                rol eax,7
                mov cs:[random_seed],eax
                ret

;******************************************************
;*** Calculates the different samples and loads them up
;*** First a GUS initialization is performed
;*** This init is buggy (see GPE) but should work fine
;*** if booted clean (which is highly recommended)
;******************************************************
gus_init:       mov dx,gus_base
                add dx,103h
                mov al,4ch
                out dx,al
                add dx,2
                xor al,al
                out dx,al
                call gus_delay
                call gus_delay
                sub dx,2
                mov al,4ch
                out dx,al
                add dx,2
                mov al,1
                out dx,al
                xor eax,eax
                mov bl,0aah
                call gus_poke           ; save value
                call gus_peek           ; read back
                cmp bl,0aah
                je gus_found            ; result correct->gus found
                add gus_base,10h        ; test next adress
                cmp gus_base,280h
                jne gus_init
                ret
gus_found:      mov eax,90000h          ; test, if >= 768k mem on GUS
                mov bl,0aah
                call gus_poke
                call gus_peek
                cmp bl,0aah             ; correct value->alright
                je gus_alright
                ret

gus_alright:    mov dx,cs:[gus_base]    ; now initialize the GUS
                add dx,103h
                mov al,4ch
                out dx,al
                add dx,2
                xor al,al
                out dx,al
                call gus_delay
                call gus_delay
                mov al,1
                out dx,al
                call gus_delay
                call gus_delay
                sub dx,2
                mov al,4ch
                out dx,al
                add dx,2
                mov al,7
                out dx,al
                sub dx,2
                mov al,0eh
                out dx,al
                add dx,2
                mov al,(3 or 0c0h)
                out dx,al
                sub dx,3

                mov cl,3
gus_full_loop:  mov al,cl
                out dx,al
                inc dx

                mov al,9                ; set volume on 0ffffh (full)
                out dx,al
                inc dx
                mov ax,0ffffh
                out dx,ax
                dec dx

                mov al,0ch
                out dx,al
                add dx,2
                mov al,8                ; center all channels
                out dx,al
                sub dx,3

                dec cl
                jns gus_full_loop

                mov ax,cs:[first_free_seg]
                mov es,ax

                xor di,di
                mov bx,16
gus_bdr_loop2:  call gus_square
                add bx,16
                cmp bx,960
                jbe gus_bdr_loop2
                mov cs:[gus_env_h],5000
                mov cs:[gus_env_d],1000
                mov cs:[gus_env_sl],100
                mov cs:[gus_env_st],5000
                mov cs:[gus_env_r],5000
                call gus_envelope
                call gus_upload ; Sample number 0 (long bdr)

                mov cx,16384
                xor di,di
                call random;****to avoid low phase at start
snare_loop:     call random
                stosd
                loop snare_loop
                mov cs:[gus_cut],20        ; filter snare
                mov cs:[gus_res],5
                call gus_filter_303
                mov cs:[gus_env_h],0
                mov cs:[gus_env_d],300
                mov cs:[gus_env_sl],60
                mov cs:[gus_env_st],1000
                mov cs:[gus_env_r],3000
                call gus_envelope
                call gus_overdrive
                call gus_upload ; Sample number 1 (Snare)

                call gus_hihat
                mov cs:[gus_env_h],0
                mov cs:[gus_env_d],400
                mov cs:[gus_env_sl],90
                mov cs:[gus_env_st],1
                mov cs:[gus_env_r],6000
                call gus_envelope
                mov bl,26
                call gus_volume
                call gus_upload ; Sample number 2 (Open hihat)

gus_303_einsp:  xor bh,bh
gus_303_einsp2: mov bl,15
gus_303_303:    mov cs:[gus_res],bh
                push bx
                mov si,OFFSET gus_cut_tab
                xor bh,bh
                add si,bx
                mov al,cs:[si]
                mov cs:[gus_cut],al
                xor si,si       ; calculate 303 with <gus_cut> and <gus_res>
gus_303_loop:   mov ax,si
                not al
                mov es:[si],al
                dec si
                jnz gus_303_loop
                call gus_filter_303
                mov cs:[gus_env_h],0
                mov cs:[gus_env_d],259
                mov cs:[gus_env_sl],60
                mov cs:[gus_env_st],1
                mov cs:[gus_env_r],3836
                call gus_envelope       ; 303 envelope=exactly 4096 bytes!
                call gus_overdrive
                call gus_overdrive
                call gus_overdrive
                mov bl,50
                call gus_volume
                call gus_upload ; Sample number 3-66 (303 inc.resonance)
gus_303_d_d_d:  pop bx
                dec bl
                jns gus_303_303
                add bh,15
                cmp bh,120
                jne gus_303_einsp2

gus_end_all:    ret;*****************return of sample generation and upload

;*** Generates a square pulse (width BX each part), corrupts CX, increases DI
gus_square:     mov cx,bx       ; generate square (width BX)
                mov al,255
                rep stosb
                mov cx,bx
                xor al,al
                rep stosb
                ret

;*** Applies HDSR envelope on given sample, corrupts all registers
;*** gus_index holds correct length afterwards
gus_envelope:   mov di,cs:[gus_env_h]      ; leave bytes for hold phase
                xor eax,eax
                xor cx,cx
gus_env_decay:  mov al,127
                sub al,cs:[gus_env_sl]
                mul cx
                mov bl,127
                div cs:[gus_env_d]
                sub bl,al               ; BL=127-(((127-SL)*i) div D)
                mov al,es:[di]
                mul bl
                shr ax,7
                add ax,128
                xor bh,bh
                sub ax,bx
                stosb
                inc cx
                cmp cx,cs:[gus_env_d]
                jne gus_env_decay

gus_skip_decay: mov cx,cs:[gus_env_st]
gus_env_sust:   mov al,es:[di]
                mul cs:[gus_env_sl]
                shr ax,7
                add ax,128
                sub al,cs:[gus_env_sl]
                stosb
                loop gus_env_sust

gus_skip_sust:  xor cx,cx
gus_env_rel:    mov al,cs:[gus_env_sl]
                xor ah,ah
                mul cx
                div cs:[gus_env_r]
                mov bl,cs:[gus_env_sl]
                sub bl,al               ; BL=SL-(SL*i div R)
gus_env_rel3:   mov al,es:[di]
                mul bl
                shr ax,7
                add ax,128
                xor bh,bh               ; vorsichtshalber!!!
                sub ax,bx
                stosb
                inc cx
                cmp cx,cs:[gus_env_r]
                jne gus_env_rel

gus_env_end:    mov cs:[gus_index],di
                ret     ; apply envelope on sample, set index to length

;*** Upload the actual sample with length <gus_index>, save start in table
;*** gus_mem_instr
;*** Above sample 3 (incl.) are the 303 samples (only first start saved)
gus_upload:     mov eax,cs:[gus_mem_pointer]
                mov bl,cs:[gus_mem_count]
                xor bh,bh
                mov si,OFFSET gus_mem_instr
                cmp bl,5
                ja gus_upload_303
                shl bx,2
                add si,bx
                mov cs:[si],eax         ; instrument start is now saved
gus_upload_303: inc cs:[gus_mem_count]     ; increase for next instrument
                xor si,si
gus_upload_l:   mov bl,es:[si]
                sub bl,128              ; GUS uses signed 8 bit format!
                call gus_poke
                inc eax
                inc si
                cmp si,cs:[gus_index]
                jne gus_upload_l
                mov cs:[gus_mem_pointer],eax
                ret

;*** Overdrive whole sample area by factor 2 (with clipping), corrupts SI,AL
gus_overdrive:  xor si,si
gus_over_loop:  mov al,es:[si]
                cmp al,64
                jae gus_over_2
                mov al,64
gus_over_2:     cmp al,191
                jb gus_over_3
                mov al,191
gus_over_3:     sub al,64
                shl al,1
                mov es:[si],al
                inc si
                jnz gus_over_loop
                ret

;*** Calculates Hihat waveform, using 4 square oscillators, 1 noise osci
;*** combined by XOR, result is about 16000 bytes long
;*** corrupts (nearly) all registers
gus_hihat:      mov dx,4096             ; calculate the XOR waveform for HIs
                xor di,di
                mov bx,2
gus_hihat_loop1:call gus_square
                dec dx
                jnz gus_hihat_loop1
                mov dx,2700
                mov bx,3
gus_hihat_loop2:call gus_square
                dec dx
                jnz gus_hihat_loop2
                mov di,32768
                mov dx,1600
                mov bx,5
gus_hihat_loop3:call gus_square
                dec dx
                jnz gus_hihat_loop3
                mov di,49152
                mov dx,700
                mov bx,11
gus_hihat_loop4:call gus_square
                dec dx
                jnz gus_hihat_loop4
                mov di,16383
gus_hi_xor_loop:mov bl,es:[di]
                xor bl,es:[di+16384]
                xor bl,es:[di+32768]
                xor bl,es:[di+49152]
                call random
                and al,9fh
                xor bl,al
                mov es:[di],bl
                dec di
                jns gus_hi_xor_loop
                ret

;*** Applies lowpass filter with <gus_cut> and <gus_res> on sample area
;*** Filter envelope is used, corrupts all registers
gus_filter_303: pushad
                mov ax,cs:[first_free_seg]
                add ax,65536/16
                mov fs,ax               ; our copy_buffer
                mov cx,16384
                xor di,di
gus_fil_303_c:  mov eax,es:[di]
                mov fs:[di],eax
                add di,4
                loop gus_fil_303_c      ; now we've copied the sample area

                xor cx,cx               ; we don't need the whole area
gus_fil_303_l1: mov cs:[gus_fil_303_dum],0
                mov bl,cs:[gus_cut]
                xor bh,bh
                mov dx,cx
                shr dx,7
                add bx,dx
                sub bx,20
                cmp bx,1
                jge gus_fil_303_n1
                mov bx,1
gus_fil_303_n1: cmp bx,255
                jbe gus_fil_303_n2
                mov bx,255
gus_fil_303_n2: mov ax,bx               ; BL holds now actual cutoff
gus_fil_303_l2: mov dx,cx
                sub dx,ax
                jns gus_fil_303_n3
                xor dx,dx
gus_fil_303_n3: mov di,dx
                mov dl,fs:[di]
                xor dh,dh
                add cs:[gus_fil_303_dum],dx
                dec ax
                jnz gus_fil_303_l2      ; [gus_fil_303_dum] holds filter sum

                mov ax,cs:[gus_fil_303_dum]
                div bl                  ; AL holds now equalized sum
                movzx dx,al

                mov ax,cx
                sub ax,bx
                jns gus_fil_303_n4
                xor ax,ax
gus_fil_303_n4: mov di,ax
                mov al,es:[di]
                mul cs:[gus_res]
                shr ax,7
                sub dx,ax
                mov al,cs:[gus_res]
                xor ah,ah
                add dx,ax

                jge gus_fil_303_n5
                xor dx,dx
gus_fil_303_n5: cmp dx,255
                jbe gus_fil_303_n6
                mov dl,255
gus_fil_303_n6: mov di,cx
                mov es:[di],dl
                inc cx
                cmp cx,8192
                jne gus_fil_303_l1

                popad
                ret

;*** Applies volume (BL (0--64)) to sample area
;*** FastTracker format is used, i.e. linear, 0=off, 64=full volume
gus_volume:     xor di,di
                xor bh,bh
gus_vol_loop:   mov al,es:[di]
                xor ah,ah
                sub ax,128
                imul bx
                sar ax,6
                add ax,128
                stosb
                cmp di,0
                jnz gus_vol_loop
                ret

;*** Writes byte BL to adress EAX on GUS with base <gus_base>
gus_poke:       push eax
                mov dx,cs:[gus_base]
                add dx,103h
                mov al,43h
                out dx,al
                inc dx
                pop eax
                push eax
                out dx,ax
                dec dx
                mov al,44h
                out dx,al
                pop eax
                push eax
                shr eax,16
                add dx,2
                out dx,al
                add dx,2
                mov al,bl
                out dx,al
                pop eax
                ret

;*** Reads adress EAX on GUS into BL (base <gus_base>)
gus_peek:       push eax
                mov dx,cs:[gus_base]
                add dx,103h
                mov al,43h
                out dx,al
                pop eax
                push eax
                inc dx
                out dx,ax
                dec dx
                mov al,44h
                out dx,al
                pop eax
                push eax
                shr eax,16
                add dx,2
                out dx,al
                add dx,2
                in al,dx
                mov bl,al
                pop eax
                ret

;*** Waits for specific time on GUS
;*** corrupts al
gus_delay:      push dx
                mov dx,300h
                in al,dx
                in al,dx
                in al,dx
                in al,dx
                in al,dx
                in al,dx
                in al,dx
                pop dx
                ret

;*** Plays sound number BL on voice number BH with note AL
;*** Frequency table:
;*** 56,59,62,66,70,74,79,83,88,94,99,105,
;*** 112,118,125,133,141,149,158,167,177,188,199,211,
;*** 224,237,251,266,282,299,317,335,355,377,399,423,
;*** 448,475,503,532,564,598,634,671,711,754,798,846,
;*** 896,950,1006,1065,1129,1197,1268,1343,1423,1508,1597,1692 );
gus_play_note:  cmp al,0
                je gus_play_end
                pushad

                mov cs:[gus_play_voice],bh
                xor ah,ah
                mov di,OFFSET gus_freq_table
                add di,ax
                mov al,cs:[di]
                xor ah,ah
                push ax

                mov cl,bh
                call gus_stop_voice

                mov al,1
                out dx,al
                inc dx
                pop ax
                out dx,ax
                dec dx                            ; set frequency

gus_play_n_3:   mov di,OFFSET gus_mem_instr
                xor bh,bh
                shl bx,2
                add di,bx
                cmp bx,12                ; test if 303
                mov ebx,cs:[di]         ; EBX should hold now start of sample
                mov ecx,cs:[di+4]
                jne gus_play_303        ; from cmp bx,36 (test if 303)
                mov cl,cs:[dummy_gus_res]
                cmp cl,7
                jbe gus_play_11
                mov cl,15
                sub cl,cs:[dummy_gus_res]
gus_play_11:    and ecx,0ffh
                shl ecx,4
                cmp cs:[dummy_gus_cut],15
                jbe gus_play_22
                mov al,31
                sub al,cs:[dummy_gus_cut]
                add cl,al
                jmp gus_play_33
gus_play_22:    add cl,cs:[dummy_gus_cut]
gus_play_33:    shl ecx,12
                add ebx,ecx
                mov ecx,ebx
                add ecx,4096

gus_play_303:   dec ecx
                mov al,0ah
                out dx,al
                inc dx
                mov eax,ebx
                shr eax,7       ; high 16 bits of start
                out dx,ax
                dec dx
                mov al,0bh
                out dx,al
                inc dx
                mov eax,ebx
                and ax,127
                shl ax,8        ; low 7 bits of start (shl 8)
                out dx,ax
                dec dx
                mov al,2
                out dx,al
                inc dx 
                mov eax,ebx
                shr eax,7       ; high 16 bits of start
                out dx,ax
                dec dx
                mov al,3
                out dx,al
                inc dx
                mov eax,ebx
                and ax,127
                shl ax,8        ; low 7 bits of start (shl 8)
                out dx,ax
                dec dx
                mov al,4
                out dx,al
                inc dx
                mov eax,ecx
                shr eax,7       ; high 16 bits of end
                out dx,ax
                dec dx
                mov al,5
                out dx,al
                inc dx
                mov eax,ecx
                and ax,127
                shl ax,8        ; low 7 bits of start (shl 8)
                out dx,ax
                dec dx
                xor al,al
                out dx,al
                add dx,2
                xor al,al       ; mode 0=play once, mode 8=loop mode
                out dx,al

gus_play_end2:  popad
gus_play_end:   ret

;*************************
;*** stops voice CL (0-3)
;*************************
gus_stop_voice: pusha
                mov dx,cs:[gus_base]
                add dx,102h
                mov al,cl
                out dx,al
                inc dx
                mov cs:[gus_stop_dx_buf],dx
                mov al,80h
                out dx,al
                add dx,2
                in al,dx
                sub dx,2
                and al,0dfh
                or al,3
                mov cl,al
                xor al,al
                out dx,al
                add dx,2
                mov al,cl
                out dx,al
                call gus_delay
                sub dx,2
                xor al,al
                out dx,al
                add dx,2
                mov al,cl
                out dx,al
                popa
                mov dx,cs:[gus_stop_dx_buf]
                ret


text_sm_sm:     mov dl,3                ;************************
                mov ax,[first_free_seg]
                mov ds,ax
                add ax,65536/16*3
                mov es,ax
text_sm_start:  xor di,di
                xor si,si
                mov cx,16384
                rep movsd
                xor cx,cx               ; =65536
text_sm_2_inner:mov al,es:[si-320]
                add al,es:[si+320]
                add al,es:[si-1]
                add al,es:[si+1]
                shr al,2
                mov ds:[si],al
                inc si
                loop text_sm_2_inner
                mov ax,ds
                add ax,65536/16
                mov ds,ax
                dec dl
                jnz text_sm_start
                ret


song_pattern    dd 000006a68h,068000031h,068000068h,000680031h
                dd 000000068h,000006831h,06a006a6ah,000006831h
                dd 068000068h,06a000031h,06800006ah,06b000031h
                dd 000000068h,000680031h,000680068h,000006a31h

                dd 083e38393h,083e38393h,083e38393h,083e38393h
                dd 083e38393h,083e38393h,083e38393h,083e38393h
                dd 093e393a3h,093e393a3h,093e393a3h,093e39393h
                dd 083e38393h,083e38393h,083e38393h,083e38393h

                dd 000000083h,093a3ab93h,000bb00bbh,0aba3cbbbh
                dd 000930093h,093a3ab93h,0cbdbe383h,093a3abbbh
                dd 000000083h,093a3ab93h,000bb00bbh,0aba3cbbbh
                dd 000930093h,093a3ab93h,0a393bb83h,000000083h

                dd 0008a0000h,0008a0000h,0008a0000h,0008a0000h
                dd 0008a0000h,0008a0000h,0008a0000h,0008a0000h
                dd 0008a0000h,0008a0000h,0008a0000h,0008a0000h
                dd 0008a0000h,0008a0000h,0008a0000h,0008a0000h

chick_calc_pic  db 5

dummy_song_d    db 1    ; delay of one song row (is later set to 8=>130bpm)
dummy_song_pat  dw 63   ; position in pattern
dummy_s_mute    db 15   ; bit0=1->mute ch.0, etc.
pattern_muter   db 2,10,11,12,4,3,3,2

chicken_pal     db 63,63,60,63,63,50,0,0,0,50,50,50

gus_base        dw 210h         ; first possible adress of GUS

gus_freq_table  db 0,53,56,59,62,66,70,74,79,83,88,94
                db 99,105,112,118,125,133,141,149,158,167,177,188
                db 199,211,224,237,251
gus_cut_tab     db 0,2,5,8,11,14,17,21
                db 25,30,36,43,52,63,76,93

text_data       db 0,20,30,"MS2k-1",0
                db 0,40,70,"SquoQuo is back",0
                db 0,15,98,"presenting",0
                db 1,60,60,"Chicken",0
                db 1,90,90,"dance",0
                db 2,20,50,"2 B continued",0
                db 255                  ;**********must be at the end!!!

egg_data        dd 01000000h
                dd 03010000h
                dd 03030100h
                dd 03030100h
                dd 03030301h
                dd 03030301h
                dd 03030100h
                dd 01010000h

;*********** chicken phase walk 1/3
chicken_walk1:
db 23			; start in row 23
db 50,048h,0
db 49,041h,088h,042h,0
db 48,041h,08bh,041h,0
db 47,041h,08dh,041h,0
db 29,048h,009h,041h,08eh,041h,0
db 20,049h,088h,044h,005h,041h,08fh,041h,0
db 00,041h,010h,043h,095h,042h,002h,041h,090h,041h,0
db 00,042h,00ch,043h,09ah,041h,001h,041h,090h,041h,0
db 00,04eh,09eh,042h,090h,041h,0
db 00,041h,0adh,041h,089h,043h,083h,041h,0
db 00,041h,0aeh,041h,087h,045h,082h,041h,0
db 00,041h,0afh,041h,086h,045h,082h,041h,0
db 01,041h,0aeh,041h,087h,043h,082h,041h,0
db 01,041h,0afh,041h,08ah,041h,0
db 02,041h,0aeh,041h,089h,041h,0
db 02,041h,0aeh,041h,088h,041h,0
db 02,041h,0aeh,044h,084h,043h,0
db 03,041h,0ach,041h,004h,047h,0
db 03,041h,0ach,041h,009h,043h,0
db 04,041h,0abh,041h,00bh,042h,0
db 05,041h,0a9h,041h,0
db 06,041h,0a7h,041h,0
db 06,041h,0a7h,041h,0
db 07,041h,0a5h,041h,0
db 08,041h,0a3h,041h,0
db 09,042h,09fh,042h,0
db 11,041h,09dh,041h,0
db 12,041h,09ah,042h,0
db 13,042h,097h,041h,0
db 15,044h,085h,04eh,0
db 19,045h,002h,041h,001h,041h,0
db 25,042h,001h,041h,0
db 25,041h,002h,041h,0
db 24,042h,002h,041h,0
db 24,041h,003h,041h,0
db 23,042h,003h,042h,0
db 23,041h,005h,041h,0
db 23,041h,005h,041h,0
db 22,041h,006h,041h,0
db 22,041h,002h,041h,003h,042h,003h,041h,0
db 21,046h,002h,046h,0

;*********** chicken phase walk 2/3
chicken_walk2:
db 16				; start in row 16
db 48,045h,0
db 46,042h,085h,042h,0
db 45,041h,089h,041h,0
db 44,041h,08bh,041h,0
db 43,041h,08dh,041h,0
db 43,041h,08dh,041h,0
db 42,041h,089h,043h,082h,041h,0
db 42,041h,088h,045h,082h,041h,0
db 41,041h,089h,045h,082h,041h,0
db 41,041h,08ah,043h,083h,042h,0
db 41,041h,091h,043h,0
db 41,041h,090h,045h,0
db 20,056h,090h,043h,0
db 17,043h,095h,042h,08fh,041h,0
db 15,042h,09ah,041h,08eh,041h,0
db 11,044h,09dh,042h,08bh,041h,0
db 00,043h,005h,043h,0a3h,041h,089h,041h,0
db 00,041h,082h,045h,0a7h,041h,087h,041h,0
db 00,041h,0afh,043h,081h,043h,0
db 01,041h,0aeh,041h,002h,041h,0
db 01,041h,0afh,041h,0
db 02,041h,0aeh,041h,0
db 02,041h,0aeh,041h,0
db 03,041h,0adh,041h,0
db 04,041h,0ach,041h,0
db 05,041h,0abh,041h,0
db 06,041h,0aah,041h,0
db 06,041h,0aah,041h,0
db 07,041h,0a9h,041h,0
db 08,041h,0a7h,041h,0
db 09,041h,0a6h,041h,0
db 10,041h,0a4h,041h,0
db 11,041h,0a2h,041h,0
db 12,041h,09fh,042h,0
db 13,042h,09bh,042h,0
db 15,044h,093h,044h,0
db 19,053h,0
db 26,041h,002h,041h,0
db 26,041h,002h,042h,0
db 25,042h,003h,042h,0
db 25,041h,005h,041h,0
db 25,041h,005h,042h,0
db 25,041h,006h,042h,002h,041h,0
db 24,042h,007h,041h,002h,042h,0
db 24,041h,008h,041h,001h,042h,0
db 24,041h,008h,043h,0
db 23,042h,002h,041h,004h,042h,0
db 22,047h,0

;*********** chicken phase walk 3/3
chicken_walk3:
db 25		; start in row 25
db 00,042h,0
db 00,042h,0
db 00,043h,0
db 00,041h,082h,042h,0
db 00,041h,084h,041h,0
db 00,041h,085h,04bh,0
db 00,041h,090h,04eh,0
db 01,041h,09dh,048h,0
db 01,041h,0a5h,045h,0
db 01,041h,0aah,042h,0
db 01,041h,0ach,041h,0
db 02,041h,0ach,041h,0
db 02,041h,0ach,041h,0
db 03,041h,0abh,041h,0
db 04,041h,0aah,041h,001h,044h,0
db 05,041h,0a9h,042h,084h,043h,0
db 06,041h,0a8h,041h,088h,041h,0
db 06,041h,0a8h,041h,089h,041h,0
db 07,041h,0a7h,041h,08bh,041h,0
db 08,041h,0a6h,041h,08bh,041h,0
db 09,041h,0a5h,041h,08ch,041h,0
db 10,041h,0a3h,041h,08dh,041h,0
db 11,042h,0a0h,041h,08eh,041h,0
db 13,041h,09eh,041h,08fh,041h,0
db 14,041h,09ch,041h,090h,041h,0
db 15,041h,09ah,043h,088h,043h,084h,041h,0
db 16,043h,093h,044h,002h,041h,087h,045h,083h,041h,0
db 19,053h,006h,042h,086h,045h,082h,041h,0
db 25,041h,001h,041h,011h,041h,087h,043h,083h,041h,0
db 24,041h,002h,041h,012h,042h,08ah,041h,0
db 23,041h,003h,041h,013h,042h,086h,043h,0
db 22,041h,004h,041h,015h,046h,0
db 21,041h,005h,041h,016h,044h,0
db 20,041h,006h,041h,017h,043h,0
db 19,042h,006h,041h,017h,042h,0
db 17,043h,006h,042h,017h,042h,0
db 19,043h,004h,041h,019h,041h,0
db 20,042h,004h,041h,003h,042h,0
db 25,047h,0

;*********** chicken phase dance 1/2
chicken_dance1:
db 16    ; start in row 16
db 31,047h,0
db 29,042h,087h,042h,0
db 27,042h,08bh,041h,0
db 26,041h,08eh,041h,0
db 25,041h,090h,041h,0
db 24,041h,084h,043h,085h,043h,083h,041h,0
db 24,041h,083h,045h,083h,045h,082h,041h,0
db 23,041h,084h,045h,083h,045h,083h,041h,0
db 23,041h,085h,043h,085h,043h,084h,041h,0
db 23,041h,094h,041h,0
db 23,041h,088h,046h,086h,041h,0
db 23,041h,089h,045h,086h,041h,0
db 24,041h,088h,044h,086h,041h,0
db 24,041h,089h,042h,087h,041h,0
db 23,043h,088h,042h,086h,041h,0
db 20,043h,083h,042h,08dh,045h,0
db 18,042h,088h,042h,08ah,041h,085h,042h,0
db 17,041h,08ch,04ah,088h,042h,0
db 16,041h,0a1h,042h,0
db 15,041h,0a4h,041h,0
db 14,041h,0a6h,041h,0
db 13,041h,0a7h,041h,0
db 12,041h,0a9h,041h,0
db 12,041h,0a9h,041h,0
db 11,041h,0aah,041h,0
db 11,041h,083h,045h,098h,045h,086h,041h,0
db 10,041h,082h,042h,003h,041h,09ch,041h,001h,042h,084h,041h,0
db 09,041h,082h,041h,005h,041h,09ch,041h,003h,042h,083h,041h,0
db 09,041h,081h,041h,006h,041h,09ch,041h,005h,044h,0
db 09,042h,007h,041h,09ch,041h,008h,041h,0
db 18,041h,09ch,041h,0
db 19,041h,09bh,041h,0
db 20,041h,099h,041h,0
db 21,041h,098h,041h,0
db 22,041h,096h,041h,0
db 23,041h,095h,041h,0
db 24,042h,092h,041h,0
db 26,042h,08eh,042h,0
db 28,043h,087h,044h,0
db 29,041h,001h,047h,002h,041h,0
db 29,041h,00bh,041h,0
db 28,042h,00bh,041h,0
db 28,041h,00ch,042h,0
db 28,041h,00dh,041h,0
db 28,041h,00dh,041h,0
db 28,041h,00dh,041h,0
db 25,044h,00ch,043h,0
db 24,042h,001h,043h,00ah,043h,001h,041h,0

;*********** chicken phase dance 2/2
chicken_dance2:
db 16		; start in row 16
db 33,047h,0
db 31,042h,087h,042h,0
db 29,042h,08bh,041h,0
db 28,041h,08eh,041h,0
db 27,041h,090h,041h,0
db 26,041h,084h,043h,085h,043h,083h,041h,0
db 26,041h,083h,045h,083h,045h,082h,041h,0
db 25,041h,084h,045h,083h,045h,083h,041h,0
db 25,041h,085h,043h,085h,043h,084h,041h,0
db 25,041h,094h,041h,0
db 25,041h,088h,046h,086h,041h,0
db 25,041h,089h,045h,086h,041h,0
db 26,041h,088h,044h,086h,041h,0
db 26,041h,089h,042h,087h,041h,0
db 24,044h,088h,042h,086h,041h,0
db 21,043h,084h,042h,08dh,041h,0
db 19,042h,089h,042h,08ah,041h,0
db 17,042h,08dh,04ah,081h,044h,0
db 16,041h,09eh,042h,0
db 15,041h,0a1h,041h,0
db 15,041h,0a2h,041h,0
db 14,041h,0a4h,041h,0
db 14,041h,0a5h,041h,0
db 14,041h,085h,043h,09eh,041h,0
db 13,041h,084h,043h,0a0h,041h,0
db 13,041h,083h,041h,002h,041h,0a1h,041h,0
db 13,041h,082h,041h,003h,041h,098h,043h,087h,041h,0
db 13,041h,081h,041h,004h,041h,09ah,043h,085h,041h,0
db 13,042h,005h,041h,09ah,041h,002h,042h,083h,041h,0
db 13,041h,007h,041h,099h,041h,004h,042h,082h,041h,0
db 21,041h,099h,041h,006h,041h,081h,041h,0
db 22,041h,098h,041h,007h,042h,0
db 22,041h,097h,041h,0
db 23,041h,096h,041h,0
db 18,041h,005h,041h,094h,041h,0
db 18,042h,005h,041h,093h,041h,0
db 16,045h,005h,041h,091h,041h,0
db 19,04ah,08dh,042h,0
db 18,042h,008h,043h,087h,044h,0
db 18,041h,00ch,047h,002h,041h,0
db 40,041h,0
db 40,041h,0
db 40,041h,0
db 40,041h,0
db 40,041h,0
db 40,042h,0
db 39,044h,0
db 39,041h,001h,043h,0

dummy_303_c_d   db 0    ; delay for one step at cutoff (303)
dummy_303_r_d   db 0    ; delay for one step at resonance (303)

random_seed     dd 0
global_counter  dw 0    ; holds actual frame
pat_mute_pos    db 0
dummy_song_p    db 0    ; position in song
first_free_seg  dw 0
dummy_gus_cut   db 0    ; cutoff and resonance of 303 sample to play
dummy_gus_res   db 0    ; cut:0-31 (16-31: 31-c=>c) res:0-15 (8-15: 15-r=>r)
gus_cut         db 0
gus_res         db 0
gus_fil_303_dum dw 0
gus_play_voice  db 0
gus_mem_instr   dd 0,0,0,0,0,0 ;location of instruments on gus (start)
gus_mem_count   db 0
gus_mem_pointer dd 0
gus_stop_dx_buf dw 0
gus_env_h       dw 0            ; hold time in samples
gus_env_d       dw 0            ; decay time in samples
gus_env_sl      db 0            ; sustain level (0-127)
gus_env_st      dw 0            ; sustain time in samples
gus_env_r       dw 0            ; release time in samples
gus_index       dw 0


                end start
