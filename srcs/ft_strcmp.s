global	ft_strcmp
section	.text

ft_strcmp:
	mov			rcx, -1

start:
	inc			rcx
	mov 		al, [rdi + rcx]
	cmp 		al, 0
	je 			neg
	cmp			byte[rsi + rcx], 0
	je			pos
	cmp			al, [rsi + rcx]
	je 			start
	jg 			pos
	jnge		neg

pos:
	sub			al, byte [rsi + rcx]
	ret

neg:
	cmp			byte[rsi + rcx], 0
	je			return
	sub			al, byte [rsi + rcx]
	neg			al
	neg			rax
	ret

return:
	mov 		rax, 0
	ret
