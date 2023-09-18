;		Name: Spencer Owens
;		Class: F23 CS F301
; 	Date: 2023-
;		Program Name: hw.asm
;		Program Function: 
;			6 Part Assignment running through basic Assembly functionality
;				0) 
;				1) 
;				2) 
;				3) 
;				4) 
;				5) 
;				6) 

section .data

section .text
	global _start

partZero:
	; Pre Code


	jmp programTerminate

partOne:
	; Pre Code


	jmp programTerminate

partTwo:
	; Pre Code


	jmp programTerminate

partThree:
	; Pre Code


	jmp programTerminate

partFour:
	; Pre Code


	jmp programTerminate

partFive:
	; Pre Code


	jmp programTerminate

partSix:
	; Pre Code


	jmp programTerminate

_start:
	jmp partZero

programTerminate:
	mov rax, 60 ; syscall number for exit
	xor rdi, rdi ; exit code 0
	syscall