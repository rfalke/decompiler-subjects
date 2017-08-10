/* gcc -m32 -nostdlib -o ../065_add_minus_one 065_add_minus_one.s */

addl   $-1, (%eax)
subl   $-1, (%eax)
