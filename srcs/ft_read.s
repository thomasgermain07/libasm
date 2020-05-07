	global		ft_read
	section 	.text

ft_read:
	jmp 		start

start:
	mov 		rax, 0
	syscall
	cmp		rax, 0
	jl		error
	ret

error:
	mov		ecx, 0
	mov		rax, -1
	ret
