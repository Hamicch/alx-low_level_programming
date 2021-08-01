section .data
	msg: db "Hello, Holberton",0x0a
	msglen equ $-msg

section .text
	global main

main:
	; write HelloHolberton to screen
	mov eax, 1 ; syscall for write
	mov edi, 1
	mov ecx, msg
	mov edx, msglen
	syscall
	mov eax, 60
	mov ebx, 1
	syscall
