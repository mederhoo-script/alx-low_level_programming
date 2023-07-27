	section .data
	hello_msg db 'Hello, Holberton', 0 ; C string needs 0
	fmt db '%s', 10, 0		   ; The printf format, "\n", '0'

	section .text
	global main		; the standard gcc entry point

	extern printf

main:				; the program label for the entry point
	push rbp		; set up stack frame, must be aligned

	mov rdi, fmt	; Load format string address into rdi (1st argument for printf)
	mov rsi, hello_msg	; Load message string address into rsi (2nd argument for printf)
	xor rax, rax	; Clear rax to indicate no floating-point arguments (printf uses xmm registers)
	call printf	; Call C function printf

	pop rbp		; restore stack

	mov rax, 0		; normal, no error, return value
	ret			; return
