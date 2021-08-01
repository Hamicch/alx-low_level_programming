section .data
	greeting: db "Hello, Holberton",0x0a

section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, [greeting] ; Array to write
	mov rdx, 17 ; Write 17 bytes
	syscall
	mov rax, 60 ; 60 is exit
	mov rdi, 0
	syscall
