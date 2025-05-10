bits 64
default rel

section .text
		global	ft_list_remove_if


;ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));
; rdi rsi rdx r10
ft_list_remove_if:
	push	rbp
	push	r15
	push	r14
	push	r13
	push	r12
	push	r11
	mov		rbp, rsp



ft_end:
	pop		r11
	pop		r12
	pop		r13
	pop		r14
	pop		r15
	pop		rbp
	ret
