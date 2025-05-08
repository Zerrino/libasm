bits 64
default rel

section .text
global  ft_strdup
extern  malloc

; RDI
ft_strdup:
	push	rbp
	mov		rbp, rsp
	xor		eax, eax
	test	rdi, rdi
	jz		ft_ret
	mov		rcx, -1
	push	rdi
	repne	scasb
	not		rcx
	mov		rdi, rcx

	push	rcx
	sub		rsp, 8
	call	malloc	wrt ..plt
	add		rsp, 8
	pop		rcx

	test	rax, rax
	jz		ft_ret
	mov		rdi, rax
	pop		rsi
	rep		movsb
ft_ret:
	pop		rbp
	ret
