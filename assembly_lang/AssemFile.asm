	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	leaq	L_.str(%rip), %rdi
	leaq	-8(%rbp), %rax
	movl	$0, -4(%rbp)
	movl	$25, -8(%rbp)
	movq	%rax, -16(%rbp)
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rax
	movl	(%rax), %esi
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movb	$0, %al
	callq	_printf
	xorl	%edx, %edx
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movl	%edx, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"*pInt = %d, iRef = %d/n"


.subsections_via_symbols
