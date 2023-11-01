;		Name: Spencer Owens
;		Class: F23 CS F301
; 	Date: 2023-Sep-17
;		Program Name: hw02.asm
;		Program Function: 
;			6 Part Assignment running through basic Assembly stack and loop functionality
;				0) Return the popped number
;				1) Two numbers have been popped, return the 1st popped number
;				2) Using print_long, print the number 5
;				3) Using the input, add 5 to it, and print it using print_long, then return 0
;				4) Using the input, add 5, print result, then return the original input integer
;				5) Print numbers 1 through 10 using print_long and a loop, you'll need to utilize the stack here
;				6) Using the input, print the number 1, to the input integer using a loop and the stack. If input is 0, or negative, print nothing.

section .data

section .text
	global _start

partZero:
	; Pre Code 
	push 5
	; Your assembly code here!
	pop rax
	;ret

	jmp programTerminate

partOne:
	; Pre Code
	push 7
	push 3
	; Your assembly code here!
	pop rax
	pop rsi
	;ret

	jmp programTerminate

partTwo:
	; Pre Code
	; Use predefined function print_long to print integer 5, you need to align the stack and clean it up afterwards
	; your assembly code here!
	mov rax, 0 ; I hope to return this
	push rax ; save it on the stack (also aligns the stack)
	mov rdi, 5 ; function argument for print_long
	; print_long does not work here.
	;extern print_long
	;call print_long ; CAUTION: print_long trashed rax!
	pop rax
	;ret

	jmp programTerminate

partThree:
	; Pre Code
	mov rdi, 5
	; your assembly code here!
	mov rax, 0 ; I hope to return this
	push rax ; save it on the stack (also aligns the stack)
	add rdi, 5 ; Function argument takes input and adds 5
	; print_long does not work here.
	;extern print_long ; define external function
	;call print_long ; Call function with rdi 
	pop rax
	;ret

	jmp programTerminate

partFour:
	; Pre Code
	mov rdi, 3
	; your assembly code here!
	mov rax, rdi ; I hope to return this
	push rax ; save it on the stack (also aligns the stack)
	add rdi, 5 ; Function argument takes input and adds 5
	;extern print_long ; define external function
	;call print_long ; Call function with rdi 
	pop rax
	;ret

	jmp programTerminate

partFive:
	; Pre Code
	; your assembly code here!
	; Available scratch registers: rcx(x), rdx(), rsi(), rdi()
	;extern print_long ; define external function

	; for(int i=0; i<=10, i++) {
		mov rcx, 1 ; Loop counter
		jmp checkLoop5
	loopStart5:
		mov rdi, rcx ; Call function with rcx value
		push rcx ; Maintain loop counter, and align stack
		;call print_long ; Call function with rdi 
		pop rcx
		add rcx, 1;
	checkLoop5:
		cmp rcx, 10
		jle loopStart5
	; }
	;ret

	jmp programTerminate

partSix:
	; Pre Code
	mov rdi, 3
	; your assembly code here!
	; Available scratch registers: rcx(x), rdx(), rsi(), rdi()
	;extern print_long ; define external function

	; for(int i=0; i<=ah, i++) {
		mov rcx, 1 ; Loop counter
		mov rdx, rdi ; Loop condition
		jmp checkLoop6
	loopStart6:
		mov rdi, rcx ; Call function with rcx value
		push rcx ; Maintain loop counter, and align stack
		push rdx
		push rsi ; align stack?
		;call print_long ; Call function with rdi 
		pop rsi ; align stack?
		pop rdx
		pop rcx
		add rcx, 1;
	checkLoop6:
		cmp rcx, rdx
		jle loopStart6
	; }
	;ret

	jmp programTerminate

_start:
	jmp partZero

programTerminate:
	mov rax, 60 ; syscall number for exit
	xor rdi, rdi ; exit code 0
	syscall