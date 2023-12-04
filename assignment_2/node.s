	.file	"node.cpp"
	.text
	.section	.text$_ZN6TicketC1ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	__ZN6TicketC1ERKS_
	.def	__ZN6TicketC1ERKS_;	.scl	2;	.type	32;	.endef
__ZN6TicketC1ERKS_:
LFB2557:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	8(%ebp), %eax
	movl	(%eax), %edx
	movl	-12(%ebp), %eax
	movl	%edx, (%eax)
	movl	8(%ebp), %eax
	movl	4(%eax), %edx
	movl	-12(%ebp), %eax
	movl	%edx, 4(%eax)
	movl	-12(%ebp), %eax
	addl	$8, %eax
	movl	8(%ebp), %edx
	addl	$8, %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
	subl	$4, %esp
	movl	8(%ebp), %eax
	movl	32(%eax), %edx
	movl	-12(%ebp), %eax
	movl	%edx, 32(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE2557:
	.text
	.align 2
	.globl	__ZN4nodeC2E6Ticket
	.def	__ZN4nodeC2E6Ticket;	.scl	2;	.type	32;	.endef
__ZN4nodeC2E6Ticket:
LFB2561:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZN6TicketC1ERKS_
	subl	$4, %esp
	movl	-12(%ebp), %eax
	movl	$0, 36(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE2561:
	.globl	__ZN4nodeC1E6Ticket
	.def	__ZN4nodeC1E6Ticket;	.scl	2;	.type	32;	.endef
	.set	__ZN4nodeC1E6Ticket,__ZN4nodeC2E6Ticket
	.section .rdata,"dr"
__ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
__ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
__ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-mcf-seh, built by Brecht Sanders) 13.2.0"
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_;	.scl	2;	.type	32;	.endef
