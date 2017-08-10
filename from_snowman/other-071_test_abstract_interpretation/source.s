/* gcc -m32 -nostdlib -o ../071_test_abstract_interpretation 071_test_abstract_interpretation.s */

movl $0x11223344, %eax
movw (%ebx), %ax
andw $0x00ff, %ax
movb $0x55, %al
addb $0x11, %al
movl %eax, (%ebx)
