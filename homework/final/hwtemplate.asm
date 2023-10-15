;		Name: Spencer Owens
;		Class: F23 CS F301
; 	Date Created: 2023-10-11
; 	Date Updated: 2023-10-11
;		Program Name: calendar.asm
;		Program Function: 


section .data

section .text
	global _start

partZero:
	; Pre Code


	jmp programTerminate

_start:
	jmp partZero

programTerminate:
	mov rax, 60 ; syscall number for exit
	xor rdi, rdi ; exit code 0
	syscall