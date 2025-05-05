bits 64
default rel

section .text
        global  ft_strlen

ft_strlen:
		xor		al, al
		test	rdi, rdi
		je ft_ret
		mov		rcx, -1
		repne	scasb
		mov		rax, -2
		sub		rax, rcx

ft_ret:
		ret

