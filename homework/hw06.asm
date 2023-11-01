;		Name: Spencer Owens
;		Class: F23 CS F301
; 	Date: 2023-
;		Program Name: hw.asm
;		Program Function: To program in ARM Assembly Language
;			6 Part Assignment running through basic Assembly functionality
;				0) Return constant 3 in ARM assembly
;				1) Load value of stored .8byte value into register 
;				2) Add two integers
;				3) To compare to values and branch is less than
;				4) To calculate factorial of input integer greater than 0
;				5) To print input integer, preserving and restoring the stack pointer
;				6) To print input integer, then loop from input to 0, printing each iteration

partZero:
  // 2023_CS301/HW6arm/0 Homework Instructions: Write an ARM assembly language 
    // function to return the constant 3.

  // Your ARM assembly code here!
  mov x0, 3
  ret
partOne:
  // 2023_CS301/HW6arm/1 Homework Instructions: Write an ARM assembly language 
    // function to return the constant 0x333333 (note this is bigger than 16 bits, 
    // so you'll need to load it from memory).

  // Your ARM assembly code here!
  adr x6, bigHexnum // Loads value of bigConst into register
  ldr x0, [x6] // access memory
  ret

  .data
  bigHexnum:
    .8byte 0x333333
partTwo:
  // 2023_CS301/HW6arm/2 Homework Instructions: Your ARM assembly language function 
    // is passed an integer. Add ten to the integer, and return the sum.

  // Your ARM assembly code here!
  add x0, x0, 10
  ret
partThree:
  // 2023_CS301/HW6arm/3 Homework Instructions: You're writing an ARM function in 
    // assembly language that takes one argument. If the 
    // argument is less than 5, add 2 to it and return. Otherwise, return it 
    // unmodified.

  // Your assembly code here!
  mov x4, x0
  cmp x4, 5
  b.lt lessThan
  ret

  lessThan:
    add x0, x4, 2
    ret
partFour:
  // 2023_CS301/HW6arm/4 Homework Instructions: Write ARM assembly to 
    // compute the factorial of the input integer, and return it.

  // Your ARM assembly code here!

  // Check for <= 1
  cmp x0, 1 // compare i to 1
  b.le zero // jump if i <= 1

  mov x1, x0 // Store input
  mov x2, 0
  sub x2, x1, 1

  // for (int i = x0; x0 >= 1; i--)
  start:
    mul x1, x1, x2 // Multiply x1, x2
    sub x2, x2, 1 // reduce i by 1
    cmp x2, 1 // compare i to 1
    b.gt start // jump if i > 1
    mov x0, x1
    ret
    
  zero:
  mov x0, 1
  ret
partFive:
  // 2023_CS301/HW6arm/5 Homework Instructions: Write ARM assembly to 
    // call printf("x%d\n",i); for the integer i passed to your function. 
    // Then return zero back to main successfully. (You'll need to save x30/lr 
    // to get back to main.)

  // Your ARM assembly code here!
  mov x1, x0
  ldr x0, =formatStr

  // Push/Pop stack pointer and call printf
  stp x0,x30,[sp,-16]! // push via predecrement
  bl printf
  ldp x0,x30,[sp], 16 // postincrement (pop)

  mov x0,0
  ret

  formatStr:
    .asciz "x%d\n"

partSix:
  // 2023_CS301/HW6arm/6 Homework Instructions: Write ARM assembly to 
    // call printf("x%d\n",i); for each integer i starting from the input 
    // integer down to zero (for negative input, print nothing). For example, 
    // given 3, you'd print x3 x2 x1 x0. Then return zero back to main successfully. 
    // (You'll need to use preserved registers so printf doesn't trash your loop 
    // counter, and save x30 to get back to main.)

  // Your ARM assembly code here!
  .global _print_down_to_zero
  _print_down_to_zero:
    // Save link register x30 and callee-saved register x19
    stp x19, x30, [sp, -16]!
    mov x19, x0 // Move input to x19
    
    // If x0 is <= 0, then return
    cmp x0, 0
    blt end

    // Load formatting string and print
    mov x1, x19
    ldr x0, =formatString
    bl printf

  startLoop:
    sub x19, x19, 1
    cmp x19, 0
    bge print_number
    b end

  print_number:
    mov x1, x19
    ldr x0, =formatString
    bl printf
    b startLoop

  end:
    // Restore x30 and x19
    ldp x19, x30, [sp], 16
    mov x0, 0
    ret

  .section .data
  formatString:
    .asciz "x%d\n"


