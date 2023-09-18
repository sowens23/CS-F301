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
	newline db 0xA ; ASCII value for newline

section .text
	global _start

partZero:
	mov rax, 5 ; rax is typical scratch register
	;ret

	jmp programTerminate

partOne:
	mov rax, 2
	add rax, 2 ; add two
	;ret

	jmp programTerminate

partTwo:
	mov rax, rdi ; rdi is typical input register
	add rax, 2
	;ret

	jmp programTerminate

partThree:
	mov rax, rdi
	cmp rax, 4 ; Is rax greater than 4
	jg endFunc
	add rax, 2
	;ret

	endFunc:
		;ret

	jmp programTerminate

partFour:
	; Print_Long is not available here.
	mov rax, rdi ; I hope to return this
	push rax ; save it on the stack (also aligns the stack)
	add rdi, 5 ; Function argument takes input and adds 5
	;extern print_long ; define external function
	;call print_long ; Call function with rdi 
	pop rax
	;ret

	jmp programTerminate

partFive:
	; Available scratch registers: rcx(x), rdx(), rsi(), rdi()
	; extern print_long ; define external function

	; for(int i=0; i<=10, i++) {
		mov rcx, 1 ; Loop counter
		jmp checkLoop5
	loopStart5:
		mov rdi, rcx ; Call function with rcx value
		push rcx ; Maintain loop counter, and align stack
		; call print_long ; Call function with rdi 
		pop rcx
		add rcx, 1;
	checkLoop5:
		cmp rcx, 10
		jle loopStart5
	; }
	; ret

	jmp programTerminate

partSix:
	; your assembly code here!
	; Available scratch registers: rcx(x), rdx(), rsi(), rdi()
	; extern print_long ; define external function

	; for(int i=0; i<=ah, i++) {
		mov rcx, 1 ; Loop counter
		mov rdx, rdi ; Loop condition
		jmp checkLoop6
	loopStart6:
		mov rdi, rcx ; Call function with rcx value
		push rcx ; Maintain loop counter, and align stack
		push rdx
		push rsi ; align stack?
		; call print_long ; Call function with rdi 
		pop rsi ; align stack?
		pop rdx
		pop rcx
		add rcx, 1;
	checkLoop6:
		cmp rcx, rdx
		jle loopStart6
	; }
	; ret

	jmp programTerminate

_start:
	jmp partZero

programTerminate:
	mov rax, 60 ; syscall number for exit
	xor rdi, rdi ; exit code 0
	syscall