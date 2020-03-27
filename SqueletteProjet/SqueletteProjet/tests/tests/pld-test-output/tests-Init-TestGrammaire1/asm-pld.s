.text
.globl	main
main:
 pushq	%rbp
 movq	%rsp, %rbp
 movl	 $17,-4(%rbp)
 movl	 $18,-8(%rbp)
  movl  -4(%rbp), %edx
 movl  -8(%rbp), %eax
  imull	%edx, %eax
 popq	%rbp
 ret
