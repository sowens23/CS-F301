We're going to start with compiling 

1) Write program.asm
2) Compile program "nasm -f elf64 -o program.o program.asm"
3) Link program "ld program.o -o program
4) Run program "./program"