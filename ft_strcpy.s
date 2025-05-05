bits 64
default rel

section .text
        global  ft_strcpy

; rdi rsi
ft_strcpy:
	mov		rax, rdi
	test	rdi, rdi
	jz		ft_ret
	test	rsi, rsi
	jz		ft_ret
	push	rdi
	mov		rdi, rsi
	xor		al, al
	mov		rcx, -1
	repne	scasb
	not		rcx
	pop		rdi
	push	rdi
	rep		movsb
	pop		rdi
	mov		rax, rdi
ft_ret:
		ret
