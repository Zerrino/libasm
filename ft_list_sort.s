bits 64
default rel

section .text
		global	ft_list_sort
;void	ft_list_sort(t_list **, int (*cmp)());



ft_list_sort:
	push	rbp
	mov		rbp, rsp
	test	rdi, rdi
	je		ft_end
	test	rdx, rdx
	je		ft_end

ft_end:
	pop		rbp
	ret
