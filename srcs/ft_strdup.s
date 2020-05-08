		global		ft_strdup
		extern		ft_strlen
		extern		malloc
		extern		ft_strcpy
		section		.text

ft_strdup:
		call		ft_strlen
		push		rdi
		inc		rax
		mov		rdi, rax
		call		malloc
		test		eax, eax
		jz		failed
		pop		rdi
		mov		rsi, rdi
		mov		rdi, rax
		call		ft_strcpy
		ret

failed:
		mov		rax, 0
		pop		rdi
		ret
