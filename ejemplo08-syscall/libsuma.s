

.global suma
.text

suma:
	add %rsi, %rdi  # rdi = rdi + rsi
	mov %rdi, %rax  #rax = rdi
	ret
