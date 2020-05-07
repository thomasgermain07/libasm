global	ft_write
section .text
extern __errno_location

ft_write:
	jmp 		start

start:
	mov 		rax, 0x01
	syscall
	cmp 		rax, 0x00
	jl 		error
	ret

error:
	call __errno_location
	ret
