	.file	"power.c"
	.text
	.globl	_isPowerOfTwo
	.def	_isPowerOfTwo;	.scl	2;	.type	32;	.endef
_isPowerOfTwo:
LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp

	cmpl	$0, 8(%ebp)
	je	L2
	movl	8(%ebp), %eax
	subl	$1, %eax
	andl	8(%ebp), %eax
	testl	%eax, %eax
	jne	L2
	movl	$1, %eax
	jmp	L4
L2:
	movl	$0, %eax
L4:
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE0:
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-mcf-seh, built by Brecht Sanders) 13.2.0"
