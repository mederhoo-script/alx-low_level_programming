	section .data
	hello_msg db 'Hello, Holberton', 10, 0 ; 10 is the newline character, 0 is the null terminator
	format db '%s', 0

	section .text
	global main

	extern printf

main:
	;;  Set up the stack frame (not necessary for this simple program)
	push rbp
	mov rbp, rsp

	;;  Call printf to print the message
	lea rdi, [hello_msg] ; Load address of hello_msg into rdi (1st argument for printf)
	lea rsi, [format]	; Load address of format string into rsi (2nd argument for printf)
	xor rax, rax	; Clear rax to indicate no floating-point arguments (printf uses xmm registers)
	call printf	; Call the printf function

	;;  Clean up and return
	mov rsp, rbp
	pop rbp
	ret
