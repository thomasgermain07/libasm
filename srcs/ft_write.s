	global		ft_write
	extern 		__errno_location
	section		.text

ft_write:
	jmp 		start

start:
	mov 		rax, 1
	syscall
	cmp 		rax, 0
	jl 		error
	ret

error:
	neg		rax
	mov		rdx, rax
	call 		__errno_location
	mov		[rax], rdx
	mov		rax, -1
	ret
