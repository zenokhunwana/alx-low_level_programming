section .data
    hello db 'Hello, Holberton',0

section .text
    extern printf, exit

    global main

main:
    ; Call printf
    mov rdi, hello
    call printf

    ; Exit the program
    mov edi, 0
    call exit

