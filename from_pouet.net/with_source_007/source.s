	;; <lime> I AM THIRSTY FOR BLOOD
	;; <teh_poser> AND BY BLOOD YOU MEAN SEX M I RITE
	;; posercummers(tm)

	mov ax, 13h
	int 10h
	les bp, [bx]
loop1:
	adc di, ax
	dec al
	stosb
	jmp loop1
