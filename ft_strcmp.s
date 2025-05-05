bits 64
default rel

section .text
        global  ft_strcmp

; rdi rsi
ft_strcmp:

		test	rdi, rdi
		je ft_ret
		test	rsi, rsi
		je ft_ret
		mov		rcx, -1
		push	rdi
		repne	scasb
		pop		rdi
		not		rcx
		repe	cmpsb
		movzx	eax, byte [rdi - 1]
		movzx	ebx, byte [rsi - 1]
		sub		eax, ebx
ft_ret:
	ret
