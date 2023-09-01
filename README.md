
# CS-F301
Assembly Language Programming


--------------------------------------------------------------------------

# Spencer's CS202 Class Notes :dizzy: :earth_americas:
```
#include <iostream>
int main() {
	std::cout << "Hello traveller, here's a towel for protection. Take care of yourself out there." << std::endl;
}
```
## Other-Files
- [Header Notes](https://github.com/2023-Spring-UAF-CS202/notes-sowens23/blob/main/HeaderNotes.md)

### Markdown rules and tips
- [GitHub Markdown Documentation](https://docs.github.com/en/get-started/writing-on-github)
- [Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet "github Markdown Cheatsheet")
- [VIM Cheatsheet](https://phoenixnap.com/kb/wp-content/uploads/2021/11/vim-commands-cheat-sheet-by-pnap.pdf "Vim Cheatsheet")
- [Markdown Emojis](https://github.com/markdown-templates/markdown-emojis)
- Two spaces at the end of a line, will mark a new line

### Notes, Assignments and Labs
- Notes: [Week-1](#Week-1) - [Week-2](#Week-2) - [Week-3](#Week-3) - [Week-4](#Week-4) - [Week-5](#Week-5) - [Week-6](#Week-6) - [Week-7](#Week-7) - [Week-8](#Week-8) - [Week-9](#Week-9) - [Week-10](#Week-10) - [Week-11](#Week-11) - [Week-12](#Week-12) - [Week-13](#Week-13) - [Week-14](#Week-14) - [Week-15](#Week-15)

	Assignment | Lab
	--- | ---
	[Overview](https://github.com/2023-Spring-UAF-CS202/overview) | [SampleCode](https://github.com/2023-Spring-UAF-CS202/sample_code)
	NA | [Lab00](https://github.com/2023-Spring-UAF-CS202/lab00-sowens23)
	[Homework01](https://github.com/2023-Spring-UAF-CS202/hw01-sowens23) | [Lab01](https://github.com/2023-Spring-UAF-CS202/lab01-sowens23)
	[Homework02](https://github.com/2023-Spring-UAF-CS202/hw02-sowens23) | [Lab02](https://github.com/2023-Spring-UAF-CS202/lab02-sowens23)
	[Homework03](https://github.com/2023-Spring-UAF-CS202/hw03-sowens23) | [Lab03](https://github.com/2023-Spring-UAF-CS202/lab03-sowens23)
	[Homework04](https://github.com/2023-Spring-UAF-CS202/hw04-sowens23) | [Lab05](https://github.com/2023-Spring-UAF-CS202/lab05-sowens23)

# Week-15
[Sample Code](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week15) : No Overview : [Top](#TOP)
### 4/27/2023

### 4/25/2023
	- Talked about HW04

# Week-14
[Sample Code](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week14) : No Overview : [Top](#TOP)
### 4/20/2023
	- Passing functions to as a parameter
		- void firstFunction(std::function<void(int)> secondFunction) {...}
	- When you call a function with a parameter
		- A copy constructor must exist for you to pass a class object.
		- A copy constructor does not exist for a virtual class

--------------------------------------------------------------------------






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
