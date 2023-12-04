	.file	"sumofnatural.c"
	.text
	.globl	_sumOfNaturalNumbers
	.def	_sumOfNaturalNumbers;	.scl	2;	.type	32;	.endef
_sumOfNaturalNumbers:
LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	addl	$1, %eax
	imull	8(%ebp), %eax
	sarl	%eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE0:
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-mcf-seh, built by Brecht Sanders) 13.2.0"
