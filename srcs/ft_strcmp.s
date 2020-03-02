			global		_ft_strcmp
			section		.text
_ft_strcmp:
			mov			rcx, -1
			jmp			start

diff_pos:
			sub			al, [rsi + rcx]
			jmp			return

diff_neg:
			sub			al, [rsi + rcx]
			neg			al
			neg			rax
			jmp			return

start:
			inc			rcx
			mov			al, [rdi + rcx]
			cmp			byte [rdi + rcx], 0
			je			diff_neg
			cmp			byte [rsi + rcx], 0
			je			diff_pos
			cmp			al, [rsi + rcx]
			je			start
			jg			diff_pos
			jnge		diff_neg

return:
			ret
