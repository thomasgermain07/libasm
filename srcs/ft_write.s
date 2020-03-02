			global		_ft_write
			extern		_ft_strlen

			section		.text
_ft_write:
			call		_ft_strlen
			mov			rdx, rax
			mov			rsi, rdi
			mov			rdi, 1
			mov			rax, 0x02000004
			syscall

return:
			ret

