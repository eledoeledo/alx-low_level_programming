; My comments: It is so fun to write in assembly language
; File: 101-hello_holberton.asm
; Auth: Cyrille Emery ESSOU
; Desc: 64-bit assembly program that prints
; Holberton followed by a new line

extern printf

section .text
	global main

main:
	push rbp

	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf

	pop rbp
	
	mov rax,0
	ret

section .data
	msg: db "Hello, Holberton", 0, 0
	fmt: db "%s", 10, 0
