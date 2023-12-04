	.file	"show_byte.c"
	.text
	.section .rdata,"dr"
LC0:
	.ascii "Size of %s: %lu bytes\12\0"
	.text
	.globl	_show_byte
	.def	_show_byte;	.scl	2;	.type	32;	.endef
_show_byte:
LFB119:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE119:
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-mcf-seh, built by Brecht Sanders) 13.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
