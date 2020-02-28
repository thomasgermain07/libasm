			global		_ft_strcmp
			section		.text
_ft_strcmp:
			mov			rcx, -1

start:
			inc			rcx
			mov			al, byte [rdi + rcx]
			cmp			byte [rsi + rcx], al
			je			start
			sub			al, [rsi + rcx]

return:
			ret
