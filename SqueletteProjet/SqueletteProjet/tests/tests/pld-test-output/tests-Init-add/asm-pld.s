.text
.globl	main
main:
 pushq	%rbp
 movq	%rsp, %rbp
 movl	 $3,-4(%rbp)
  movl  -4(%rbp), %eax
 addl	$4, %eax
 movl	 %eax,-8(%rbp)
 movl $0, %eax
 popq	%rbp
 ret
