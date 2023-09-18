# CS-F301 Assembly Language Programming
## Class Notes and Homework Repository :dizzy: :earth_americas:
  ```
  #include <iostream>
  int main() {
    std::cout << "Hello traveller, here's a towel for protection. Take care of yourself out there." << std::endl;
    return 0;
  }
  ```

### Class Repositories and References
  - [sowens23-GitHub](https://github.com/sowens23)
  - [GitHubPortal](https://github.com/sowens23/Newbie-Gains/blob/main/README.md)
  - [CS-F301 Class Homepage](https://docs.google.com/document/d/e/2PACX-1vTJJ1vxMtlhlFUd6GlIUGHZ9jElR95Tau21rUKf_HHHFdelLhEW6GRo9WlRi08CCHe5xkdo8Mpw11UM/pub)
  - [CS-F301 Class Recordings](https://www.google.com/url?q=https://docs.google.com/document/d/1OBlNDWjTrCQqKWx69IEePGC9RmEBhUOiR2o07ZWzIeU/edit&sa=D&source=editors&ust=1694312255234741&usg=AOvVaw0NK7nI30MXzI07lNPPP_jw)
  - [Assembly CheatSheet](https://docs.google.com/document/d/1hwABu-SL6u2cdhVkjOCUU6T0UyALujep1NfwYfQzWSo/edit)
  - [UAF CS Netrun](https://lawlor.cs.uaf.edu/netrun/run)

### Big Notes
  - Compiling
    1. Write program.asm
    2. Compile program "nasm -f elf64 -o program.o program.asm"
    3. Link program "ld program.o -o program
    4. Run program "./program"

## Class Notes and Assignments
  | Weekly Notes | Assignments | Other Notes |
  | --- | --- | --- |
  | [Week-1](#Week-1) | [HW00](https://github.com/sowens23/CS-F301/blob/main/week1/hw00.cpp) | |
  | [Week-2](#Week-2) | [HW01](https://github.com/sowens23/CS-F301/blob/main/week2/hw01.asm) | |
  | [Week-3](#Week-3) | | |

# Week-4
[Top](#TOP)
## 2023-09-22
## 2023-09-20
## 2023-09-18

# Week-3
[Top](#TOP)
## 2023-09-15 
  ### Pointer Arithmetic: Strings and Arrays
  - foo is the 
  - 'dq' is Define Quadword, this 
    - dq 10 - is new line
    - dq 32 - is a space
    - 0x41 = 4x16 + 1 = 65
    - 0x4142 = BA = Little 'Endian' We are looking at the little end first. the lowest byte is 42 thus B, then 41 for A
  - in puts(const char *s); We can insert a whole string into a char, by using terminal characters between letters. Using a zero to terminate the string
    - dq 0x4142; this keeps reading forever, past this value, till it hits zero and spits out BABABA~? then gibberish
    - dq 0x41004241; this will print A, then B, then stop. Reading right, to left.
  - call puts (This will take rdi as it's input and translate this into a string character till it hits 0)
  - It will always look for a full 8 bytes, so if you only give it 4 bytes of information, it will fill in the remaining 4bytes with 0's which will effectively terminate the string output
    ```
    extern puts
    mov rdi, thingInMemory
    push
    call puts
    ret

    thingInMemory:
      dq 'babab', 0 ; Zero is needed here to terminate the string.
      dq 'Hello world!', 10, 'New Line Inserted', 0 ;
      ; In NetRun you can use 'backtick (`)' instead of quotations to use (\n)
        ; dq `Hellow World!\n` ; Like this
      ; dq 0x4142004241424142
    ```
  - String arithmetic in C++
    ```
    char string[] = "Hello horld";
    char *p = string;
    // p = p + 6; // Move pointer down
    // *p = 'w'; // Assign to memory

    // *(p+6) = 'W'; // I guess


    // p[6] = 'W'; // Array access
    // 6[p] = 'W'; // This works. Dont do it.
    puts(string);
    return 0;
    ```
  - String Arithmetic in Assembly
    ```
    ; This code shows how we can arrange pointer addresses
    mov r10, thingy
    add r10, 8
    mov rax, [r10]
    ret // Returns 7

    thingy:
      dq 5
      dq 7
      dq 9
    ```
    ```
    mov rdi, 1
    mov rax, [thingy+16*rdi] // In Assembly you can only multiply pointer addresses by powers of 2.
    ret

    thingy:
      dq 5
      dq 7
      dq 9
      dq 15
    ```

## 2023-09-13
  ### Pointers
  - rsp is the stack register, this aligns the push and pops
    - You can 'add rsp, 8' which will add 8 bytes which is a 64 bit reference
      - Essentially this is a pop, it 'removes' something off of the stack
      - Push goes towards null pointer 0
        - So push is technically a subtract of the stack register
      - pop goes away from null pointer
        - and pop is an addition to the stack register
  - We can keep the stack 'clean' by noting the reference point
    - rbp is a reserved register for you to save rsp on.
      ```
      push rbp ; save main's rbp
      mov rbp, rsp ; save rsp
      ; .... Bunch of crazy pops functions pushes
      mov rsp, rp ; chop off my stack
      pop rbp ; restore mains' rbp
      ret
      ```
  - We can read the top of the stack in this way [rsp]
    - The '[ ]' is used to de-reference a pointer address
      ```
      mov rax, [rsp] ; This will de-reference the rsp pointer to return it's register value
      ```
  - We can write to the top of the stack!
    ```
    push 5
    mov rdx, rsp ; rdx points to the top of the stack
    mov rcx, 8 
    mov [rdx], rcx ; Re-writes pushed value 5 at the top of the stack, to 8
    pop rax
    ret
    ``` 
  - If we push an integer value, we must define the register size (long, int, etc.)
    ```
    mov QWORD[rdx], 3 ;
    ```
    | C Datatype | Bits | Bytes | Register | *ptr |
    | ----- | ----- | ----- | ----- | ----- | 
    | char | 8 | 1 | al | BYTE |
    | short | 16 | 2 | ax | WORD |
    | int | 32 | 4 | eax | DWORD |
    | long | 64 | 8 | rax | QWORD |
    | float | 32 | 4 | xmm0 | DWORD |
    | double | 64 | 8 | xmm0 | QWORD |
  - "Transporter Malfunction" "Splinched"
    - If you are moving a pointer, you must move it by 8 bytes. NOT BY BITS
  - Referencing functions
    ```
    mov rcx, [x] ; You have just stored the bit value of the block of code 'x:'
    ret

    x:
      mov rsi, 5
      add rsi, 1
    
    ```
  - You can call a function 2 bytes after the memory address start of a function, you can essentially 'binary patch' yourself to skip parts of code that breaks things
    - This is a brittle fix, but it can get your code running this week.

## 2023-09-11
  ### Recap and Why 'Assmebly'. Intro to Pointers
  - 8 bit signed int can reach about  billion
    - We can caluclate factorials up to 12, in an int.
    - Calculating in Hexidecimal (base 16) When you multiply by factors of 16, it shifts the hexidecimal value left, and puts a 0 on the end
      - 0xFACE * 16 = 0xFACE0
      - 0xFACE * 256 = 0xFACE00
    - In Assembly, you can add "L"or"l" (Capital preferred) onto any number, decimal, hexidecimal to upgrade an Int to LOng
    - Proper Factorial Calculator
      ```
      mov rsi, 
        return 0xFACEL * 256L * Scale
      ```
    - When we are dealing with overflow in assembly
      - If we are working with very large numbers, we might be best calculating with double variables.
    - rcx is built to count over loops
    - rdi is input #1
    - All 'ret's return to the last call
      - This is how your final ret of your program knows where to go afterwards
      - Call and return are handy, because if you have multiple potential jumps for a function
    - Push, jmp, and call are all the same
    - Pop and ret are also the same.
      ```
      ; Input: rdi, how far to multiply
      mov rdx,  ; sum of factorials 
      mov rsi, 1 ; n loop
      jmp checkOuter
      startOuter:
        ; Calculate factorial
        move rax, 1 ; product = 1
        mov rcx, 2 ; i=2
        jmp checkLoop
        startLoop: ; loop over numbers up to rdi
          imul rax, rcx ; !! Never use "mul", always use "imul"
          add rcx, 1 ; i++
          checkLoop:
          cmp rcx, rdi ; i<n
          jl startLoop
        add rdx, rax; add this factorial to the sum
        add rsi, 1
        checkOuter:  
        cmp rsi, rdi
        jle startOuter
      mov rax, rdx ; return sum ; return product
      ret ; return product because we are adding using rax
      ```


# Week-2
[Top](#TOP)
## 2023-09-08
  - Running over Binary, and Hexidecimal 
    - b10 10 in b2 is 1010 in b16 is a
  - The last bit in binary (128 bit) equals an negative sign.
    - This means that the 128 bit is actually -128. This means the domain of binary for unsigned/signed is -128 to 127
    - Overflow on 0111111 will become 1000000 which is equal to -128
  - Shifting
    - Unsinged right shift will leave a 0
    - Signed right shift will leave a 1
      ```
      char x=0;
      x = x-1;
      ret x 
      ; x will return as 255 because it's unsigned.
      ; x will return as -1 if it's signed.
      ```
  - Signed vs Unsigned operators
    - Only '<<', *, %, and 'cout' behave differently depending on the signed status of the variable
  - Evolution of scratch register
    - rax = 64b / eax = 32b / ax = 16b / ah & al = 8b
     - 0xFFFFFFFFFFFFFF80
      - 0x means Hexidecimal
      - Every one character in Hexidecimal represents 4 binary bits. F=15
      - 80 at the end means 'Signed'
        ```
        ; Overflow in unsigned register 
        mov rax,0
        add al,-128
        ;add al, 128 ; Max value for 8 bit integer
        ;add al, 128 ; This will return 0, because al can only store 8 bits.
        ;jo badStuff ; Jump if Overflow flag (jc) is 
        movsx rax,cl ; This will sign extend an 8 bit to a 

        ret

        :badStuff
          mov rax, 999
          ret
        ```

## 2023-09-06
  - A brittle fix is when you 'fix' a loop to catch conditions that you cannot calculate.
    - ie. On inputs [0,10], return +2 if integer is even.
    - It's only appropriate to check if values are even then add two and return
    - Do not say if (x=0) else x=2, else x=4. --> BAD
  - There is a "unsigned int" error when you check a for loop int to a vector.size()
    - To avoid this issue you can use (int): for (int i=1;i<(int)nums.size();i++) {}
  - rbx is main's general register, which means you can only use it, if you push rbx, then pop rbx at the end of your function
    ```
    ;Basic return int 5
    mov eax, 5
    ret
    ```
    ```
    ; Call Function
    extern print_int ; This works as an include
    call print_int ; This calls the function
    ret ;
    ```
  - The stack is a little block of memory used to access memory
    - You are supposed to clean the stack before you return. Treating this similar to how you would allocate memory and use pointers in C++
    - If you want to save something, you must push it to the stack. When calling other functions, they may wipe your scratch registers.
    - Call and Ret are implicitely popping and pushing. This means that you must ALWAYS pop an equal amount to the times you push. Absolutely necessary.
      - This is how programs know where to go when they finish running. RET and CALL are the register values of where they go after they are done running.
      - In lieu of 'ret' you could do 'pop rdx; jmp rdx'
    - You must pop in the opposite order of your pushes, to return the same values to the registers.
  - You must push something first, before you call a function this "aligns the stack"
  - Stack overflow is when you have pushed to many values for the stack to hold.
    - Write a for loop
      - Three rules when creating a for loop
        - You must initialize a counter
        - You must compare two values
        - You must incriment values.
      ```
        push 7 ; align the stack

        mov rcx, 0 ; i=0
        start:
          mov rdi, rcx
          push rcx ; this saves your rcx value before the function
          extern print_int
          call print_int
          pop rcx ; this pulls the last pushed value on the stack to rcx

          add rcx, 1 ; i++
          cmp rcx, 10 ; i<10
          jl start ; iterate based on compare
        ret
      ```
      ```
      ; The Stack
      push 7 ; This will push the number 7 onto the top of the stack
      mov rcx,10 ; rcx, rax will be wiped because it's used by print_int
      ;pop rax ; This will remove the number 7 from the stack

      ; Using a function print
      mov rdi, 123
      extern print_int ; This is a function, it takes a parameter rdi
      call print_int ; This will print 123

      pop rax
      mov rax, rcx
      ret
      ```

# Week 1
[Top](#TOP)
## 2023-08-30
  ### NASM - Netwide assembler
  ```
  ; Input: rdi is our first argument
  mov rcx, rdi    ; move arg to temp
  sub rcx, 4      ; 
  ```
  ```
  ; An example of a loop
  mov rcx, 3
  jmp theGood
    mov rdi, 5
    add rdx, 10
    mov rdi, rdx
  theGood:
  mov rax, 4
  ```
  ```
  ; rax is the register that 'ret' will return
  mov rcx, 2; moves value 2 to register rcx
  mov rax, rcx; moves value of rcx to rax
  ;mul rcx; mul will always multiply by rax if left with no parameter, then it will put the result in register rax.
  mul rax, 2; Multiplies rax (2) by 2
  imul; 
  
  ret; Always need an ret at the end, rax only ever is returned, there is no parameter to ret

  ```

## 2023-08-28
  - Don't be an int x32 loser, use longs
  - couple checks and inputs in the same line IE
    - ret - Returns a value
  - RDI is your input variable
