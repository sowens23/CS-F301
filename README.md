# CS-F301
Assembly Language Programming


Week 1

2023-08-30
  NASM - Netwide assembler

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

2023-08-28
Don't be an int x32 loser, use longs
couple checks and inputs in the same line IE
  ret - Returns a value
