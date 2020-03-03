			global		_ft_read

			section		.text

_ft_read:
			mov			rax, 0x02000003
			syscall
			jc			failed
			jmp			return

failed:
			mov			rax, -1
			call		return
return:
			ret

