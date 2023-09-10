# CS-F301 Assembly Language Programming
## Class Notes and Homework Repository :dizzy: :earth_americas:

```
#include <iostream>
int main() {
	std::cout << "Hello traveller, here's a towel for protection. Take care of yourself out there." << std::endl;
  return 0;
}
```

## Class Repositories and References
  - [sowens23-GitHub](https://github.com/sowens23)
  - [GitHubPortal](https://github.com/sowens23/Newbie-Gains/blob/main/README.md)
  - [CS-F301 Class Homepage](https://docs.google.com/document/d/e/2PACX-1vTJJ1vxMtlhlFUd6GlIUGHZ9jElR95Tau21rUKf_HHHFdelLhEW6GRo9WlRi08CCHe5xkdo8Mpw11UM/pub)
  - [CS-F301 Class Recordings](https://www.google.com/url?q=https://docs.google.com/document/d/1OBlNDWjTrCQqKWx69IEePGC9RmEBhUOiR2o07ZWzIeU/edit&sa=D&source=editors&ust=1694312255234741&usg=AOvVaw0NK7nI30MXzI07lNPPP_jw)
  - [Assembly CheatSheet](https://docs.google.com/document/d/1hwABu-SL6u2cdhVkjOCUU6T0UyALujep1NfwYfQzWSo/edit)

## Notes, Assignments, and Labs
  | Weekly Notes | Assignments | Other Notes |
  | --- | --- | --- |
  | [Week-1](#Week-1) | [HW00](https://github.com/sowens23/CS-F301/blob/main/week1/hw00.cpp) | |
  | [Week-2](#Week-2) | [HW01](https://github.com/sowens23/CS-F301/blob/main/week2/hw01.asm) | |
  | [Week-3](#Week-3) | | |

# Big Notes

# Week-2
[Top](#TOP)
### 2023-09-08
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

    Signed vs Unsigned operators
      - Only '<<', *, %, and 'cout' behave differently depending on the signed status of the variable
    
    Evolution of scratch register
      - rax = 64b / eax = 32b / ax = 16b / ah & al = 8b

    0xFFFFFFFFFFFFFF80
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

### 2023-09-06
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
  - 

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
### 2023-08-30
  - NASM - Netwide assembler
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

### 2023-08-28
  - Don't be an int x32 loser, use longs
  - couple checks and inputs in the same line IE
    - ret - Returns a value
  - RDI is your input variable
