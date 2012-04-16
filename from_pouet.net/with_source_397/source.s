;-----------------------------------------------------------------------------
;
;                            E L I T E G R O U P
;                             we are very good.
;
; World Domination Intro Sound System
; -> Basic synthesis system
;
; Written and (C) 1999 by The Artist Formerly Known As Doctor Roole
;
;-----------------------------------------------------------------------------

SECTION .code

; calling convention for synth modules (init as well as tick, is klar):

; on entry: esi = values ptr
;           ebp = workspace ptr
;           fpu = as many inputs as needed (max 8 :)
;           other regs as needed
; on exit:  sample val in ST(0), 0dB is +/- 1.0
;           esi, ebp preserved, rest corrupted


; middle C frequency is 523,251130601197269355699987046609 Hz
; at 352800 Hz sample freq and 32bit counter width, this is: 6370030

fcminfl	dd 0.00000000023283064365386962890625
fcpi	dd 3.14152

;------------------------------------------------------------------------------
; Module 1: Simple Oscillator (SID like) with tri, pulse and saw (plus mixed)
;           can be hardsynced to another oscillator (SO)
;
; additional regs: edi = workspace of refosc for sync
;
;------------------------------------------------------------------------------

; SO values
struc syvSO
  .freq	resd 1			; int: osc freq (32bit counter)
  .pw	resd 1                 ; int: pulse width (31bits)
  .flags	resd 1			; int: b0: tri, b1: saw, b2: pulse, b3: sync
  .size
endstruc

sySO_TRIANGLE	equ	1
sySO_SAW	equ	2
sySO_PULSE	equ	4
sySO_SYNC	equ	8

; SO workspace
struc sywSO
  .count	resd 1                  ; int: osc counter
  .lastrc       resd 1                  ; int: last refosc count (for osc sync)
  .temp         resd 1                  ; temp
  .size
endstruc

; consts
fci3            dd	3.0
fccents         dd	0.0003255208333333333333333333
fcobasefrq	dd	3185015.0

; SO startup
sySOinit	xor   	eax, eax
	mov   	[ebp + sywSO.count], eax
	ret

fcin8	dd	0.125

; SO run
sySOtick        fldz
	xor    ecx, ecx
	lea    ecx, [ecx + 8]
.mloop	push   ecx
	xor    edx, edx
	mov    ebx, [ebp + sywSO.count]
	test   byte [esi + syvSO.flags], sySO_SYNC
	jz    	.nosync
	mov    eax, [edi + sywSO.count]
	cmp    eax, [ebp + sywSO.lastrc]
	mov    [ebp + sywSO.lastrc], eax
	sbb    eax, eax
	and    ebx, eax
.nosync         push   ebx
	add    ebx, [esi + syvSO.freq]
	mov    [ebp + sywSO.count], ebx
	pop    ebx
	test   byte [esi + syvSO.flags], sySO_TRIANGLE
	jz     .notri
	mov    eax, ebx
	mov    ecx, ebx
	sar    eax, 31
	xor    ecx, eax
	shl    ecx, 1
	or     edx, ecx
.notri          test   byte [esi + syvSO.flags], sySO_SAW
	jz     .nosaw
	not    ebx
	or     edx, ebx
	not    ebx
.nosaw          test   byte [esi + syvSO.flags], sySO_PULSE
	jz     .nopls
	mov    eax, [esi + syvSO.pw]
	mov    ecx, eax
	sar    eax, 31
	xor    ecx, eax
	shl    ecx, 1
	cmp    ebx, ecx
	sbb    eax, eax
	or     edx, eax
.nopls          shr    edx, 9
	or     edx, 40000000h
                mov    [ebp + sywSO.temp], edx
	fld    dword [ebp + sywSO.temp]
	fsub   dword [fci3]
	faddp  st1, st0
	pop    ecx
	loop   .mloop
	fmul   dword [fcin8]
	ret


; function to set osc frequency to note (note val (256*semitones, 0=C-4) in eax)
; esi, ebp as usual

sySOsetnote	mov    [ebp + sywSO.temp], eax
	fild   dword [ebp + sywSO.temp]    	; <in>
	fmul   dword [fccents]			; <in'>
	fld1					; <1> <in'>
    	fld    st1				; <in'> <1> <in'>
    	fprem					; <frac(in')> <1> <in'>
    	f2xm1					; <2^frac(in')-1> <1> <in'>
    	faddp  st1,st0				; <2^frac(in')> <in'>
    	fscale					; <2^in'> <??>
    	fxch   st1				; <??> <2^in'>
    	fstp   st0				; <2^in'>
	fmul   dword [fcobasefrq]		; <of>
	fistp  dword [esi + syvSO.freq]        ; -
	ret


;------------------------------------------------------------------------------
; Module 2: White Noise Oscillator (no value struc needed)
;
;------------------------------------------------------------------------------

; WNO workspace
struc sywWNO
  .seed	resd 1 			; int: random seed
  .temp         resd 1
  .size
endstruc

; WNO init
syWNOinit
                ;rdtsc
	mov    eax, 12345678h
	mov    [ebp + sywWNO.seed], eax
	ret

; WNO tick
syWNOtick       mov    eax, [ebp + sywWNO.seed]
	imul   eax, 524281
  	add    eax, 3133731
  	mov    [ebp + sywWNO.seed],eax
  	and    eax, 007fffffh
	or     eax, 40000000h
	mov    [ebp + sywWNO.temp],eax
	fld    dword [ebp + sywWNO.temp]
	fsub   dword [fci3]
	ret





;------------------------------------------------------------------------------
; Module 4: 12dB/oct Simple resonant multi-mode Filter
;
; additional regs: st0 = input value
;
;------------------------------------------------------------------------------

; SF values
struc syvSF
  .cutoff       resd 1			; flt: cutoff    (0.0-1.0, linear, 1.0 is 88200Hz)
  .reso         resd 1 		; flt: resonance (1.0 = none - 0.0 = self oscillation)
  .flags 	resd 1			; int: b0=low out, b1=band out, b2=high out
  .size
endstruc

sySF_LOW	equ 1
sySF_BAND	equ 2
sySF_HIGH	equ 4
sySF_NOTCH      equ 1|4
sySF_ALL	equ 1|2|4

; SF workspace
struc sywSF
  .l	resd 1			; flt: lp buffer
  .b	resd 1			; flt: bp buffer
  .h	resd 1			; flt: hp buffer
  .size
endstruc

fcsffreq	dd     44100.0


; SF init
sySFinit        xor    eax, eax
	mov	ecx, sywSF.size
	mov	edi, ebp
	rep 	stosb
	ret

; SF run
sySFtick	xor    ecx, ecx
	lea    ecx, [ecx+4]
.flp	fld    st0					; <in> <in>
	fld    dword [ebp + sywSF.l]			; <l> <in> <in>
	fld    dword [ebp + sywSF.b]           	; <b> <l> <in> <in>
	fld    st0                             	; <b> <b> <l> <in> <in>
	fmul   dword [esi + syvSF.cutoff]      	; <b*f> <b> <l> <in> <in>
	faddp  st2, st0                        	; <b> <l'> <in> <in>
	fld    st0                             	; <b> <b> <l'> <in> <in>
	fmul   dword [esi + syvSF.reso]		; <b*r> <b> <l'> <in> <in>
	fxch   st2                             	; <l'> <b> <b*r> <in> <in>
	fst    dword [ebp + sywSF.l]
	fsubp  st3, st0                        	; <b> <b*r> <in-l> <in>
	fxch   st1                             	; <b*r> <b> <in-l> <in>
	fsubp  st2, st0 				; <b> <h'> <in>
	fxch   st1                             	; <h'> <b> <in>
	fst    dword [ebp + sywSF.h]
	fmul   dword [esi + syvSF.cutoff]		; <h*f> <b> <in>
	faddp  st1, st0                        	; <b'> <in>
	fstp   dword [ebp + sywSF.b]           	; <in>
	loop   .flp
	fstp   st0					; -
	fldz                                   	; <0>
	test   byte  [esi + syvSF.flags], sySF_LOW
	jz	.nooutl
	fadd   dword [ebp + sywSF.l]			; <..+l>
.nooutl	test	byte  [esi + syvSF.flags], sySF_BAND
	jz	.nooutb
	fadd   dword [ebp + sywSF.b]			; <..+b>
.nooutb	test	byte  [esi + syvSF.flags], sySF_HIGH
	jz	.noouth
	fadd 	dword [ebp + sywSF.h]			; <..+h>
.noouth         ret



;------------------------------------------------------------------------------
; Module 5: ADSR Envelope Generator
;
; additional regs: edx = gate
;
;------------------------------------------------------------------------------

; EG values
struc syvEG
  .arate	resd 1			; flt: attack rate (lin, incr/sample, max 1.0)
  .drate	resd 1			; flt: decay rate (exp, fact/sample)
  .slevel	resd 1			; flt: sustain level (0.0-1.0)
  .rrate	resd 1			; int: release rate (exp, fact/sample)
  .size
endstruc

syEG_GATE	equ 1

; EG workspace
struc sywEG
  .state	resd 1			; int: state (0:off, 1:att, 2:dec, 3:sus, 4:rel)
  .val          resd 1			; flt: output value
  .size
endstruc

syEG_STATE_OFF	equ 0
syEG_STATE_ATT	equ 1
syEG_STATE_DEC	equ 2
syEG_STATE_SUS	equ 3
syEG_STATE_REL	equ 4

; EG init
syEGinit	xor 	eax, eax
	mov 	[ebp + sywEG.state], eax
	mov 	[ebp + sywEG.val], eax
	ret

; EG tick
syEGtick        mov    eax, [ebp + sywEG.state]
	lea    eax, [.statetable + 4*eax]
	jmp    [eax]

.statetable     dd     .off, .attack, .decay, .sustain, .release

.off	fldz
	fst	dword [ebp + sywEG.val]
	test   dl, syEG_GATE
	jz     .end
	inc    dword [ebp + sywEG.state]
.end            ret

.attack	fld    dword [ebp + sywEG.val]
	fadd   dword [esi + syvEG.arate]
	fst    dword [ebp + sywEG.val]
	mov    eax, [ebp + sywEG.val]
	cmp    eax, 3f800000h
	jb     .noa2d
	fstp   st0
	fld1
.newst	fst    dword [ebp + sywEG.val]
	inc    dword [ebp + sywEG.state]
.noa2d          test   dl, syEG_GATE
	jnz    .end
	mov    byte [ebp + sywEG.state], syEG_STATE_REL
	ret

.decay	fld    dword [ebp + sywEG.val]
	fmul   dword [esi + syvEG.drate]
	fst    dword [ebp + sywEG.val]
	mov    eax,  [ebp + sywEG.val]
	cmp    eax,  [esi + syvEG.slevel]
	jg     .noa2d
	fstp   st0
	fld    dword [esi + syvEG.slevel]
	jmp    .newst

.sustain        fld 	dword [esi + syvEG.slevel]
	fst    dword [ebp + sywEG.val]
	jmp    .noa2d

.release	fld    dword [ebp + sywEG.val]
	fmul   dword [esi + syvEG.rrate]
	fst    dword [ebp + sywEG.val]
	mov    eax,  [ebp + sywEG.val]
	cmp    eax,  [fcminfl]
	jg     .nor2o
	fstp   st0
	fldz
	mov    byte [ebp + sywEG.state], syEG_STATE_OFF
.nor2o          test   dl, syEG_GATE
	jz	.end
	mov    byte [ebp + sywEG.state], syEG_STATE_ATT
	ret




;------------------------------------------------------------------------------
; Module 6: Sine Oscillator
;
;------------------------------------------------------------------------------

; SIO values
struc syvSIO
  .freq         resd 1
  .size
endstruc

; SIO workspace
struc sywSIO
  .a	resd 1			; flt: buffer a
  .b	resd 1			; flt: buffer b
  .size
endstruc


; SIO init
sySIOinit       fld1
	fstp   dword [ebp + sywSIO.a]
	fldz
	fstp   dword [ebp + sywSIO.b]
	ret

; SIO run
sySIOtick       fld    dword [ebp + sywSIO.b] 		; <b>
	xor    ecx, ecx
	lea    ecx, [ecx+8]
.slp	fld    dword [ebp + sywSIO.a] 		; <a> <b>
	fld    st0                    		; <a> <a> <b>
	fld 	st2				; <b> <a> <a> <b>
	fmul   dword [esi + syvSIO.freq]	; <b*f> <a> <a> <b>
	faddp  st1, st0			; <a'> <a> <b>
	fxch   st1				; <a> <a'> <b>
	fmul   dword [esi + syvSIO.freq]	; <a*f> <a'> <b>
	fxch   st1                             ; <a'> <a*f> <b>
	fstp   dword [ebp + sywSIO.a]          ; <a*f> <b>
	fsubp  st1, st0                        ; <b'>
	fst    dword [ebp + sywSIO.b]		; <b'>
	loop   .slp
	ret



;------------------------------------------------------------------------------
; Module 7: Distorter, because ATAN rules
;
; additional regs: st0 = input
;
;------------------------------------------------------------------------------

; dist values
struc syvDIS
  .drive	resd 1			; drive (0=off, the higher the meaner)
  .size
endstruc

; dist workspace
struc sywDIS
  .pregain      resd 1			; pre-atan gain
  .postgain	resd 1			; post-atan gain
  .size
endstruc

fcdrive	dd   1.0		; drive const

; dist init
syDISinit	fld1					; <1>
	fld	dword [esi + syvDIS.drive] 	; <dr> <1>
	fmul	dword [fcdrive]            	; <prg> <1>
	fst    dword [ebp + sywDIS.pregain]
	fld1					; <1> <prg> <1>
	fpatan					; <1/pog> <1>
	fdivp  st1, st0			; <pog>
	fstp   dword [ebp + sywDIS.postgain]	; -
	ret

; dist tick
syDIStick       fmul   dword [ebp + sywDIS.pregain]	; <in'>
	fld1					; <1> <in'>
	fpatan					; <out'>
	fmul   dword [ebp + sywDIS.postgain]	; <out>
	ret





;------------------------------------------------------------------------------
; Module 8: LFO wrapper for SO
; (SO, noise generator, envmode and S&H mode)
;
; additional regs: edx = gate
;
;------------------------------------------------------------------------------

; LFO vals
struc syvLFO
  .osc	resb syvSO.size	; SO osc
  .size
endstruc

; LFO workspace
struc sywLFO
  .osc	resb sywSO.size	; SO wspace
  .nse	resb sywWNO.size	; WNO wspace
  .lval	resd 1			; last SO count value (overrun detection)
  .lgate	resd 1			; last gate value
  .smval	resd 1			; noise S&H value
  .size
endstruc



; LFO flags
syLFO_TRIANGLE	equ sySO_TRIANGLE
syLFO_SAW	equ sySO_SAW
syLFO_PULSE	equ sySO_PULSE
syLFO_FREE	equ 32
syLFO_SH   	equ 64
syLFO_ENV	equ 128



; LFO init
syLFOinit	call	sySOinit
	lea    ebp, [ebp + sywLFO.nse]
	call	syWNOinit
	call   syWNOtick
	lea	ebp, [ebp - sywLFO.nse]
	fstp   dword [ebp + sywLFO.smval]
	mov    eax, [ebp + sywLFO.osc + sywSO.count]
	mov    [ebp + sywLFO.lval], eax
	xor	eax, eax
	mov    [ebp + sywLFO.lgate], eax
	ret

fc0p5	dd	0.5

; LFO tick
syLFOtick       push   edx
	cmp    edx, [ebp + sywLFO.lgate]
	mov	[ebp + sywLFO.lgate], edx
	jz	.nogchange
	or     edx, edx
	jz     .nogchange
	test   byte [esi + syvLFO.osc + syvSO.flags], syLFO_FREE
	jnz    .nogchange

	xor    eax, eax
	mov    [ebp + sywSO.count], eax
	mov    [ebp + sywLFO.lval], eax
	lea    ebp, [ebp + sywLFO.nse]
	call   syWNOtick
	lea    ebp, [ebp - sywLFO.nse]
	fstp   dword [ebp + sywLFO.smval]                      ; <o>

.nogchange	call  	sySOtick					; <o>
	mov	eax, [ebp + sywLFO.osc + sywSO.count]
	cmp	eax, [ebp + sywLFO.lval]
	mov	[ebp + sywLFO.lval], eax
	jae    .noovr
	test   byte [esi + syvLFO.osc + syvSO.flags], syLFO_ENV
	jz     .noenv
	xor    eax, eax
	not    eax
	mov    [ebp + sywLFO.osc + sywSO.count], eax
	mov	[ebp + sywLFO.lval], eax
	jmp    .noovr
.noenv	lea    ebp, [ebp + sywLFO.nse]
	call	syWNOtick					; <n> <o>
	lea	ebp, [ebp - sywLFO.nse]
	fstp   dword [ebp + sywLFO.smval]                      ; <o>
.noovr          test   byte [esi + syvLFO.osc + syvSO.flags], syLFO_SH
	jz	.nosh
	fstp   st0						; -
	fld    dword [ebp + sywLFO.smval]                      ; <n>
.nosh	fld1                   				; <1> <out>
	faddp  st1, st0					; <out-1>
	fmul   dword [fc0p5]					; <out'>
	pop    edx
	ret



;------------------------------------------------------------------------------
; Module 9: unpacker/VCA/24dB band pass for encoded vocoder speech
;
; additional regs: st0 = input value
;
;------------------------------------------------------------------------------

; SB values
struc syvSB
  .sdata	resd 1 			; ptr: packed spline data
  .frlen	resd 1				; int: length of frame in samples
  .freq         resd 1				; flt: band pass frequency
  .size
endstruc

; SB workspace
struc sywSB
  .lpfv	resb syvSF.size		; filter 1 values
  .hpfv	resb syvSF.size		; filter 2 values
  .lpfw	resb sywSF.size		; f1 workspace
  .hpfw	resb sywSF.size		; f2 workspace
  .segc	resd 1				; int: segment counter
  .segp	resd 1				; ptr: current segment
  .segl	resd 1				; int: remaining segment length
  .pts	resd 4				; flt: spline points
  .x	resd 1				; flt: spline x
  .isegl        resd 1				; flt: 1 / seg length
  .ampl	resd 1				; flt: amplification
  .size
endstruc

fcin256	dd 0.00390625
fcin65536	dd 0.0000152587890625

; SB init
sySBinit        xor	eax, eax
	mov	ecx, sywSB.size
	mov	edi, ebp
	rep    stosb
	mov    edi, [esi + syvSB.sdata]
	movzx  eax, word [edi]
	mov    [ebp + sywSB.segc], eax
	mov    [ebp + sywSB.segp], edi
	movzx	eax, word [edi+2]
	mov    [ebp + sywSB.ampl], eax
	fild   dword [ebp + sywSB.ampl]
	fmul   dword [fcin65536]
	fstp   dword [ebp + sywSB.ampl]
	fld    dword [esi + syvSB.freq]
	fst    dword [ebp + sywSB.lpfv + syvSF.cutoff]
	fstp   dword [ebp + sywSB.hpfv + syvSF.cutoff]
	fld1
	fst    dword [ebp + sywSB.lpfv + syvSF.reso]
	fstp   dword [ebp + sywSB.hpfv + syvSF.reso]
	mov	eax, sySF_BAND
	mov    [ebp + sywSB.lpfv + syvSF.flags], eax
	mov    [ebp + sywSB.hpfv + syvSF.flags], eax
	push   esi
	push   ebp
	lea    esi, [ebp + sywSB.lpfv]
	lea    ebp, [ebp + sywSB.lpfw]
	call   sySFinit
	lea    esi, [esi + syvSF.size]
	lea    ebp, [ebp + sywSF.size]
	call   sySFinit
	pop	ebp
	pop	esi
	ret

fcsbp3x2
fcsbp2x1
fcsbp0x3	dd -4.5
fcsbp0x2
fcsbp1x1	dd 9.0
fcsbp0x1	dd -5.5
fcsbp1x3	dd 13.5
fcsbp1x2        dd -22.5
fcsbp2x3	dd -13.5
fcsbp2x2	dd 18.0
fcsbp3x3	dd 4.5


;  return p0*(-4.5*x3+9*x2-5.5*x+1)+
;         p1*(13.5*x3-22.5*x2+9*x)+
;         p2*(-13.5*x3+18*x2-4.5*x)+
;         p3*(4.5*x3-4.5*x2+x);



; SB tick
sySBtick        push   esi				; filter input signal
	push   ebp 				; <in>
	lea    esi, [ebp + sywSB.lpfv]
	lea    ebp, [ebp + sywSB.lpfw]
	call   sySFtick			; <inf1>
	lea    esi, [esi + syvSF.size]
	lea    ebp, [ebp + sywSF.size]
	call   sySFtick			; <inf2>
	pop	ebp
	pop	esi
	mov    eax, [ebp + sywSB.segc]		; process packed spline data
	or	eax, eax
	jnz    .dospl
	jmp 	.splend
.dospl	mov    eax, [ebp + sywSB.segl]
	or     eax, eax
	jnz	.nonewseg  			; new spline segment?
	mov    edi, [ebp + sywSB.segp]
	lea	edi, [edi + 4]
	mov    [ebp + sywSB.segp], edi
	movzx  ebx, byte [edi + 3]		; length
	imul   ebx, [esi + syvSB.frlen]
	mov    [ebp + sywSB.segl], ebx
	fld1					; <1> <inf2>
	fild   dword [ebp + sywSB.segl]	; <len> <1> <inf2>
	fdivp	st1, st0			; <ilen> <inf2>
	fstp   dword [ebp + sywSB.isegl]
	movzx  ebx, byte [edi]
	mov    [ebp + sywSB.pts], ebx
	movzx  ebx, byte [edi+1]
	mov    [ebp + sywSB.pts+4], ebx
	movzx  ebx, byte [edi+2]
	mov    [ebp + sywSB.pts+8], ebx
	movzx  ebx, byte [edi+4]
	mov    [ebp + sywSB.pts+12], ebx
	lea    ecx, [eax + 4]
.fcloop	fild   dword [ebp + sywSB.pts + 4* ecx - 4]
	fmul   dword [fcin256]
	fstp   dword [ebp + sywSB.pts + 4* ecx - 4]
	loop   .fcloop
	fldz
	fstp   dword [ebp + sywSB.x]
	dec    dword [ebp + sywSB.segc]
.nonewseg       fld    dword [ebp + sywSB.x]		; <x> <inf2>
	fld    st0                  		; <x> <x> <inf2>
	fmul	dword [ebp + sywSB.x]		; <x2> <x> <inf2>
	fld    st0                  		; <x2> <x2> <x> <inf2>
	fmul	dword [ebp + sywSB.x]		; <x3> <x2> <x> <inf2>
	fld    st0				; <x3> <x3> <x2> <x> <inf2>
	fmul   dword [fcsbp0x3]		; <p0x3> <x3> <x2> <x> <inf2>
	fld    st2				; <x2> <p0x3> <x3> <x2> <x> <inf2>
	fmul   dword [fcsbp0x2]		; <p0x2> <p0x3> <x3> <x2> <x> <inf2>
	faddp  st1, st0			; <p0x23> <x3> <x2> <x> <inf2>
	fld    st3				; <x> <p0x23> <x3> <x2> <x> <inf2>
	fmul   dword [fcsbp0x1]		; <p0x> <p0x23> <x3> <x2> <x> <inf2>
	faddp  st1, st0			; <p0x123> <x3> <x2> <x> <inf2>
	fld1					; <1> <p0x123> <x3> <x2> <x> <inf2>
	faddp  st1, st0			; <p0x0123> <x3> <x2> <x> <inf2>
	fmul   dword [ebp + sywSB.pts]		; <p0> <x3> <x2> <x> <inf2>
	fld    st1				; <x3> <p0> <x3> <x2> <x> <inf2>
	fmul   dword [fcsbp1x3]		; <p1x3> <p0> <x3> <x2> <x> <inf2>
	fld    st3				; <x2> <p1x3> <p0> <x3> <x2> <x> <inf2>
	fmul   dword [fcsbp1x2]		; <p1x2> <p1x3> <p0> <x3> <x2> <x> <inf2>
	faddp  st1, st0			; <p1x23> <p0> <x3> <x2> <x> <inf2>
	fld    st4				; <x> <p1x23> <p0> <x3> <x2> <x> <inf2>
	fmul   dword [fcsbp1x1]		; <p1x> <p1x23> <p0> <x3> <x2> <x> <inf2>
	faddp  st1, st0			; <p1x123> <p0> <x3> <x2> <x> <inf2>
	fmul   dword [ebp + sywSB.pts+4]	; <p1> <p0> <x3> <x2> <x> <inf2>
	faddp  st1, st0			; <p01> <x3> <x2> <x> <inf2>
	fld    st1				; <x3> <p01> <x3> <x2> <x> <inf2>
	fmul   dword [fcsbp2x3]		; <p2x3> <p01> <x3> <x2> <x> <inf2>
	fld    st3				; <x2> <p2x3> <p01> <x3> <x2> <x> <inf2>
	fmul   dword [fcsbp2x2]		; <p2x2> <p2x3> <p01> <x3> <x2> <x> <inf2>
	faddp  st1, st0			; <p2x23> <p01> <x3> <x2> <x> <inf2>
	fld    st4				; <x> <p2x23> <p01> <x3> <x2> <x> <inf2>
	fmul   dword [fcsbp2x1]		; <p2x> <p2x23> <p01> <x3> <x2> <x> <inf2>
	faddp  st1, st0			; <p2x123> <p01> <x3> <x2> <x> <inf2>
	fmul   dword [ebp + sywSB.pts+8]	; <p2> <p01> <x3> <x2> <x> <inf2>
	faddp  st1, st0			; <p012> <x3> <x2> <x> <inf2>
	fxch   st1				; <x3> <p012> <x2> <x> <inf2>
	fmul   dword [fcsbp3x3]		; <p3x3> <p012> <x2> <x> <inf2>
	fxch   st2				; <x2> <p012> <p3x3> <x> <inf2>
	fmul   dword [fcsbp3x2]		; <p3x2> <p012> <p3x3> <x> <inf2>
	faddp  st2, st0			; <p012> <p3x23> <x> <inf2>
	fxch   st2				; <x> <p3x23> <p012> <inf2>
	fld    st0				; <x> <x> <p3x23> <p012> <inf2>
	faddp  st2, st0			; <x> <p3x123> <p012> <inf2>
	fxch   st1				; <p3x123> <x> <p012> <inf2>
	fmul   dword [ebp + sywSB.pts+12]	; <p3> <x> <p012> <inf2>
	faddp  st2, st0			; <x> <p0123> <inf2>
	fadd   dword [ebp + sywSB.isegl]	; <x'> <p0123> <inf2>
	fstp	dword [ebp + sywSB.x]		; <p0123> <inf2>
	jmp 	.doneunp
.splend         fld    dword [ebp + sywSB.pts]		; <p0> <inf2>
.doneunp	dec	dword [ebp + sywSB.segl]
	fmul	dword [ebp + sywSB.ampl]	; <ficken> <inf2>
	fmulp	st1, st0			; <out>
	ret








;------------------------------------------------------------------------------
;
; Rendering dingensda
;
; cc: esi = ptr to synth data
;     ebp = ptr to synth workspace
;     eax = ptr to synth init call
;     ebx = ptr to synth render call
;     ecx = number of samples to render
;     edi = ptr to dest buffer
;
; on exit: all regs preserved
;          16-bit signed sample in output
;
;------------------------------------------------------------------------------


fci32768        dd 32768.0

synthRender	pushad
	pushad
	call	eax
	popad
.srloop	xor    eax, eax
	mov    [sbuf], eax
	push 	ecx
	push   edi

	push   ebx
	call   ebx
	pop    ebx
	fmul   dword [fci32768]

	fistp  dword [sbuf]
	mov    eax,  [sbuf]

	xor    ecx, ecx
    	mov    cx, 32600 ;doj

    	cmp    eax, ecx  ;doj
    	jng    .nocmax   ;doj
    	mov    eax, ecx  ;doj
.nocmax    	neg ecx   ;doj
    	cmp    eax, ecx  ;doj
    	jnl    .clampend ;doj
    	mov    eax, ecx  ;doj

.clampend	pop    edi
	pop    ecx

	stosw

	loop   .srloop
	popad
	ret




;--------------------------------------------------------------------------------
; Step sequencer
;
;--------------------------------------------------------------------------------

struc syvSEQ
  .tempo	resd 1			; int: tempo in bpm
  .groove	resd 1			; int: groove in %
  .basenote     resd 1			; int: base note/detune  (0=C-4, 256=100 cents)
  .length       resd 1                 ; int: note length in %
  .steps        resd 1                 ; int: # of steps
  .pattern      resd 1                 ; ptr: pattern data
  .portaspd     resd 1                 ; int: portamento delay (0=off)
  .size
endstruc

struc sywSEQ
  .outnote      resd 1                 ; int: 256*note (0 is c=4, 256=100 cents)
  .outgate      resd 1                 ; int: gate out (bit0)
  .outvel	resd 1			; flt: velocity (0.0-1.0)
  .sl1	resd 1			; int: step length 1 (smpls)
  .nl1	resd 1			; int: note length 1 (smpls)
  .sl2	resd 1			; int: step length 2 (smpls)
  .nl2	resd 1			; int: note length 2 (smpls)
  .step         resd 1                 ; int: next step # (0 based)
  .state        resd 1                 ; int: next state
  .smprem       resd 1                 ; int: smpls remaining till next event
  .destnote     resd 1			; int: dest note for porta
  .ptcount	resd 1			; int: delay count for porta
  .temp	resd 1			; temp
  .size
endstruc


sySEQinit	xor 	eax, eax
	mov	edi, ebp
	mov 	ecx, sywSEQ.size
	rep 	stosb
	; time calculation
	mov 	eax, 1323000
	mov 	ebx, [esi + syvSEQ.tempo]
	xor    edx, edx
	idiv	ebx
	mov    edi, eax
	mov    ecx, [esi + syvSEQ.groove]
	add    cl, 100
	mov    ebx, 200
	imul   ecx
	idiv   ebx
	mov    [ebp + sywSEQ.sl1], eax
	shr    ebx, 1
	imul   dword [esi + syvSEQ.length]
	idiv   ebx
	mov    [ebp + sywSEQ.nl1], eax
	mov    eax, edi
	mov    cl, 100
	sub    cl, byte [esi + syvSEQ.groove]
	shl    ebx, 1
	imul   ecx
	idiv   ebx
	mov    [ebp + sywSEQ.sl2], eax
	shr    ebx, 1
	imul   dword [esi + syvSEQ.length]
	idiv   ebx
	mov    [ebp + sywSEQ.nl2], eax
	ret


sySEQtick	mov    eax, [ebp + sywSEQ.outnote] 		; process porta
	cmp    eax, [ebp + sywSEQ.destnote]
	je	.noporta
	mov    ebx, [ebp + sywSEQ.ptcount]
	dec    ebx
	jns    .nochnichporta
	sbb    ebx, ebx     				; zuhoch: 255 zutief: 1
	not    ebx
	or     bl, 1
	add    eax, ebx
	mov    [ebp + sywSEQ.outnote], eax
	mov    ebx, [esi + syvSEQ.portaspd]
	dec    ebx
.nochnichporta	mov    [ebp + sywSEQ.ptcount], ebx
.noporta        dec    dword [ebp + sywSEQ.smprem]             ; process sequence
	js     .newtick
	ret
.newtick        mov    eax, [ebp + sywSEQ.state]
	or	eax, eax
	jz      .newnote
.keyoff         xor    eax, eax				; key off
	mov    [ebp + sywSEQ.outgate], eax
	mov    [ebp + sywSEQ.state], eax
	test   byte [ebp + sywSEQ.step], 1
	jnz    .keyoff2
	mov    eax, [ebp + sywSEQ.sl1]
	sub    eax, [ebp + sywSEQ.nl1]
	jmp    .keyoffe
.keyoff2	mov    eax, [ebp + sywSEQ.sl2]
	sub    eax, [ebp + sywSEQ.nl2]
.keyoffe	mov    [ebp + sywSEQ.smprem], eax
	ret
.newnote        mov    edi, [esi + syvSEQ.pattern]		; get new note
	mov    ecx, [ebp + sywSEQ.step]
	movsx  eax, byte [edi + 2*ecx]
	movzx  ebx, byte [edi + 2*ecx + 1]
	cmp    al,  80h				; pause?
	je	.pause
	shl    eax, 8
	add	eax, [esi + syvSEQ.basenote]            ; set note
	mov	[ebp + sywSEQ.destnote], eax
	mov    byte  [ebp + sywSEQ.outgate], 1		; set gate
	test   bl,  80h				; slide?
	jz     .noslide
	mov    edx, [esi + syvSEQ.portaspd]
	or     edx, edx
	jnz    .doslide
.noslide	mov 	[ebp + sywSEQ.outnote], eax
.doslide        test   bl, 40h					; legato?
	jz	.nolegato
	test   byte  [ebp + sywSEQ.step], 1
	jnz    .legato2
	mov    edx, [ebp + sywSEQ.sl1]
	jmp    .legend
.legato2	mov    edx, [ebp + sywSEQ.sl2]
	jmp    .legend
.nolegato	inc    dword [ebp + sywSEQ.state]
	test   byte  [ebp + sywSEQ.step], 1
	jnz    .noleg2
	mov    edx, [ebp + sywSEQ.nl1]
	jmp    .legend
.noleg2	mov    edx, [ebp + sywSEQ.nl2]
.legend         mov    [ebp + sywSEQ.smprem], edx
	and    bl, 3fh					; velocity
	shl    ebx, 17
	or     ebx, 3f800000h
	mov    [ebp + sywSEQ.temp], ebx
	fld    dword [ebp + sywSEQ.temp]
	fld1
	fsubp	st1, st0
	fstp   dword [ebp + sywSEQ.outvel]
	inc    ecx					; next step
	cmp    ecx,  [esi + syvSEQ.steps]
	sbb    eax,  eax
	and    ecx,  eax
	mov    [ebp + sywSEQ.step], ecx
	ret
.pause          xor    eax, eax				; do pause
	mov    [ebp + sywSEQ.outgate], eax
	test   byte  [ebp + sywSEQ.step], 1
	jnz    .pause2
	mov    edx, [ebp + sywSEQ.sl1]
	jmp    .legend
.pause2	mov    edx, [ebp + sywSEQ.sl2]
	jmp    .legend




; pattern format
; bytes note, vel  ...  note unsigned (128=pause), vel 0-127, b6=legato, b7=slide to



;--------------------------------------------------------------------------------
; THE SPEECH SYNTHESIS
; ok, in fact, it's an 8band vocoder which is controlled by packed spline
; data from my '1337 voice encoder
;
;--------------------------------------------------------------------------------


; vocoder values
struc syvVOC
  .data	resd 1			; ptr: packed data
  .speed	resd 1			; flt: output speed
  .size
endstruc

; vocoder workspace
struc sywVOC
  .bandsv	resb 8*syvSB.size
  .bandsw	resb 8*sywSB.size
  .wno	resb sywWNO.size
  .size
endstruc

fcvfreqs	dd 10000.0, 6070.0, 4100.0, 1950.0, 900.0, 410.0, 190.0, 90.0


syVOCinit       xor 	eax, eax
	mov 	ebx, [esi + syvVOC.data]
	fild   dword [ebx]
	fld1
	fld    dword [esi + syvVOC.speed]
	fdivp  st1, st0
	fmulp  st1, st0
	mov 	edx, [ebx]
	add    ebx, 4
	lea 	edi, [ebp + sywVOC.bandsv]
	lea 	ecx, [eax + 8]
.setuploop	fld 	dword [fcvfreqs + 4*ecx - 4]
	fdiv   dword [fcsffreq]
	fstp   dword [edi + syvSB.freq]

	fist 	dword [edi + syvSB.frlen]

	mov    [edi + syvSB.sdata], ebx
	movzx  eax, word [ebx]
	lea    ebx, [ebx + eax*4 + 4]
	lea    edi, [edi + syvSB.size]
	loop   .setuploop
	fstp   st0
	push   esi
	push   ebp
	lea    esi, [ebp + sywVOC.bandsv]
	lea 	ebp, [ebp + sywVOC.bandsw]
	lea    ecx, [ecx + 8]
.initloop       push   ecx
	call 	sySBinit
	pop    ecx
	lea    esi, [esi + syvSB.size]
	lea	ebp, [ebp + sywSB.size]
	loop   .initloop
	call   syWNOinit
	pop	ebp
	pop 	esi
	ret

fc0p1	dd  	0.07

syVOCtick       xor	eax, eax			; <in>
	fstp	dword [syVOCtempi]		; -
	fldz					; <0>
	fstp	dword [syVOCtemps]		; -
	push	esi
	push	ebp
	lea    ecx, [eax + 7]
	lea    esi, [ebp + sywVOC.bandsv]
	lea 	ebp, [ebp + sywVOC.bandsw]
.doloop         push   ecx
	fld    dword [syVOCtempi]		; <in>
	call   sySBtick			; <bout>
	fadd   dword [syVOCtemps]		; <bsum>
	fstp	dword [syVOCtemps]		; -
	pop 	ecx
	lea    esi, [esi + syvSB.size]
	lea	ebp, [ebp + sywSB.size]
	loop   .doloop
	fld    dword [syVOCtempi]		; <in>
	lea	ebp, [ebp + sywSB.size]
	call   syWNOtick			; <nse> <in>
	lea	ebp, [ebp - sywSB.size]
	fmul   dword [fc0p1]			; <nse'> <in>
	faddp	st1, st0			; <in'>
	call   sySBtick			; <bout>
	fadd   dword [syVOCtemps]		; <bsum>
	fstp	dword [syVOCtemps]		; -
	pop    ebp
	pop    esi
	fld    dword [syVOCtemps]
	ret











;--------------------------------------------------------------------------------
; erste testsynthese (mit voc)
;--------------------------------------------------------------------------------

struc syn1v
  .seq	resb syvSEQ.size		; sequencer
  .env1	resb syvEG.size		; amp env
  .osc1	resb syvSO.size                ; oscillator
  .voc1	resb syvVOC.size		; vocoder
  .gain	resd 1				; master gain
  .size
endstruc

struc syn1w
  .seq	resb sywSEQ.size
  .env1         resb sywEG.size
  .osc1	resb sywSO.size
  .voc1	resb sywVOC.size
  .temp	resd 1
  .size
endstruc

syn1init        push 	ebp
	push 	esi
	call   sySEQinit
	lea  	esi, [esi + syn1v.env1 - syn1v.seq]
	lea  	ebp, [ebp + syn1w.env1 - syn1w.seq]
	call 	syEGinit
	lea  	esi, [esi + syn1v.osc1 - syn1v.env1]
	lea  	ebp, [ebp + syn1w.osc1 - syn1w.env1]
	call 	sySOinit
	lea  	esi, [esi + syn1v.voc1 - syn1v.osc1]
	lea  	ebp, [ebp + syn1w.voc1 - syn1w.osc1]
	call   syVOCinit
	pop 	esi
	pop    ebp
	ret

syn1tick	push 	ebp
	push 	esi
	call   sySEQtick
	mov    edx, [ebp + sywSEQ.outgate]
	lea  	esi, [esi + syn1v.env1 - syn1v.seq]
	lea  	ebp, [ebp + syn1w.env1 - syn1w.seq]
	call   syEGtick
	fmul   dword [ebp + syn1w.seq - syn1w.env1 + sywSEQ.outvel]
	fstp   dword [ebp + syn1w.temp - syn1w.env1]
	lea  	esi,  [esi + syn1v.osc1 - syn1v.env1]
	lea  	ebp,  [ebp + syn1w.osc1 - syn1w.env1]
	mov    eax,  [ebp + syn1w.seq - syn1w.osc1 + sywSEQ.outnote]
	call   sySOsetnote
	call 	sySOtick
	lea  	esi,  [esi + syn1v.voc1 - syn1v.osc1]
	lea  	ebp,  [ebp + syn1w.voc1 - syn1w.osc1]
	call 	syVOCtick
	fmul   dword [ebp + syn1w.temp - syn1w.voc1]
	fmul   dword [esi + syn1v.gain - syn1v.voc1]
	pop 	esi
	pop    ebp
	ret










;--------------------------------------------------------------------------------
;  Extreme 909 synthesis (two sine oscs, one noise gen, some decays and dist)
;--------------------------------------------------------------------------------

; 909 synth values
struc syv909
  .basefrq	resd 1			; flt: osc base frequency
  .f2offs	resd 1			; flt: osc2 freq offset (env? base?)
  .penvamnt     resd 1			; flt: pitch env amount
  .penvdecay	resd 1			; flt: pitch env decay
  .venvdecay	resd 1			; flt: osc vol env decay
  .noisevol	resd 1			; flt: noise vol
  .nenvdecay    resd 1			; flt: noise env decay
  .dist         resb syvDIS.size	; distorter values
  .gain 	resd 1			; master gain
  .size
endstruc

; 909 synth workspace
struc syw909
  .penvval	resd 1			; p env buffer
  .venvval	resd 1			; v env buffer
  .nenvval	resd 1			; n env buffer
  .osc1v        resb syvSIO.size	; osc1 values
  .osc2v	resb syvSIO.size	; osc2 values
  .osc1w        resb sywSIO.size	; osc1 workspace
  .osc2w	resb sywSIO.size	; osc2 workspace
  .wno	resb sywWNO.size	; noise workspace
  .dist	resb sywDIS.size	; dist workspace
  .size
endstruc

; 909 synth init
sy909init       fld	dword [esi + syv909.penvamnt]
	fstp   dword [ebp + syw909.penvval]
	fld 	dword [esi + syv909.noisevol]
	fstp   dword [ebp + syw909.nenvval]
	fld1
	fstp   dword [ebp + syw909.venvval]
	push   ebp
	push   esi
	lea    esi, [esi + syv909.dist]
	lea 	ebp, [ebp + syw909.dist]
	call   syDISinit
	lea    esi, [ebp + syw909.osc1v - syw909.dist]
	lea    ebp, [ebp + syw909.osc1w - syw909.dist]
	call   sySIOinit
	lea    ebp, [ebp + syw909.osc2w - syw909.osc1w]
	lea    esi, [esi + syw909.osc2v - syw909.osc1v]
	call   sySIOinit
	lea    ebp, [ebp + syw909.wno - syw909.osc2w]
	call   syWNOinit
	pop    esi
	pop    ebp
	ret

; 909 synth tick
sy909tick       fld    dword [esi + syv909.basefrq]			; <bf>
	fld    dword [ebp + syw909.penvval]			; <pev> <bf>
	fld    st0						; <pev> <pev> <bf>
	fadd   st0, st2					; <f1> <pev> <bf>
	fstp   dword [ebp + syw909.osc1v + syvSIO.freq]	; <pev> <bf>
	fld    st0                                             ; <pev> <pev> <bf>
	fmul   dword [esi + syv909.penvdecay]			; <pev'> <pev> <bf>
	fxch   st1						; <pev> <pev'> <bf>
	fmul   dword [esi + syv909.f2offs]			; <pev2> <pev'> <bf>
	faddp  st2, st0 					; <pev'> <f2>
	fstp   dword [ebp + syw909.penvval]			; <f2>
	fstp   dword [ebp + syw909.osc2v + syvSIO.freq]	; -
	push   ebp
	push   esi
	lea    esi,  [ebp + syw909.osc1v]
	lea    ebp,  [ebp + syw909.osc1w]
	call   sySIOtick					; <o1>
	lea    ebp,  [ebp + syw909.osc2w - syw909.osc1w]
	lea    esi,  [esi + syw909.osc2v - syw909.osc1v]
	call   sySIOtick                                       ; <o2> <o1>
	lea    ebp,  [ebp + syw909.wno - syw909.osc2w]
	call   syWNOtick					; <n> <o2> <o1>
	pop    esi
	pop    ebp
	fld    dword [ebp + syw909.nenvval]			; <nev> <n> <o2> <o1>
	fmul   st1, st0					; <nev> <n'> <o2> <o1>
	fmul   dword [esi + syv909.nenvdecay]			; <nev'> <n'> <o2> <o1>
	fxch   st3                                             ; <o1> <n'> <o2> <nev'>
	faddp  st2, st0                                        ; <n'> <o> <nev'>
	fld    dword [ebp + syw909.venvval]			; <vev> <n'> <o> <nev'>
	fmul   st2, st0					; <vev> <n'> <o'> <nev'>
	fmul   dword [esi + syv909.venvdecay]			; <vev'> <n'> <o'> <nev'>
	fxch   st3                                             ; <nev'> <n'> <o'> <vev'>
	fstp   dword [ebp + syw909.nenvval]			; <n'> <o'> <vev'>
	faddp  st1, st0					; <out> <vev'>
	fxch   st1						; <vev'> <out>
	fstp   dword [ebp + syw909.venvval]			; <out>
	fmul   dword [esi + syv909.gain]			; <out'>
	push   esi
	push   ebp
	lea    esi, [esi + syv909.dist]
	lea 	ebp, [ebp + syw909.dist]
	call   syDIStick
	pop    ebp
	pop    esi
	ret







;--------------------------------------------------------------------------------
; 808 cymbal/hihat synth consisting of six square wave oscs and one phat HPF
;--------------------------------------------------------------------------------

; 808 cymbal values
struc syv808C
  .osc1 	resb syvSO.size	; osc 1
  .osc2 	resb syvSO.size	; osc 2
  .osc3 	resb syvSO.size        ; osc 3
  .osc4 	resb syvSO.size        ; osc 4
  .osc5 	resb syvSO.size        ; osc 5
  .osc6 	resb syvSO.size        ; osc 6
  .hpf  	resb syvSF.size        ; high pass filter
  .nvol	resd 1			; noise volume
  .decay	resd 1			; EG decay
  .gain	resd 1			; master gain
  .size
endstruc


; 808 cymbal workspace
struc syw808C
  .osc1	resb sywSO.size	; osc 1
  .osc2	resb sywSO.size	; osc 2
  .osc3	resb sywSO.size	; osc 3
  .osc4	resb sywSO.size	; osc 4
  .osc5	resb sywSO.size	; osc 5
  .osc6	resb sywSO.size	; osc 6
  .nse	resb sywWNO.size	; noise
  .hpf	resb sywSF.size	; hpf
  .amp	resd 1			; amplification
  .size
endstruc


; 808 cymbal init
sy808Cinit	fld	dword [esi + syv808C.gain]
	fstp   dword [ebp + syw808C.amp]
	push   esi
	push   ebp
	xor    ecx, ecx
	mov    cl, 6
.iloop	push 	ecx
	call	sySOinit
	pop    ecx
	lea    esi, [esi + syvSO.size]
	lea	ebp, [ebp + sywSO.size]
	loop   .iloop
	call   syWNOinit
	lea    ebp, [ebp + sywWNO.size]
              	call   sySFinit
	pop    ebp
	pop    esi
	ret


; 808 cymbal tick
sy808Ctick      fldz	       				; <sum=0>
	push 	esi
	push 	ebp
	xor  	ecx, ecx
	mov  	cl, 6
.tloop 	push 	ecx
	call 	sySOtick			; <o> <sum>
	pop  	ecx
	faddp  st1, st0			; <sum'>
	lea    esi, [esi + syvSO.size]
	lea	ebp, [ebp + sywSO.size]
	loop	.tloop
	call   syWNOtick			; <nse> <sum'>
	fmul   dword [esi + syv808C.nvol - syv808C.hpf] ; <nse'> <sum'>
	faddp  st1, st0			; <sum''>
	lea    ebp, [ebp + sywWNO.size]
	call   sySFtick
	pop    ebp
	pop    esi
	fld    dword [ebp + syw808C.amp]	; <amp> <sum>
	fmul   st1, st0			; <amp> <out>
	fmul   dword [esi + syv808C.decay]	; <amp'> <out>
	fstp   dword [ebp + syw808C.amp]	; <out>
	ret


;--------------------------------------------------------------------------------
; Compound analogue synthesis as seen in the Access Virus (ok, a BIT worse)
; - Three oscillators (two transposable, one fixed at -12 semitones)
; - Noise oscillator
; - Two 12dB multi-mode filters (serial/parallel)
; - Two flexibly routable LFOs
; - Two EGs (amplification and filter cutoff)
; - Saturation (after Filter I / before VCA )
; - Step Sequencer (das groovt schon ganz gut)
;
;--------------------------------------------------------------------------------

; ViruZ Values
struc syvVIR
  .seq          resb syvSEQ.size		; step sequencer
  .osc1	resb syvSO.size		; osc1 values (freq is xpose, pw is basepw)
  .osc2	resb syvSO.size		; osc2 values (freq is xpose, pw is basepw)
  .osc3	resb syvSO.size		; osc3 values (sub osc, freq unused (fixed at note-12))
  .vcf1	resb syvSF.size		; filter 1 values (cutoff/reso are base)
  .vcf2	resb syvSF.size		; filter 2 values (cutoff/reso are base)
  .feg	resb syvEG.size                ; Filter EG values
  .aeg	resb syvEG.size		; Amp EG values
  .lfo1	resb syvLFO.size		; LFO1 values
  .lfo2	resb syvLFO.size		; LFO2 values
  .dist	resb syvDIS.size		; distorter values
  .o1vol	resd 1				; flt: osc1 volume
  .o2vol 	resd 1				; flt: osc2 volume
  .o3vol	resd 1                         ; flt: osc3 volume
  .nvol	resd 1				; flt: noise volume
  .f1vol	resd 1				; flt: filter 1 volume
  .f2vol	resd 1				; flt: filter 2 volume
  .fegtocut1    resd 1				; flt: filter eg to cutoff 1
  .fegtocut2	resd 1				; flt: filter eg to cutoff 2
  .fegtopitch   resd 1				; flt: filter eg to pitch
  .routing	resd 1				; int: routing (filter par/ser, dist pos)
  .l1top	resd 1				; flt: LFO1 to main pitch
  .l1top2	resd 1				; flt: LFO1 to osc2 pitch
  .l1tov1       resd 1				; flt: LFO1 to osc1 volume
  .l1tov2	resd 1 			; flt: LFO1 to osc2 volume
  .l1tov3	resd 1				; flt: LFO1 to osc3 volume
  .l1tov4	resd 1				; flt: LFO1 to noise volume
  .l1tores1	resd 1				; flt: LFO1 to vcf1 resonance
  .l1tores2	resd 1				; flt: LFO1 to vcf2 resonance
  .l2topw1	resd 1				; flt: LFO2 to osc1 pulse width
  .l2topw2	resd 1				; flt: LFO2 to osc2 pulse width
  .l2tocut1	resd 1				; flt: LFO2 to cutoff 1
  .l2tocut2	resd 1				; flt: LFO2 to cutoff 2
  .l2tovol	resd 1				; flt: LFO2 to volume
  .veltoaeg     resd 1				; flt: velocity to amp EG
  .veltolfo1	resd 1				; flt: velocity to lfo1 strength
  .veltolfo2	resd 1				; flt: velocity to lfo2 strength
  .veltov2	resd 1				; flt: velocity to osc2 vol
  .veltocut1	resd 1				; flt: velocity to cutoff 1
  .veltocut2	resd 1				; flt: velocity to cutoff 2
  .veltoreso	resd 1				; flt: velocity to reso 1/2
  .gain         resd 1				; flt: master gain
  .size
endstruc

; ViruZ Workspace
struc sywVIR
  .seq	resb sywSEQ.size		; seq ws
  .osc1	resb sywSO.size		; osc1 ws
  .osc2	resb sywSO.size		; osc2 ws
  .osc3	resb sywSO.size		; osc3 ws
  .vcf1	resb sywSF.size		; vcf1 ws
  .vcf2	resb sywSF.size		; vcf2 ws
  .feg	resb sywEG.size		; f eg ws
  .aeg	resb sywEG.size		; a eg ws
  .lfo1	resb sywLFO.size		; lfo1 ws
  .lfo2	resb sywLFO.size		; lfo2 ws
  .dist	resb sywDIS.size		; distortion ws
  .nse	resb sywWNO.size		; noise ws
  .o1xpose	resd 1				; flt: o1 xpose
  .o1pw	resd 1				; flt: o1 pwidth
  .o2xpose	resd 1				; flt: o2 xpose
  .o2pw	resd 1				; flt: o2 pwidth
  .f1cutoff     resd 1				; flt: f1 cutoff
  .f1reso	resd 1				; flt: f1 reso
  .f2cutoff     resd 1				; flt: f2 cutoff
  .f2reso       resd 1				; flt: f2 reso
  .aegval	resd 1				; flt: amp eg val
  .fegval	resd 1				; flt: filter eg val
  .l1val	resd 1				; flt: lfo1 val
  .l2val	resd 1				; flt: lfo2 val
  .o1freq	resd 1				; int: temp o1 note
  .o2freq	resd 1				; int: temp o2 note
  .o3freq	resd 1				; int: temp o3 note
  .size
endstruc

syVIR_SERIAL	equ 0
syVIR_PARALLEL	equ 1
syVIR_DISTVCF1	equ 0
syVIR_DISTOUT	equ 2


; ViruZ init
syVIRinit	mov	eax, [esi + syvVIR.osc1 + syvSO.freq]
	mov	[ebp + sywVIR.o1xpose], eax
	mov	eax, [esi + syvVIR.osc1 + syvSO.pw]
	mov	[ebp + sywVIR.o1pw], eax
	mov	eax, [esi + syvVIR.osc2 + syvSO.freq]
	mov	[ebp + sywVIR.o2xpose], eax
	mov	eax, [esi + syvVIR.osc2 + syvSO.pw]
	mov	[ebp + sywVIR.o2pw], eax
	mov    eax, [esi + syvVIR.vcf1 + syvSF.cutoff]
	mov	[ebp + sywVIR.f1cutoff], eax
	mov    eax, [esi + syvVIR.vcf1 + syvSF.reso]
	mov	[ebp + sywVIR.f1reso], eax
	mov    eax, [esi + syvVIR.vcf2 + syvSF.cutoff]
	mov	[ebp + sywVIR.f2cutoff], eax
	mov    eax, [esi + syvVIR.vcf2 + syvSF.reso]
	mov	[ebp + sywVIR.f2reso], eax
	push 	esi
	push   ebp
	call   sySEQinit			; seq
	lea	esi, [esi + syvSEQ.size]
	lea	ebp, [ebp + sywSEQ.size]
	call   sySOinit                        ; osc1
	lea	esi, [esi + syvSO.size]
	lea	ebp, [ebp + sywSO.size]
	call   sySOinit			; osc2
	lea	esi, [esi + syvSO.size]
	lea	ebp, [ebp + sywSO.size]
	call   sySOinit			; osc3
	lea	esi, [esi + syvSO.size]
	lea	ebp, [ebp + sywSO.size]
	call   sySFinit			; vcf1
	lea	esi, [esi + syvSF.size]
	lea	ebp, [ebp + sywSF.size]
	call   sySFinit			; vcf2
	lea	esi, [esi + syvSF.size]
	lea	ebp, [ebp + sywSF.size]
	call	syEGinit			; eg1
	lea	esi, [esi + syvEG.size]
	lea	ebp, [ebp + sywEG.size]
	call	syEGinit			; eg2
	lea	esi, [esi + syvEG.size]
	lea	ebp, [ebp + sywEG.size]
	call	syLFOinit			; lfo1
	lea	esi, [esi + syvLFO.size]
	lea	ebp, [ebp + sywLFO.size]
	call	syLFOinit			; lfo2
	lea	esi, [esi + syvLFO.size]
	lea	ebp, [ebp + sywLFO.size]
	call	syDISinit			; dist
	lea	esi, [esi + syvDIS.size]
	lea	ebp, [ebp + sywDIS.size]
	call	syWNOinit			; noise
	pop	ebp
	pop	esi
	ret

fc12sem	dd     3072.0
fc32bit	dd	4294967296.0


; ViruZ tick (jezz gehz los)
syVIRtick       call   sySEQtick	       				; step 1: call sequencer

	push	esi						; step 2: update EGs/LFOs
	push	ebp
	mov    edx, [ebp + sywVIR.seq + sywSEQ.outgate]	; gate?
	lea    esi, [esi + syvVIR.feg - syvVIR.seq]
	lea    ebp, [ebp + sywVIR.feg - sywVIR.seq]
	call	syEGtick					; Filter EG
	fstp   dword [ebp + sywVIR.fegval - sywVIR.feg]
	lea	esi, [esi + syvEG.size]
	lea	ebp, [ebp + sywEG.size]
	call	syEGtick					; Amp EG
	fstp   dword [ebp + sywVIR.aegval - sywVIR.aeg]
	lea	esi, [esi + syvEG.size]
	lea	ebp, [ebp + sywEG.size]
	call	syLFOtick					; LFO 1
	fld    dword [ebp + sywVIR.seq + sywSEQ.outvel - sywVIR.lfo1]	; <vel> <l1>
	fld    dword [esi + syvVIR.veltolfo1 - syvVIR.lfo1]		; <v2l1> <vel> <l1>
	fmul   st1, st0						; <v2l1> <vel'> <l1>
	fld1								; <1> <v2l1> <vel'> <l1>
	fsubrp st1, st0						; <1-v2l1> <vel'> <l1>
	faddp  st1, st0						; <v''> <l1>
	fmulp  st1, st0						; <l1'>
	fstp   dword [ebp + sywVIR.l1val - sywVIR.lfo1]
	lea	esi, [esi + syvLFO.size]
	lea	ebp, [ebp + sywLFO.size]
	call	syLFOtick					; LFO 2
	fld    dword [ebp + sywVIR.seq + sywSEQ.outvel - sywVIR.lfo2]	; <vel> <l2>
	fld    dword [esi + syvVIR.veltolfo2 - syvVIR.lfo2]		; <v2l2> <vel> <l2>
	fmul   st1, st0						; <v2l2> <vel'> <l2>
	fld1								; <1> <v2l2> <vel'> <l2>
	fsubrp st1, st0						; <1-v2l2> <vel'> <l2>
	faddp  st1, st0						; <v''> <l2>
	fmulp  st1, st0						; <l2'>
	fstp   dword [ebp + sywVIR.l2val - sywVIR.lfo2]
	pop    ebp
	pop	esi
								; step 3: update mod matrix part I
	fild   dword [ebp + sywVIR.seq + sywSEQ.outnote]	; <note> (update osc1-3 pitch)
	fld    dword [esi + syvVIR.l1top]			; <l1top> <note>
	fmul   dword [ebp + sywVIR.l1val]			; <l1p> <note>
	faddp	st1, st0					; <note''>
	fld    dword [esi + syvVIR.fegtopitch]			; <ftop> <note''>
	fmul   dword [ebp + sywVIR.fegval]			; <l1p> <note>
	faddp	st1, st0					; <note''>
	fld    st0						; <note'> <note'>
	fiadd   dword [ebp + sywVIR.o1xpose]			; <o1pitch> <note'>
	fistp  dword [ebp + sywVIR.o1freq]           		; <note'>
	fld    st0						; <note'> <note'>
	fld    dword [esi + syvVIR.l1top2]			; <l1top2> <note'> <note'>
	fmul   dword [ebp + sywVIR.l1val]			; <l1p2> <note'> <note'>
	faddp  st1, st0					; <o2pitch> <note'>
	fiadd  dword [ebp + sywVIR.o2xpose]			; <o2pitch'> <note'>
	fistp  dword [ebp + sywVIR.o2freq]           		; <note'>
	fsub   dword [fc12sem]					; <note'-12>
	fistp   dword [ebp + sywVIR.o3freq]			; -

	fld	dword [ebp + sywVIR.l2val]			; <l2> (update pulse widths)
	fmul   dword [fc32bit]					; <l2'>
	fld    st0						; <l2'> <l2'>
	fmul   dword [esi + syvVIR.l2topw1]			; <l2p1> <l2'>
	fiadd  dword [ebp + sywVIR.o1pw]			; <pw1> <l2'>
	fistp  dword [esi + syvVIR.osc1 + syvSO.pw]		; <l2'>
	fmul   dword [esi + syvVIR.l2topw2]			; <l2p2>
	fiadd  dword [ebp + sywVIR.o2pw]			; <pw2>
	fistp  dword [esi + syvVIR.osc2 + syvSO.pw]		; -

	fld	dword [ebp + sywVIR.f1cutoff]			; <c1> (update vcf cutoffs)
	fld    dword [esi + syvVIR.fegtocut1]			; <fetoc1> <c1>
	fmul   dword [ebp + sywVIR.fegval]			; <fec1> <c1>
	faddp  st1, st0					; <c1'>
	fld    dword [esi + syvVIR.l2tocut1]			; <l2toc1> <c1>
	fmul   dword [ebp + sywVIR.l2val]			; <l2c1> <c1>
	faddp  st1, st0					; <c1'>
	fld    dword [esi + syvVIR.veltocut1]			; <vtoc1> <c1>
	fmul   dword [ebp + sywVIR.seq + sywSEQ.outvel]	; <vc1> <c1>
	faddp  st1, st0					; <c1'>
	fstp   dword [esi + syvVIR.vcf1 + syvSF.cutoff]	; -
	fld	dword [ebp + sywVIR.f2cutoff]			; <c2>
	fld    dword [esi + syvVIR.fegtocut2]			; <fetoc2> <c2>
	fmul   dword [ebp + sywVIR.fegval]			; <fec2> <c2>
	faddp  st1, st0					; <c2'>
	fld    dword [esi + syvVIR.l2tocut2]			; <l2toc2> <c2>
	fmul   dword [ebp + sywVIR.l2val]			; <l2c2> <c2>
	faddp  st1, st0					; <c2'>
	fld    dword [esi + syvVIR.veltocut2]			; <vtoc2> <c2>
	fmul   dword [ebp + sywVIR.seq + sywSEQ.outvel]	; <vc2> <c2>
	faddp  st1, st0					; <c2'>
	fstp   dword [esi + syvVIR.vcf2 + syvSF.cutoff]	; -

	fld	dword [ebp + sywVIR.f1reso]			; <r1> (update vcf reso)
	fld    dword [esi + syvVIR.l1tores1]			; <l1tor1> <r1>
	fmul   dword [ebp + sywVIR.l1val]			; <l1r1> <r1>
	faddp  st1, st0					; <r1'>
	fld    dword [esi + syvVIR.veltoreso]			; <vtor> <r1>
	fmul   dword [ebp + sywVIR.seq + sywSEQ.outvel]	; <vr> <r1>
	faddp  st1, st0					; <r1'>
	fld1                                                   ; <1> <r1'>
	fsubrp st1, st0					; <1-r1'>
	fstp   dword [esi + syvVIR.vcf1 + syvSF.reso]		; -
	fld	dword [ebp + sywVIR.f2reso]			; <r2>
	fld    dword [esi + syvVIR.l1tores2]			; <l1tor2> <r2>
	fmul   dword [ebp + sywVIR.l1val]			; <l1r2> <r2>
	faddp  st1, st0					; <r2'>
	fld    dword [esi + syvVIR.veltoreso]			; <vtor> <r2>
	fmul   dword [ebp + sywVIR.seq + sywSEQ.outvel]	; <vr> <r2>
	faddp  st1, st0					; <r2'>
	fld1                                                   ; <1> <r2'>
	fsubrp st1, st0					; <1-r2'>
	fstp   dword [esi + syvVIR.vcf2 + syvSF.reso]		; -

								; step 4: do the oscs
	push   esi
	push   ebp
	lea    esi, [esi + syvVIR.osc1]
	lea    ebp, [ebp + sywVIR.osc1]
	mov    eax, [ebp + sywVIR.o1freq - sywVIR.osc1]
	call   sySOsetnote
	call   sySOtick					; <o1>
	fld    dword [esi + syvVIR.o1vol - syvVIR.osc1]	; <o1v> <o1>
	fld    dword [esi + syvVIR.l1tov1 - syvVIR.osc1]	; <l1tov1> <o1v> <o1>
	fmul   dword [ebp + sywVIR.l1val - sywVIR.osc1]	; <l1v1> <o1v> <o1>
	faddp  st1, st0					; <o1v'> <o1>
	fmulp  st1, st0					; <o1'>
	lea    esi, [esi + syvSO.size]
	lea    ebp, [ebp + sywSO.size]
	mov    eax, [ebp + sywVIR.o2freq - sywVIR.osc2]
	call   sySOsetnote
	call   sySOtick					; <o2> <o1>
	fld    dword [esi + syvVIR.o2vol - syvVIR.osc2]	; <o2v> <o2> <o1>
	fld    dword [esi + syvVIR.l1tov2 - syvVIR.osc2]	; <l1tov2> <o2v> <o2> <o1>
	fmul   dword [ebp + sywVIR.l1val - sywVIR.osc2]	; <l1v2> <o2v> <o2> <o1>
	faddp  st1, st0					; <o2v'> <o2> <o1>
	fld    dword [esi + syvVIR.veltov2 - syvVIR.osc2]	; <vetov2> <o2v> <o2> <o1>
	fmul   dword [ebp + sywSEQ.outvel - sywVIR.osc2]	; <vev2> <o2v> <o2> <o1>
	faddp  st1, st0					; <o2v'> <o2> <o1>
	fmulp  st1, st0					; <o2'> <o1>
	faddp  st1, st0					; <o1+o2>
	lea    esi, [esi + syvSO.size]
	lea    ebp, [ebp + sywSO.size]
	mov    eax, [ebp + sywVIR.o3freq - sywVIR.osc3]
	call   sySOsetnote
	call   sySOtick					; <o3> <o1+o2>
	fld    dword [esi + syvVIR.o3vol - syvVIR.osc3]	; <o3v> <o3> <o1+o2>
	fld    dword [esi + syvVIR.l1tov3 - syvVIR.osc3]	; <l1tov3> <o3v> <o3> <o1+o2>
	fmul   dword [ebp + sywVIR.l1val - sywVIR.osc3]	; <l1v3> <o3v> <o3> <o1+o2>
	faddp  st1, st0					; <o3v'> <o3> <o1+o2>
	fmulp  st1, st0					; <o3'> <o1+o2>
	faddp  st1, st0					; <o1+o2+o3>
	lea    ebp, [ebp + sywVIR.nse - sywVIR.osc3]
	call   syWNOtick					; <n> <o1+o2+o3>
	pop    ebp
	pop    esi
	fld    dword [esi + syvVIR.nvol] 			; <nv> <n> <o1+o2+o3>
	fld    dword [esi + syvVIR.l1tov4]			; <l1tov4> <nv> <n> <o1+o2+o3>
	fmul   dword [ebp + sywVIR.l1val]			; <l1v4> <nv> <n> <o1+o2+o3>
	faddp  st1, st0					; <nv'> <n> <o1+o2+o3>
	fmulp  st1, st0					; <n'> <o1+o2+o3>
	faddp  st1, st0					; <o1+o2+o3+n>	(phew :)

	push   esi						; step 5: filter the osc output
	push   ebp
	test	byte  [esi + syvVIR.routing], syVIR_PARALLEL
	jz     .serflt

	fld    st0						; <oo> <oo> (parallel filters)
	lea    esi, [esi + syvVIR.vcf1]
	lea    ebp, [ebp + sywVIR.vcf1]
	call	sySFtick					; <f1> <oo>
	fmul   dword [esi + syvVIR.f1vol - syvVIR.vcf1]	; <f1'> <oo>
	test   byte  [esi + syvVIR.routing - syvVIR.vcf1], syVIR_DISTOUT
	jnz    .pfnodist1
	lea    esi, [esi + syvVIR.dist - syvVIR.vcf1]
	lea    ebp, [ebp + sywVIR.dist - sywVIR.vcf1]
	call   syDIStick					; <f1d> <oo>
	lea    esi, [esi - syvVIR.dist + syvVIR.vcf1]
	lea    ebp, [ebp - syvVIR.dist + syvVIR.vcf1]
.pfnodist1	fxch	st1						; <oo> <f1'>
	lea    esi, [esi + syvVIR.vcf2 - syvVIR.vcf1]
	lea    ebp, [ebp + sywVIR.vcf2 - sywVIR.vcf1]
	call	sySFtick					; <f2> <f1'>
	fmul   dword [esi + syvVIR.f2vol - syvVIR.vcf2]	; <f2'> <f1'>
	faddp  st1, st0					; <fout>
	test   byte  [esi + syvVIR.routing - syvVIR.vcf2], syVIR_DISTOUT
	jz     .fend
	lea    esi, [esi + syvVIR.dist - syvVIR.vcf2]
	lea    ebp, [ebp + sywVIR.dist - sywVIR.vcf2]
	call   syDIStick					; <f1d> <oo>
	jmp    .fend

.serflt	lea    esi, [esi + syvVIR.vcf1]			; (serial filters)
	lea    ebp, [ebp + sywVIR.vcf1]
	call	sySFtick					; <f1>



	fmul   dword [esi + syvVIR.f1vol - syvVIR.vcf1]	; <f1'>
	test   byte  [esi + syvVIR.routing - syvVIR.vcf1], syVIR_DISTOUT
	jnz    .sfnodist1
	lea    esi, [esi + syvVIR.dist - syvVIR.vcf1]
	lea    ebp, [ebp + syvVIR.dist - syvVIR.vcf1]
	call   syDIStick					; <f1d>
	lea    esi, [esi - syvVIR.dist + syvVIR.vcf1]
	lea    ebp, [ebp - syvVIR.dist + syvVIR.vcf1]
.sfnodist1	lea    esi, [esi + syvVIR.vcf2 - syvVIR.vcf1]
	lea    ebp, [ebp + syvVIR.vcf2 - syvVIR.vcf1]
	call	sySFtick					; <f2-1>


	fmul   dword [esi + syvVIR.f2vol - syvVIR.vcf2]	; <f2-1'>
	test   byte  [esi + syvVIR.routing - syvVIR.vcf2], syVIR_DISTOUT
	jz     .fend
	lea    esi, [esi + syvVIR.dist - syvVIR.vcf2]
	lea    ebp, [ebp + sywVIR.dist - sywVIR.vcf2]
	call   syDIStick					; <f2-1d>
.fend	pop    ebp
	pop    esi

	fld	dword [esi + syvVIR.veltoaeg]			; <va> <fout>
	fld    st0						; <va> <va> <fout>
	fmul   dword [ebp + sywVIR.seq + sywSEQ.outvel]	; <vel*va> <va> <fout>
	fxch	st1						; <va> <vel*va> <fout>
	fld1							; <1> <va> <vel*va> <fout>
	fsubrp	st1, st0					; <1-va> <vel*va> <fout>
	faddp  st1, st0					; <v'> <fout>
	fmul   dword [ebp + sywVIR.aegval]			; <va'> <fout>
	fld    dword [esi + syvVIR.l2tovol]			; <l2tov> <v'> <fout>
	fmul   dword [ebp + sywVIR.l2val]			; <l2v> <v'> <fout>
	faddp	st1, st0					; <v''> <fout>
	fmul   dword [esi + syvVIR.gain]			; <v'''>
	fmulp	st1, st0					; <OUT!!!!!>
	ret




;--------------------------------------------------------------------------------
; krasser startcode
; machsynthese (int n, signed short *buf, int smpls)
;--------------------------------------------------------------------------------

struc SynInfo
  .initproc	resd 1			; ptr: init function
  .tickproc	resd 1			; ptr: tick function
  .vdata	resd 1			; ptr: vspace data
  .vsize	resd 1			; int: vspace size
  .pdata	resd 1			; ptr: patch data
  .size
endstruc

; patch format: ( dd offset, value ) * , dd -1

global _syRender@12
_syRender@12	push   ebx
	push	edx
	push   esi
	push   edi
	push   ebp
	mov    edx, [esp+24]
	cmp	edx, nsynths
	jle	.start
	mov	eax, 0
	jmp 	.ente
.start	imul   edx, SynInfo.size
	mov	esi, [synths + edx + SynInfo.vdata]
	lea    edi, [vspace]
	mov    ecx, [synths + edx + SynInfo.vsize]
	rep    movsb
	lea    esi, [vspace]
	mov    edi, [synths + edx + SynInfo.pdata]
	or     edi, edi
	jz     .patchend
.patchloop      mov    eax, [edi]
	or     eax, eax
	js     .patchend
	mov    ebx, [edi + 4]
	lea	edi, [edi + 8]
	mov    [esi + eax], ebx
	jmp	.patchloop
.patchend	fstcw	[oldfpcw]
	mov    ax, [oldfpcw]
	and    ax, 0f0ffh
	or     ax, 3fh
	mov    [fpcwtemp], ax
	fldcw  [fpcwtemp]
	mov	edi, [esp+28]
	mov    ecx, [esp+32]
	mov    eax, [synths + edx + SynInfo.initproc]
	mov    ebx, [synths + edx + SynInfo.tickproc]
	mov    ebp, workspace
	call	synthRender
	fldcw  [oldfpcw]
	mov    eax, 1
.ente	pop    ebp
	pop	edi
	pop	esi
	pop	edx
	pop    ebx
	ret	12




; -------------------------------------------------------------------------------------------------------
;   uninitialized data
; -------------------------------------------------------------------------------------------------------

section .bss

workspace	resb   65536
vspace	resb   16384
oldfpcw	resw	1
fpcwtemp	resw	1
sbuf	resd	1
syVOCtempi	resd 	1
syVOCtemps	resd 	1




section .data


;-------------------------------------------------------------------------------------------------------
;
;                                             <*=- THE SOUNDS -=*>
;
;-------------------------------------------------------------------------------------------------------


synths
	dd     syVIRinit,	syVIRtick,	lead1,		syvVIR.size,	0		; synth lead 1
	dd     syVIRinit,	syVIRtick,	pad1,		syvVIR.size,	0		; synth pad 1
	dd     syVIRinit,	syVIRtick,	synbass1,       syvVIR.size,	0		; dark synth bass
	dd     sy808Cinit,	sy808Ctick, 	syHHC808,	syv808C.size,	0		; 808 HH closed
	dd     syVIRinit,	syVIRtick,	tb303,		syvVIR.size,	0		; tbseq f
	dd     syVIRinit,	syVIRtick,	tb303,		syvVIR.size,	tbpatch1	; tbseq es
	dd     syVIRinit,	syVIRtick,	tb303,		syvVIR.size,	tbpatch2	; tbseq ces
	dd     syVIRinit,	syVIRtick,	tb303,		syvVIR.size,	tbpatch3	; tbseq b
	dd     syVIRinit,	syVIRtick,	tb303,		syvVIR.size,	tbpatch4	; tbseq as
	dd     syVIRinit,	syVIRtick,	tb303,		syvVIR.size,	tbpatch5	; tbseq ges
	dd	sy909init,	sy909tick,	syBD909_1,  	syv909.size, 	0		; 909 BD 1
	dd	sy909init,	sy909tick,	sySD909_1,	syv909.size,	0		; 909 SD 1
	dd	sy808Cinit,	sy808Ctick,	syHHC808,	syv808C.size,	sypHHO808	; 808 HH opened
	dd     syVIRinit,	syVIRtick,	rumms,		syvVIR.size,	0       	; rumms
                dd	syn1init,	syn1tick,	syn1vals,	syn1v.size,     0		; robospeech
	dd     syVIRinit,	syVIRtick,	vir1vals,	syvVIR.size,	0		; ViruZ seq 1
	dd     syVIRinit,	syVIRtick,	moogbass,	syvVIR.size,	0		; moog bass
	dd     syVIRinit,	syVIRtick,	fakebell,	syvVIR.size,	0		; fake bell
	dd     syVIRinit,	syVIRtick,	vir1vals,	syvVIR.size,	v1patch1	; ViruZ seq 1 -4
	dd     syVIRinit,	syVIRtick,	vir1vals,	syvVIR.size,	v1patch2	; ViruZ seq 1 -7
	dd     syVIRinit,	syVIRtick,	lead2,		syvVIR.size,	0		; synth lead 2


synthsend


nsynths	equ  	(synthsend-synths)/SynInfo.size




; ---------------------------------------------------------------------------- Testsynthese mit Vocoder


pvdata1 incbin "data\ms2000.pv2"

syn1vals	dd 30					; seq tempo
	dd 00					; seq groove
	dd -19*256				; seq basenote
	dd 80					; seq length
	dd 8					; seq steps
	dd testpat1				; seq pattern
	dd 10					; seq portaspd
	dd 1.0   				; env1 arate
	dd 0.999999    			; env1 drate
	dd 1.0					; env1 slevel
	dd 0.9998  				; env1 rrate
	dd 3125536        		    	; osc1 freq
	dd 08000000h	     			; osc1 pw
	dd sySO_SAW         			; osc1 flags
	dd pvdata1				; vocoder data
	dd 1.0					; vocoder speed
	dd 10.0				; master gain

testpat1        db  0, 60|64
	db  0, 60|64
	db  0, 60|64
	db  0, 60|64
	db  0, 60|64
	db  0, 60|64
	db  0, 60|64
	db  0, 40


; ------------------------------------------------------------------------------------   909 bass drum 1

syBD909_1	dd	0.0009		; osc base frq
	dd	1.4		; osc2 frq offset
	dd	0.002    	; pitch env amount
	dd	0.9992		; pitch env decay
	dd	0.9997		; vol env decay
	dd	0.25		; noise vol
	dd	0.994		; noise env decay
	dd     15.0		; drive
	dd	0.9		; master gain



; ------------------------------------------------------------------------------------- 909 snare drum 1

sySD909_1	dd	0.0029		; osc base frq
	dd	1.4		; osc2 frq offset
	dd	0.002		; pitch env amount
	dd	0.998		; pitch env decay
	dd	0.9992		; vol env decay
	dd	0.1		; noise vol
	dd	0.9995   	; noise env decay
	dd     130.0		; drive
	dd	0.9		; master gain



; ------------------------------------------------------------------------------------------- 808 hihats

syHHC808	dd 1726720, 40000000h, sySO_PULSE	; osc1
	dd 2958470, 40000000h, sySO_PULSE	; osc2
	dd 4958870, 40000000h, sySO_PULSE	; osc3
	dd 6934720, 40000000h, sySO_PULSE	; osc4
	dd 8283740, 40000000h, sySO_PULSE	; osc5
	dd 9837210, 40000000h, sySO_PULSE	; osc6
	dd 0.9, 0.1, sySF_HIGH			; filter
	dd 1.2					; noise vol
	dd 0.998				; decay
	dd 0.4	      				; gain

sypHHO808       dd syv808C.decay, 0.9998, -1		; patch for open hihat




; ---------------------------------------------------------------------------------- ViruZ test sequence

vir1vals	dd 140,0							; seq tempo/groove
	dd 0ffffed00h 					     		; seq basenote
	dd 60								; seq length
	dd 16								; seq steps
	dd virpat1							; seq pattern
	dd 10					       			; seq portaspd

	dd 0ffffffe0h,	0,	     sySO_SAW     			; osc 1
	dd 000000020h, 010000000h,  sySO_SAW	 			; osc 2
	dd 0,		0,	     sySO_TRIANGLE			; osc 3

	dd 1.0,        0.0,         sySF_LOW				; vcf 1
	dd 1.0,	0.0,	     sySF_LOW	       			; vcf 2

	dd 0.0001,     0.9999,     0.5,		 1.0            ; filter eg
	dd 0.1,	0.9993,     0.7,		 0.9993		; amp eg

	dd 000010000h, 040000000h,  syLFO_PULSE|syLFO_FREE		; lfo 1
	dd 000002000h, 000000000h,  syLFO_TRIANGLE|syLFO_ENV		; lfo 2

	dd 1.0								; dist
	dd 0.7, 	0.7, 	     0.7,         0.2	   		; vols
	dd 0.8, 	0.8  						; filter amps

	dd 0.00, 	0.0,         0.0 				; feg to cut1/cut2/pitch
	dd syVIR_SERIAL|syVIR_DISTOUT  				; routing
	dd 0.0, 	0.0	   					; lfo1 to pitch
	dd 0.0, 	0.0,         0.0, 	  0.0   		; lfo1 to vol
	dd 0.0, 	0.0    						; lfo1 to res
	dd 0.0, 	0.0	   					; lfo2 to pulsewidth
	dd 0.0, 	0.0	       					; lfo2 to cutoff
	dd 0.0								; lfo2 to vol
	dd 0.5								; vel to aeg
	dd 0.0, 	0.0	 					; vel to lfos
	dd 0.0								; vel to osc2 vol
	dd 0.08, 	0.0	 					; vel to cutoff
	dd 0.0								; vel to reso
	dd 1.0								; output gain


virpat1   	db  12, 60|64
	db  12, 60
	db  0, 20
	db  12, 40|64
	db  12, 40
	db  0, 20
	db  12, 20
	db  12, 40
	db  12, 60
	db  12, 40
	db  0 , 20
	db  12, 60|64
	db  12, 60
	db  0,  20
	db  12, 40|64
	db  0,  40


v1patch1	dd syvVIR.seq+syvSEQ.basenote, 0ffffe900h, -1
v1patch2	dd syvVIR.seq+syvSEQ.basenote, 0ffffe600h, -1


;------------------------------------------------------------------------------ ViruZ sound: Elite lead 1

lead1           dd 1,0	  							; seq tempo/groove
	dd 000000c00h 					     		; seq basenote
	dd 90								; seq length
	dd 2								; seq steps
	dd pat_long    						; seq pattern
	dd 10					       			; seq portaspd

	dd 0fffff40ch,	0,	     sySO_SAW     			; osc 1
	dd 0fffff3f4h, 010000000h,  sySO_SAW	 			; osc 2
	dd 0,		0,	     sySO_TRIANGLE			; osc 3

	dd 0.01,       0.4,         sySF_LOW				; vcf 1
	dd 0.5,	0.0,	     sySF_LOW	   			; vcf 2

	dd 0.00001,    0.99994,    0.8,		 0.999999       ; filter eg
	dd 0.00004,	0.9993,     0.9,		 0.9993		; amp eg

	dd 000010000h, 040000000h,  syLFO_PULSE|syLFO_FREE		; lfo 1
	dd 000001800h, 000000000h,  syLFO_SAW          		; lfo 2

	dd 1.0								; dist
	dd 0.5, 	0.5, 	     0.5,         0.0	   		; vols
	dd 0.8, 	0.8  						; filter amps

	dd 0.45, 	0.0,         0.0 				; feg to cut1/cut2/pitch
	dd syVIR_SERIAL|syVIR_DISTOUT					; routing
	dd 0.0, 	0.0	   					; lfo1 to pitch
	dd 0.0, 	0.0,         0.0, 	  0.0   		; lfo1 to vol
	dd 0.0, 	0.0    						; lfo1 to res
	dd 0.0, 	0.0	   					; lfo2 to pulsewidth
	dd 0.0, 	0.0	       					; lfo2 to cutoff
	dd 0.0								; lfo2 to vol
	dd 0.0								; vel to aeg
	dd 0.0, 	0.0	 					; vel to lfos
	dd 0.0								; vel to osc2 vol
	dd 0.00, 	0.0	 					; vel to cutoff
	dd 0.0								; vel to reso
	dd 0.8								; output gain



pat_long   	db  0, 60
	db  128, 0


;------------------------------------------------------------------------------ ViruZ sound: Elite lead 1

pad1            dd 1,0	  							; seq tempo/groove
	dd 000000000h 					     		; seq basenote
	dd 90								; seq length
	dd 2								; seq steps
	dd pat_long    						; seq pattern
	dd 10					       			; seq portaspd

	dd 0fffffff0h,	0,	     sySO_TRIANGLE			; osc 1
	dd 000000010h, 020000000h,  sySO_PULSE         		; osc 2
	dd 0,		0,	     sySO_TRIANGLE			; osc 3

	dd 0.15,       0.4,         sySF_LOW				; vcf 1
	dd 0.0,       0.0,	    sySF_LOW|sySF_HIGH 			; vcf 2

	dd 0.00001,    0.99994,    0.8,		 0.999999       ; filter eg
	dd 1.0,	0.9993,     0.9,		 0.9993		; amp eg

	dd 000030000h, 040000000h,  syLFO_PULSE|syLFO_FREE		; lfo 1
	dd 000001800h, 000000000h,  syLFO_TRIANGLE          		; lfo 2

	dd 1.0								; dist
	dd 0.5, 	0.2, 	     0.5,         0.0	   		; vols
	dd 0.8, 	0.8  						; filter amps

	dd 0.0, 	0.0,         0.0 				; feg to cut1/cut2/pitch
	dd syVIR_SERIAL|syVIR_DISTOUT					; routing
	dd 0.0, 	0.0	   					; lfo1 to pitch
	dd 0.0, 	0.0,         0.0, 	  0.0   		; lfo1 to vol
	dd 0.0, 	0.0    						; lfo1 to res
	dd 0.0, 	0.0	   					; lfo2 to pulsewidth
	dd 0.0, 	0.08           					; lfo2 to cutoff
	dd 0.0								; lfo2 to vol
	dd 0.0								; vel to aeg
	dd 0.0, 	0.0	 					; vel to lfos
	dd 0.0								; vel to osc2 vol
	dd 0.00, 	0.0	 					; vel to cutoff
	dd 0.0								; vel to reso
	dd 0.8								; output gain



;------------------------------------------------------------------------------ ViruZ sound: Dark Synbass

synbass1        dd 1,0	  							; seq tempo/groove
	dd 0ffffe800h 					     		; seq basenote
	dd 90								; seq length
	dd 2								; seq steps
	dd pat_long    						; seq pattern
	dd 10					       			; seq portaspd

	dd 000000018h,	0,	     sySO_TRIANGLE			; osc 1
	dd 000000000h, 040000000h,  sySO_PULSE  			; osc 2
	dd 0,		0,	     sySO_TRIANGLE			; osc 3

	dd 0.3,         0.5,        sySF_LOW				; vcf 1
	dd 0.5,	 0.0,	     sySF_LOW				; vcf 2

	dd 0.000006,   0.99994,    0.8,		 0.999999       ; filter eg
	dd 0.00014,	0.9993,     0.9,		 0.9993		; amp eg

	dd 000010000h, 040000000h,  syLFO_PULSE|syLFO_FREE		; lfo 1
	dd 000000800h, 000000000h,  syLFO_TRIANGLE          		; lfo 2

	dd 20.0    							; dist
	dd 0.5, 	0.5, 	     0.5,         0.0	   		; vols
	dd 0.7, 	0.7  						; filter amps

	dd 0.0, 	0.0,         0.0 				; feg to cut1/cut2/pitch
	dd syVIR_SERIAL|syVIR_DISTOUT					; routing
	dd 0.0, 	0.0	   					; lfo1 to pitch
	dd 0.0, 	0.0,         0.0, 	  0.0   		; lfo1 to vol
	dd 0.0, 	0.0    						; lfo1 to res
	dd 0.0, 	0.0	   					; lfo2 to pulsewidth
	dd 0.0, 	0.0	       					; lfo2 to cutoff
	dd 0.0								; lfo2 to vol
	dd 0.0								; vel to aeg
	dd 0.0, 	0.0	 					; vel to lfos
	dd 0.0								; vel to osc2 vol
	dd 0.00, 	0.0	 					; vel to cutoff
	dd 0.0								; vel to reso
	dd 1.0								; output gain

;-------------------------------------------------------------------------------- ViruZ sound: moog bass


moogbass        dd 8,0	  							; seq tempo/groove
	dd 0ffffed00h 					     		; seq basenote
	dd 90								; seq length
	dd 2								; seq steps
	dd pat_long    						; seq pattern
	dd 10					       			; seq portaspd

	dd 000000c00h,	0,	     sySO_SAW     			; osc 1
	dd 000000000h, 030000000h,  sySO_PULSE	 			; osc 2
	dd 0,		0,	     sySO_TRIANGLE			; osc 3

	dd 0.01,        0.0,         sySF_LOW				; vcf 1
	dd 1.0,	0.0,	     sySF_LOW	   			; vcf 2

	dd 1.0	,       0.9997,     0.0,		 0.9            ; filter eg
	dd 0.01,	0.9993,     0.8,		 0.9993		; amp eg

	dd 000010000h, 040000000h,  syLFO_TRIANGLE|syLFO_FREE		; lfo 1
	dd 000001800h, 000000000h,  syLFO_TRIANGLE|syLFO_FREE		; lfo 2

	dd 1.0								; dist
	dd 0.5, 	0.5, 	     0.0,         0.0	   		; vols
	dd 0.8, 	0.8  						; filter amps

	dd 0.1, 	0.0,         0.0 				; feg to cut1/cut2/pitch
	dd syVIR_SERIAL|syVIR_DISTOUT					; routing
	dd 0.0, 	0.0	   					; lfo1 to pitch
	dd 0.0, 	0.0,         0.0, 	  0.0   		; lfo1 to vol
	dd 0.0, 	0.0    						; lfo1 to res
	dd 0.0, 	0.1	   					; lfo2 to pulsewidth
	dd 0.0, 	0.0	       					; lfo2 to cutoff
	dd 0.0								; lfo2 to vol
	dd 0.0								; vel to aeg
	dd 0.0, 	0.0	 					; vel to lfos
	dd 0.0								; vel to osc2 vol
	dd 0.00, 	0.0	 					; vel to cutoff
	dd 0.0								; vel to reso
	dd 1.0								; output gain

;------------------------------------------------------------------------------------------ ViruZ: TB303

tb303           dd 120,20       						; seq tempo/groove
	dd 0ffffed00h 					     		; seq basenote
	dd 60								; seq length
	dd 8								; seq steps
	dd tbseq1      						; seq pattern
	dd 2					       			; seq portaspd

	dd 000000000h,	0,	     sySO_SAW     			; osc 1
	dd 000000c20h, 010000000h,  sySO_SAW	 			; osc 2
	dd 0,		0,	     sySO_TRIANGLE			; osc 3

	dd 0.0,        0.0,         sySF_LOW				; vcf 1
	dd 0.0,	0.7,	     sySF_LOW	   			; vcf 2

	dd 0.001,      0.9997,     0.0,		 0.9997         ; filter eg
	dd 0.01,	0.9993,     1.0,		 0.999		; amp eg

	dd 000010000h, 040000000h,  syLFO_PULSE|syLFO_FREE		; lfo 1
	dd 000001800h, 000000000h,  syLFO_SAW|syLFO_ENV		; lfo 2

	dd 10.0    							; dist
	dd 0.5, 	0.0, 	     0.0,         0.0	   		; vols
	dd 0.8, 	0.8  						; filter amps

	dd 0.045, 	0.045,       0.0 				; feg to cut1/cut2/pitch
	dd syVIR_SERIAL|syVIR_DISTOUT					; routing
	dd 0.0, 	0.0	   					; lfo1 to pitch
	dd 0.0, 	0.0,         0.0, 	  0.0   		; lfo1 to vol
	dd 0.0, 	0.0    						; lfo1 to res
	dd 0.0, 	0.0	   					; lfo2 to pulsewidth
	dd 0.0, 	0.0	       					; lfo2 to cutoff
	dd 0.0								; lfo2 to vol
	dd 0.0								; vel to aeg
	dd 0.0, 	0.0	 					; vel to lfos
	dd 0.0								; vel to osc2 vol
	dd 0.01, 	0.01	 					; vel to cutoff
	dd 0.0								; vel to reso
	dd 0.8								; output gain

tbseq1	db 12,60|64
	db 0,20
	db 0,20
	db 0,60
	db 0,20
	db 12,60|64
	db 0,20
	db 12,60

tbpatch1	dd syvVIR.seq+syvSEQ.basenote, 0ffffeb00h, -1
tbpatch2	dd syvVIR.seq+syvSEQ.basenote, 0ffffe900h, -1
tbpatch3	dd syvVIR.seq+syvSEQ.basenote, 0fffff200h, -1
tbpatch4	dd syvVIR.seq+syvSEQ.basenote, 0fffff000h, -1
tbpatch5	dd syvVIR.seq+syvSEQ.basenote, 0ffffee00h, -1


;-------------------------------------------------------------------------------- ViruZ sound: rumms sfx

rumms           dd 8,0	  							; seq tempo/groove
	dd 0ffffd000h 					     		; seq basenote
	dd 90								; seq length
	dd 2								; seq steps
	dd pat_long    						; seq pattern
	dd 10					       			; seq portaspd

	dd 000000c00h,	0,	     sySO_TRIANGLE     			; osc 1
	dd 000000000h, 010000000h,  sySO_SAW	 			; osc 2
	dd 0,		0,	     sySO_TRIANGLE			; osc 3

	dd 0.005,      0.9,         sySF_ALL			    	; vcf 1
	dd 0.01,	0.8,	     sySF_LOW	   			; vcf 2

	dd 1.0	,       0.9999,     0.0,		 0.0            ; filter eg
	dd 1.0 ,	0.9999,     0.5,		 0.9998		; amp eg

	dd 000010000h, 040000000h,  syLFO_SAW|syLFO_ENV		; lfo 1
	dd 000001800h, 000000000h,  syLFO_SAW|syLFO_ENV		; lfo 2

	dd 10.0         						; dist
	dd 0.5, 	0.0, 	     0.0,         0.5	   		; vols
	dd 0.8, 	0.8  						; filter amps

	dd 0.0, 	0.1,         2048.0   				; feg to cut1/cut2/pitch
	dd syVIR_SERIAL|syVIR_DISTOUT					; routing
	dd 0.0, 	0.0	   					; lfo1 to pitch
	dd 0.0, 	0.0,         0.0, 	  0.0   		; lfo1 to vol
	dd 0.0, 	0.0    						; lfo1 to res
	dd 0.0, 	0.0	   					; lfo2 to pulsewidth
	dd 0.0, 	0.0	       					; lfo2 to cutoff
	dd 0.0								; lfo2 to vol
	dd 0.0								; vel to aeg
	dd 0.0, 	0.0	 					; vel to lfos
	dd 0.0								; vel to osc2 vol
	dd 0.0, 	0.0	 					; vel to cutoff
	dd 0.0								; vel to reso
	dd 1.0								; output gain

;-------------------------------------------------------------------------------- ViruZ sound: fake bell

fakebell        dd 1,0	  							; seq tempo/groove
	dd 000001800h 					     		; seq basenote
	dd 90								; seq length
	dd 2								; seq steps
	dd pat_long    						; seq pattern
	dd 10					       			; seq portaspd

	dd 000000c01h,	010000000h,  sySO_PULSE        			; osc 1
	dd 000001effh, 040000000h,  sySO_PULSE  			; osc 2
	dd 0,		0,	     sySO_TRIANGLE			; osc 3

	dd 0.01,       0.6,         sySF_LOW			    	; vcf 1
	dd 0.25,	0.0,	     sySF_LOW	   			; vcf 2

	dd 1.0	,       0.99995,     0.0,		 0.0            ; filter eg
	dd 1.0 ,	0.99997,     0.0,		 0.9998		; amp eg

	dd 000010000h, 040000000h,  syLFO_SAW|syLFO_ENV		; lfo 1
	dd 000001800h, 000000000h,  syLFO_SAW|syLFO_ENV		; lfo 2

	dd 1.0         						; dist
	dd 0.3, 	0.2, 	     0.8,         0.0	   		; vols
	dd 0.8, 	0.8  						; filter amps

	dd 0.24, 	0.0,        0.0   				; feg to cut1/cut2/pitch
	dd syVIR_SERIAL|syVIR_DISTOUT					; routing
	dd 0.0, 	0.0	   					; lfo1 to pitch
	dd 0.0, 	0.0,         0.0, 	  0.0   		; lfo1 to vol
	dd 0.0, 	0.0    						; lfo1 to res
	dd 0.0, 	0.0	   					; lfo2 to pulsewidth
	dd 0.0, 	0.0	       					; lfo2 to cutoff
	dd 0.0								; lfo2 to vol
	dd 0.0								; vel to aeg
	dd 0.0, 	0.0	 					; vel to lfos
	dd 0.0								; vel to osc2 vol
	dd 0.0, 	0.0	 					; vel to cutoff
	dd 0.0								; vel to reso
	dd 0.7								; output gain



;------------------------------------------------------------------------------ ViruZ sound: krass lead

lead2           dd 1,0	  							; seq tempo/groove
	dd 000001800h 					     		; seq basenote
	dd 90								; seq length
	dd 2								; seq steps
	dd pat_long    						; seq pattern
	dd 10					       			; seq portaspd

	dd 0fffff40ch,	0,	     sySO_SAW     			; osc 1
	dd 0fffff3f4h, 010000000h,  sySO_SAW	 			; osc 2
	dd 0,		0,	     sySO_TRIANGLE			; osc 3

	dd 0.01,       0.0,         sySF_HIGH				; vcf 1
	dd 0.01,	0.7,	     sySF_BAND	   			; vcf 2

	dd 0.00002,     0.99997,    0.0,		 0.999999       ; filter eg
	dd 0.001,	0.9993,     0.9,		 0.9993		; amp eg

	dd 000010000h, 040000000h,  syLFO_PULSE|syLFO_FREE		; lfo 1
	dd 000001800h, 000000000h,  syLFO_SAW          		; lfo 2

	dd 1.0								; dist
	dd 0.5, 	0.5, 	     0.5,         0.0	   		; vols
	dd 0.8, 	0.8  						; filter amps

	dd 0.1, 	0.1,         0.0 				; feg to cut1/cut2/pitch
	dd syVIR_SERIAL|syVIR_DISTOUT					; routing
	dd 0.0, 	0.0	   					; lfo1 to pitch
	dd 0.0, 	0.0,         0.0, 	  0.0   		; lfo1 to vol
	dd 0.0, 	0.0    						; lfo1 to res
	dd 0.0, 	0.0	   					; lfo2 to pulsewidth
	dd 0.0, 	0.0	       					; lfo2 to cutoff
	dd 0.0								; lfo2 to vol
	dd 0.0								; vel to aeg
	dd 0.0, 	0.0	 					; vel to lfos
	dd 0.0								; vel to osc2 vol
	dd 0.00, 	0.0	 					; vel to cutoff
	dd 0.0								; vel to reso
	dd 0.8								; output gain
