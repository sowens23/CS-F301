# CS-F301
Assembly Language Programming
  Compile your shit : nasm -f elf64 program.asm
  Link your shit    : ld -s -o program program.o
  Run your shit     : ./program

Week 1

2023-09-01
  Lecture Video: 
  Lecture Notes: https://www.cs.uaf.edu/2017/fall/cs301/lecture/09_01_loops.html


  Jumping
  ```
      mov rax,1 ; set x to 1
      cmp rax,0 ; compare x to 0
      jg wormhole ; if cmp is greater than jump to wormhole

    normalreturn;
      ret ; return x (999)

    wormhole;
      mov rax,999 ; set x to 999
      jmp normalreturn ; jump to normal return
  ```

  Why Goto statements are dangerous
  ```
    int x,y;
    int which=0;
    restart:
    goto doread;
    back
  ```


  Looping (For Loop)
  ```
    ; Input: rdi is the loop count
    mov rax,0 ; return value
    mov rcx, 0; initialize counter (i)

    start:
      cmp rcx,rdi ; i>=count
      jge end
      add rax, 10

      add rcx,1 ; i++
      cmp rcx,rdi ; i<count
      jl start

    end:
      ret
  ```

  Never use goto &location; in C++
  In Assembly it is inevitable

  jmp end; Jumps to End
  jg end; Jump if Greater than. This requires a cmp funciton before hand


2023-08-30
  Lecture Notes: https://www.cs.uaf.edu/2017/fall/cs301/lecture/08_30_assembly.html

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
  Lecture Notes: https://docs.google.com/document/d/e/2PACX-1vQ6_GDJ6uEDzm3NGAH9Dd41h7MAbwHc0FSIXdHZ5xCW7fbeThK58QzeuH8tpsJAzDCTMvL0s5Wje5gg/pub

  Don't be an int x32 loser, use longs
  couple checks and inputs in the same line IE
    ret - Returns a value
