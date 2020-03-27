.text
.globl	main
main:
 pushq	%rbp
 movq	%rsp, %rbp
 movl $8, %eax
 popq	%rbp
 ret
