global	_ft_read
section .text

ft_read:
	jmp 		start

start:
	mov 		rax, 0x02000003
	syscall
	jc 		error
	jmp 		return

error:
	mov 		rax, -1
	jmp 		return

return:
	ret
		
