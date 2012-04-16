ilosc_nut = 256
odleglosc_pomiedzy_nutami = 44100/7
generator_nut_kroki = 85

;
;generator nut powinien byc ustaiwany w nastepujacy sposob
; n - glebokosc generacji
;
; genertor_nut_kroki = (1 - 4^n)/(1-4)
;
; tak ustawiony generator wygeneruje dokladnie 4^n nut
; ktore ustawiamy w zmiennej ilosc_nut
;

sample_rate = 44100
sample_number = ilosc_nut*odleglosc_pomiedzy_nutami
bits_per_sample = 16
file_size = (sample_number * bits_per_sample)/8 + 44

;----------sekcja instrumentalna-------------
macro brzdek {
;dwa parametry:
;bl - dlugosc struny (0-255)
;bp - adres struny
;zwraca probke dzwieku (0.0 - 1.0)
;
;zmieniane rejestry (przy wylaczonym
;                    odkladniu na stos):
; - si
; - ax
; - bx
	pusha
	mov	si, word [bp]
	mov	ax, si

	shl	si, 2
	fld	dword [bp + 4 + si]	;y[n-1]
	;shr	si, 2
		

	;add	ax, 4
	inc	ax
	div	bl
	movzx	si, ah
	mov	word [bp], si

	shl	si, 2
	fsub 	dword [bp + 4 + si]	;y[n-1]-x[n]
	fidiv	word [alfa]			;(y[n-1]-x[n])/2
	fst	dword [bp + 4 + si]
	;shr	si, 2

	popa	

}
;------------------- generator melodii----------
macro melodia_gen {

	;xor	si, si		;nie ma potrzeby zerowac si
				;bo juz jest wyzerowane
				;po poprzedniej operacji.
				;w przeciwnym razie trzeba zerowac!!
	mov	cx, generator_nut_kroki
anna:
	
	movzx	di, byte [linia_melodyczna+si]
	shl	di, 2
	mov	bp, si
	shl	bp, 2
	inc	bp
	fld	dword [opis+di]
	fstp	dword [linia_melodyczna+bp]
	inc	si
	
	loop	anna

}

;----------koniec sekcji instrumentalnej--------


	org	100h
	use16

	;czyscimy tube
	mov	si, 1000*4*3+1000
ala:	
	dec	si
	mov	byte [linia_melodyczna+si], 0
	jnz	ala


	;to makro musi byæ tutaj !!
	;poniewa¿ w tym miejscu rejestr si jest
	;rowny zero, to jest potrzebne w dzialaniu
	;makra. Ach ta obptymalizaja miejsca. :)
	melodia_gen


	mov	ah, 3ch
	mov	dx, nazwa
	xor	cx, cx
	int	21h


	mov	[uchwyt], ax
	mov	bx, ax

	;zapis naglowka wav
	mov	dx, head
	mov	cx, 44
	call	zapis_do_pliku



	;================
	;poczatek kodu
	


	mov	di, linia_melodyczna + generator_nut_kroki
	mov	cx, ilosc_nut
main:

	;pobudzenie struny
	test	byte [di], 1
	jz	bez_pobudzenia
	fld1
	fst	[string+4]
	fst	[string3+4*2]
	fstp	[string2+4*3]
	
bez_pobudzenia:


	pusha
	;szarpniecie struny
	mov	cx, odleglosc_pomiedzy_nutami
	szarpniecie:

		;ladowanie nutki
		mov	bl, [di]
		inc	bx
		shl	bl, 6
		dec	bx

		;------ ulepszenie-------
		pusha
		fldz
		mov	bp, string
		mov	cx, 3
		process:
			;call	brzdek
			brzdek
			add	bp, 1000*4
			shr	bl, 1
			faddp	
			loop	process
		;popa
		;------- ulepszenie------

	
		;normalizacja
		fimul	[beta]
		fistp	word [temp]

		;zapis probki dzwieku
		;pusha
		mov	dx, temp
		mov	cx, 2
		call	zapis_do_pliku
		popa


		loop	szarpniecie

	popa

	;nastepna nutka
	inc	di

	loop	main
	


	;int	20h	;koniec
	ret

;------------funkcje pomocnicze--------------
zapis_do_pliku:
;dwa parametry
;cx - ilosc bajtow do zapisania
;dx - adres kontentera danych

	mov	ah, 40h
	mov	bx, [uchwyt]
	int	21h
	ret





;---------------------dane-------------------
nazwa	db "a.wav",0
beta	dw 32000
alfa	dw 2		;wsp. tlumienia

;mamy 10 rozny nut. falowod o dlugosci ponizej 45
;nie daje ciekawego brzmienia.
;nuty mozna obliczyc stosujac wzor
; nuta[n] = 255 * 0.84^n
;
; 254, 214, 179, 151, 126
; 106, 89,  75,  63,  53
;
;nuty parzyste sa bezdzwieczne
;nuty nieparzyste sa dzwieczne
;
;melodia	db 253
;	db 213
;	db 179
;	db 151
;	db 127
;	db 105
;	db 89
;	db 73
;	db 63
;	db 53


;--------------opis melodi-------------------
opis	db 1, 2, 0, 1
	db 0, 1, 2, 3
	db 3, 2, 1, 0
	db 0, 1, 3, 0


;-----------------------pliczek--------------
head	db "RIFF"
	dd file_size-8	;file size
	db "WAVE"
	db "fmt "
	dd 16		;chunkt size
	dw 1		;format
	dw 1		;chanels
	dd sample_rate	;sample freq
	dd sample_rate*bits_per_sample/8	;bytes per second
	dw 2		;bytes per sample
	dw bits_per_sample
	db "data"
	dd sample_number*bits_per_sample/8

;-----------------dodatki---------------------
temp	rw 1
uchwyt	rw 1

;-----------------linia melodyczna------------
linia_melodyczna rb 1000	

;-------------instrumenty fizyczne-----------
string	rd 1000
string2	rd 1000
string3 rd 1000