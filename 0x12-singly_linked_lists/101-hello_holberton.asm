global main

section .text

main:
mov rax, 1
mov rdi, 1
mov rsi, txt
mov rdx, txtlen
syscall

mov rax, 60
mov rdi, 0
syscall           ;

section .rodata
txt: db "Hello, Holberton", 10
txtlen: equ $ - txt