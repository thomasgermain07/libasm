			global		_ft_strdup
			extern		_ft_strlen
			extern		_malloc
			extern		_ft_strcpy
			section		.text

_ft_strdup:
			call		_ft_strlen
			push		rdi
			inc			rax
			mov			rdi, rax
			call		_malloc
			test		eax, eax
			jz			failed
			pop			rdi
			mov			rsi, rdi
			mov			rdi, rax
			call		_ft_strcpy
			ret

failed:
			mov			rax, 0
			pop			rdi
			ret
