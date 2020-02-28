			global		_ft_strcpy

			section		.text
_ft_strcpy:
			mov			rcx, 0

increm:
			mov			al, byte [rsi + rcx]
			mov			byte[rdi + rcx], al
			inc			rcx

start:
			cmp			byte [rsi + rcx], 0
			jne			increm
			mov			al, byte [rsi + rcx]
			mov			byte[rdi + rcx], al

return:
			mov			rax, rdi
			ret
