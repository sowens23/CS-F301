;		Name: Spencer Owens
;		Class: F23 CS F301
; 	Date: 2023-Sep-17
;		Program Name: hw03.asm
;		Program Function: 
;			6 Part Assignment running through basic Assembly functionality
;				0) I've set rdx equal to point to an 8-byte value in memory. Read the value from memory
;				1) Using a pointer label "somePointer", move the pointer into a register, then return the value from memory
;				2) Register rcx is loaded with a pointer to a function, call that function via the pointer
;				3) Using a string declared 'theString' which prints code, move the string pointer by 4 bytes so it prints "the right answer." without modifying the string
;				4) Use assembly to print 'Hello, world!' and a new line using 'puts'
;				5) Pointer address [theAnswers] has two 8-byte values stored, return the first
;				6) Using input values of 0's, and 1's. Return the one of two 64-bit values loaded into pointer [theAnswers]. First value if input is 0, and second value if input is 1

section .data

section .text
	global _start

partZero:
	; Pre Code
	; Your code here!
	;mov rax, [rdx]
	;ret

	jmp programTerminate

partOne:
	; Pre Code
	; Your code here!
	;mov rdx, somePointer
	;mov rax, [somePointer]
	;ret

	jmp programTerminate

partTwo:
	; Pre Code
	; Your code here!
	;call rcx
	;ret

	jmp programTerminate

partThree:
	; Pre Code
	;mov rdi, theString+4
	;extern puts
	;call puts
	;ret

	jmp programTerminate

partFour:
	; Pre Code
	; Your I/O assembly code here!
	;extern puts
	mov rdi, callString
	;call puts
	;ret

	callString:
		;dq `Hello, world!`, 0

	jmp programTerminate

partFive:
	; Pre Code
	; Your code here!
	;mov rax, [theAnswers]
	;ret

	jmp programTerminate

partSix:
	; Pre Code
	; Your code here (rdi = input array index, 0 or 1)
	;mov rax, [theAnswers + rdi * 8]
	;ret

	jmp programTerminate

_start:
	jmp partZero

programTerminate:
	mov rax, 60 ; syscall number for exit
	xor rdi, rdi ; exit code 0
	syscall