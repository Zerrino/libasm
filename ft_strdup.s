bits 64
default rel

section .text
global  ft_strdup
extern  malloc

; RDI
ft_strdup:
	xor		eax, eax
	test	rdi, rdi
	jz		ft_ret

	mov		r8, rdi
	mov		rcx, -1
	repne	scasb
	not		rcx
	mov		rdi, rcx
	sub		rsp, 8
	call	malloc	wrt ..plt
	add		rsp, 8
	test	rax, rax
	jz		ft_ret
	mov		rdi, rax
	mov		rsi, r8
	rep		movsb

ft_ret:
	ret
