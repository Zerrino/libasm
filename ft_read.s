bits 64
default rel

section .text
        global	ft_read
		extern	__errno_location

ft_read:
                xor		rax, rax
                syscall
                jae		ft_ret
                mov		r8, rax
                sub		rsp, 8
                call	__errno_location  wrt ..plt
                add		rsp, 8
				neg		r8
                mov		[rax], r8
                mov		rax, -1
ft_ret:
                ret
