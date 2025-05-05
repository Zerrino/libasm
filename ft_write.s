bits 64
default rel

section .text
        global  ft_write
        extern  __errno_location

null_handler:
                sub             rsp, 8
                call    __errno_location  wrt ..plt
                add             rsp, 8
				mov  			dword [rax], 22
                mov             rax, -1
                ret

ft_write:
                cmp             rsi, 0
                je              null_handler
                mov     		rax, 1
        syscall
                jae             ft_ret
                mov             r8d, eax
				neg				r8d
                sub             rsp, 8
                call    __errno_location  wrt ..plt
                add             rsp, 8
                mov             dword [rax], r8d
                mov             rax, -1
ft_ret:
                ret
