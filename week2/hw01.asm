;		Name: Spencer Owens
;		Class: F23 CS F301
; 	Date: 2023-Sep-06
;		Program Name: hw01.asm
;		Program Function: 
;			6 Part Assignment running through basic Assembly functionality
;				0) Return 5
;				1) Add 2+2 
;				2) Input 10, add two, ret
;				3) If input is less than 5, add two and return
;				4) 
;				5) 
;				6) 

section .data

section .text
	global _start


partZero:
	mov rax, 5 ; rax is typical scratch register
	ret

partOne:
	mov rax, 2
	add rax, 2 ; add two
	ret

partTwo:
	mov rax, rdi ; rdi is typical input register
	add rax, 2
	ret

partThree:
		mov rax, rdi
		cmp rax, 4 ; Is rax greater than 4
		jg endFunc
		add rax, 2

	endFunc:
		ret

main:
	jmp partOne



