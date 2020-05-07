global	ft_strcmp
section	.text

ft_strcmp:
	mov		rcx, -1
	jmp 		start

start:
	inc		rcx
	mov 		al, [rdi + rcx]
	cmp 		al, 0x00
	je 		neg
	cmp		byte[rsi + rcx], 0x00
	je		pos
	cmp		al, [rsi + rcx]
	je 		start
	jg 		pos
	jnge		neg

pos:
	mov 		rax, 0x01
	ret

neg:
	cmp		byte[rsi + rcx], 0x00
	je		return
	mov 		rax, 0xFFFFFFFFF
	ret

return:
	mov 		rax, 0x00
	ret
