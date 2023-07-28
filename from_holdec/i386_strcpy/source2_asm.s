	.file	"source.c"
	.text
	.p2align 4
	.globl	mystrcpy
	.type	mystrcpy, @function
mystrcpy:
.LFB11:
	pushl	%edi
	pushl	%edx
	subl	$12, %esp
	movl	24(%esp), %edx
	movl	28(%esp), %edi
   	or     $0xffffffff,%ecx
   	xor    %eax,%eax
   	repnz scas %es:(%edi),%al
   	not    %ecx
   	sub    %ecx,%edi
  	mov    %edi,%esi
   	mov    %ecx,%eax
   	mov    %edx,%edi
   	shr    $0x2,%ecx
   	rep movsl %ds:(%esi),%es:(%edi)
   	mov    %eax,%ecx
   	and    $0x3,%ecx
   	rep movsb %ds:(%esi),%es:(%edi)
	addl	$12, %esp
   	xor    %eax,%eax
	popl	%edx
	popl	%edi
	ret
.LFE11:
	.size	mystrcpy, .-mystrcpy
