	.arch armv8-a
	.file	"hello.c"
	.text
	.align	2
	.p2align 3,,7

	.global	modify1
modify1:
	fmov	d0, #0.75

	#dup	v0.2d, v0.d[0]
	ins	v0.d[1], v0.d[0]
	str	q0, [x2]
	
	fmov 	x3, V0.D[1]
	str	x3, [x0]

	fmov	x3, d0
	str	x3, [x1]

	mov	x0, xzr	
	ret

        .global modify2
modify2:
        fmov    s0, #0.75

        dup    v0.4s, v0.s[0]
        str     q0, [x2]

        fmov    x3, V0.D[1]
        str     x3, [x0]

        fmov    x3, d0
        str     x3, [x1]

	mov	x0, xzr
        ret

        .global modify3
modify3:
	mov	w3, #123
	UCVTF 	S0, w3
	mov	w3, #456
	UCVTF	s1, w3
        mov     w3, #789
        UCVTF   s2, w3
        mov     w3, #543
        UCVTF   s3, w3

	ins     v0.s[1], v1.s[0]
	ins	v0.s[2], v2.s[0]
	ins	v0.s[3], v3.s[0]

        mov     w3, #100
        UCVTF   s1, w3
	dup    v1.4s, v1.s[0]

	fdiv	v0.4s, v0.4s, v1.4s

        str     q0, [x2]

        fmov    x3, V0.D[1]
        str     x3, [x0]

        fmov    x3, d0
        str     x3, [x1]

	mov	x0,xzr
        ret


        .global modify4
modify4:
        mov     w3, #123
        UCVTF   S0, w3
        mov     w3, #456
        UCVTF   s1, w3
        mov     w3, #789
        UCVTF   s2, w3
        mov     w3, #543
        UCVTF   s3, w3

        ins     v0.s[1], v1.s[0]
        ins     v0.s[2], v2.s[0]
        ins     v0.s[3], v3.s[0]

        mov     w3, #100
        UCVTF   s1, w3
        dup    v1.4s, v1.s[0]

        fdiv    v0.4s, v0.4s, v1.4s

	mov	w3, #2
	fmov	s1, w3
	dup    	v1.16b, v1.16b[0]
	add	v0.16b, v0.16b, v1.16b

        str     q0, [x2]

        fmov    x3, V0.D[1]
        str     x3, [x0]

        fmov    x3, d0
        str     x3, [x1]

	mov	x0,xzr
        ret



        .global cmp_bytes
cmp_bytes:
        adrp    x3, input1
        add     x3, x3, :lo12:input1

        adrp    x4, input2
        add     x4, x4, :lo12:input2

	ldr	q0, [x3]
	ldr	q1, [x4]

	cmeq   	v0.16b, v1.16b, v0.16b

        str     q0, [x2]

        fmov    x3, V0.D[1]
        str     x3, [x0]

        fmov    x3, d0
        str     x3, [x1]

	mov	x0,xzr
        ret






        .section        .rodata
        .align  3
	.global input1
	.global input2
input1:
        .string "Lorem Ipsum is simply dummy text of the printing \0"
        .align  3
input2:
	.string "LoRem iPSUM is simply dummy text of the printing \0"

