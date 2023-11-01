;		Name: Spencer Owens
;		Class: F23 CS F301
; 	Date: 2023-09-24
;		Program Name: hw04.asm
;		Program Function: 
;			6 Part Assignment running through basic Assembly functionality
;				0) In Assembly, use getchar to return a character. If the char is 'w' then print Hello world, if not print Error.
;				1) In Assmebly, use dq to allocate on elong integer with 5, then print it.
;				2) In Assembly, use dq to allocate two long integers, print them, then return a 0
;				3) In Assembly, use dq to allocate two longs with values 5 and 7, then print them. Then change these values and print again, then return 0
;				4) In Standard C language, allocate 3 bytes, write 5, 7, 11 to the memory then print all three 
;				5) In Standard C language, allocate 24 bytes and load 3 integer values into the pointer, then print all three integer values
;				6) In Assembly language, take an input integer, calculate the factorial of that integer, loading each factorial iteration into it's own byte, then print all results from the same pointer and return n

section .data

section .text
	global _start

partZero:
		;2023_CS301/HW4/0 Homework Instructions: 
			;In assembly, call the C function getchar to read a single letter 
			;from the input. This function's return value is a character in rax. 
			;If the letter is 'w' (0x77), print "Hello, world!", otherwise print 
			;"ERROR: World not found." In either case, return 0.
			
		; Your I/O assembly code here!
		extern getchar ; define external function
		extern puts

		call getchar
		cmp rax, `w`
		jne _Error
		mov rdi, QWORD[myStrings+0]
		call puts 
		mov rax, 0
		ret

		_Error:
			mov rdi, QWORD[myStrings+8]
			call puts 
			mov rax, 0
			ret

		myStrings:
			dq helloWorld
			dq errorWorld

		helloWorld:
			db `Hello, world!`, 0
		errorWorld:
			db `ERROR: World not found.`, 0


	jmp programTerminate

partOne:
		;2023_CS301/HW4/1 Homework Instructions: From assembly, use "dq" to allocate one long integer, 
			;with value 5. Call the NetRun builtin function larray_print to print this 
			;integer as a 1-entry array. In C++, you'd call this like "larray_print(ptr,1);".
			;In assembly, the pointer (the first argument) goes in rdi, and the length 
			;(the second argument) goes in rsi. Finally, return zero.
			
		;Your assembly here
		extern larray_print
		push rbp ; save main's rbp
		;add rsp, 8
		mov rdi, _longValue
		mov rsi, 1
		call larray_print
		;sub rsp, 8
		mov rax, 0
		pop rbp ; save main's rbp
		ret

		_longValue:
			dq 5


	jmp programTerminate

partTwo:
		;2023_CS301/HW4/2 Homework Instructions: From assembly, use "dq" to allocate 
			;two long integers, with values 5 and 7. Call the NetRun builtin function 
			;larray_print to print these integers as a 2-entry array 
			;(i.e., larray_print(ptr,2) ). Finally, return zero.

		;Your assembly here
		extern larray_print
		push rbp ; save main's rbp

		mov rdi, _longValue
		mov rsi, 2
		call larray_print
		mov rax, 0

		pop rbp ; save main's rbp
		ret

		_longValue:
			dq 5
			dq 7

	jmp programTerminate

partThree:
		;Instructions: From assembly, use "dq" to allocate two longs (QWORDs) in 
			;section .data, with values 5 and 7. Call the NetRun builtin function 
			;larray_print to print these integers. Now change the first integer to 4, 
			;and print the array again. Then change the second integer to 2, 
			;and print the array again. Finally, return zero. 
			;(Hint: larray_print trashes scratch registers. To modify things in memory, 
			;"section .data" needs to go after all your code, but before your label or dq.)
			
		;Your assembly here
		extern larray_print
		push rbp ; save main's rbp

		mov rdi, _longValue
		mov rsi, 2
		call larray_print

		mov QWORD[_longValue], 4
		mov rdi, _longValue
		mov rsi, 2
		call larray_print

		mov QWORD[_longValue+8], 2
		mov rdi, _longValue
		mov rsi, 2
		call larray_print

		mov rax, 0
		pop rbp ; save main's rbp
		ret

		section .data
		_longValue:
			dq 5
			dq 7

	jmp programTerminate

partFour:
		//2023_CS301/HW4/4 Homework Instructions: From plain C (not assembly), 
			//call the standard C function malloc to allocate 24 bytes of space (3 longs at 8 bytes each).
			//Treat this space as an array of three long integers, and write 5, 7, and 11 there. 
			//Call the NetRun builtin function larray_print to print the values in this array. 
			//Finally, return zero. (Hint: read the lecture notes!)

		// your C code here
		int len=3;
		long *arr=(long *)malloc(len*sizeof(long));
			arr[0]=5;
			arr[1]=7;
			arr[2]=11;
		long *temp_;

		//printf("%ld", arr[0]); // Test printing to verify array variables.
		//printf("\n");

		larray_print(arr,3);

		free(arr);
		return 0;

	jmp programTerminate

partFive:
		;2023_CS301/HW4/5 Homework Instructions: From assembly, do the same thing: call the 
			;standard C function malloc to allocate 24 bytes of space (3 longs at 8 bytes each). 
			;Treat this space as an array of three longs (QWORD), and write 5, 7, and 11 there, 
			;Call the NetRun builtin function larray_print to print the values in this array. 
			;Finally, return zero.

		; your assembly code here!
			push rbp ; Store stack pointer

		; Declare functions
			extern malloc
			;extern puts
			extern larray_print
			extern free

		; Declare amount of bytes needed to allocate for long array length 3
			mov rdi, 3 ; Number of integers (QWORD - 8 Bytes)
			mov rcx, rdi
			imul rdi, 8 ; # of bytes
			call malloc ; rax is start of new space

		; Set the three longs in array
			mov QWORD[rax+0], 5 ; Set first value at [rax+0]
			mov QWORD[rax+8], 7 ; Set second value at [rax+8]
			mov QWORD[rax+16], 11 ; Set third value at [rax+16]

		; Print array of length 3
			mov rdi, rax ; set start of array
			mov rsi, 3 ; set # of array items to print
			;push rax ; store allocated memory pointer
			;add rsp, 8
			call larray_print
			;sub rsp, 8
			;pop rax

		; Free allocated memory
			;mov rdi, rax
			;call free

		; Restore stack pointer and return 0
			mov rax, 0
			pop rbp ; Restore stack pointer
			ret

	jmp programTerminate

partSix:
		;2023_CS301/HW4/6 Homework Instructions: From assembly, call read_input to read an integer n, 
			;store the factorials from zero to n (inclusive) into an array of QWORDs, 
			;call larray_print to print out all n+1 array elements, and finally return n. 
			;Allocate the array with malloc, and deallocate it with free. The factorial of zero is one.

		; your assembly code here!
			push rbp ; Store stack pointer

		; Declare functions
			extern malloc
			extern larray_print
			extern free
			extern read_input

		; Read input integer
		; Using rcx(input n)
			call read_input
			;mov eax, 4
			movsxd rdi, eax
			;mov rdi, 4
			add rdi, 1 ; Add one to the array, n=4 will have 5 items
			mov rcx, rdi ; n (for factorial, and loop)
			push rcx

		; Declare amount of bytes needed to allocate for long array length 3
			imul rdi, 8 ; # of bytes
			call malloc ; rax is start of new space
			pop rcx

		; Loop start
		; Using rsi(loop counter) and rdx(loop sum)
			mov rsi, 0 ; Loop counter
			mov QWORD[rax+(rsi*8)], 1 ; set first factorial 0 to 1
			cmp rcx, rsi
			jle programEnd
			add rsi, 1 ; Add 1 to loop counter
			jne loopCondition ; If n > 0 jump to loop condition
		loopStart:
			; rsi starts at 1
			mov rdx, QWORD[rax+((rsi-1)*8)] ; rdx = n-1
			imul rdx, rsi ; rdx = rdx * n	
			mov QWORD[rax+(rsi*8)], rdx ; rax[n] = rax[n-1] * n
			add rsi, 1 ; Add 1 to loop counter
		loopCondition:
			cmp rsi, rcx
			jl loopStart

		printArray:
		; Print array of length n+1
			mov rdi, rax ; set start of array
			mov rsi, rcx ; set # of array items to print
			push rcx
			sub rsp, 8
			call larray_print
			add rsp, 8
			pop rcx

		programEnd:
		; Restore stack pointer and return n
			sub rcx, 1
			mov rax, rcx
			pop rbp ; Restore stack pointer
			ret

	jmp programTerminate

_start:
	jmp partZero

programTerminate:
	mov rax, 60 ; syscall number for exit
	xor rdi, rdi ; exit code 0
	syscall