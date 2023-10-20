section .data
ower_string db "Hello, Holberton",10  ; The string to print (with newline character)

section .text
global main

main:
; Write "Hello, Holberton" follwed by new line to stdout
mov rax, 1          ; syscall number for sys_write
mov rdi, 1          ; file descriptor 1 (stdout)
lea rsi, [rel ower_string] ; pointer to the string to print
mov rdx, 17         ; length of the string
syscall             ; invoke syscall

; Exit the program
mov rax, 60         ; syscall number for sys_exit
xor rdi, rdi        ; return code 0
syscall             ; invoke syscall
