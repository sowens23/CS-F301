;		Name: Spencer Owens
;		Class: F23 CS F301
; 	Date: 2023-10-22
;		Program Name: hw05.asm
;		Program Function: Written in C/C++ and ARM assembly
;			6 Part Assignment running through basic Assembly functionality. These programs are built using UAF Dr. Lawlors "NetRun" compiler/debugger as a function of c# foo
;				0) Call a function in C++
;				1) Call a function pointer
;				2) Call a function in c#
;				3) Set input to output text
;				4) Use buffer overflow to set object.b value
;				5) Use buffer overflow to set struct object value
;				6) Use buffer overflow to output prize

Part 0:
  /*2023_CS301/HW5/0 Homework Instructions: This C/C++ code defines a variable "teacher" 
    that is a function pointer. Initialze teacher to point to the yoda function. 
    I've already defined a foo that calls it at the right time.
    Code to run: */

  // This defines "jedi_type" as a function pointer 
  typedef void (*jedi_type)(void);

  void yoda(void) 
  {
    printf("Pointers you must you seek.\n");
  }

  jedi_type teacher = yoda; //<- initialize this
Part 1:
  ;2023_CS301/HW5/1 Homework Instructions: The assembly function "chain0" returns 
    ;in rax a pointer to the next function in the chain. Call the function that rax 
    ;is pointing to, and return.

  call chain0
  call rax

  ; rax = pointer to the next function in the chain.
  ; call that function now

  ret
Part 2:
  /*2023_CS301/HW5/2 Homework Instructions: Write a one line C/C++ typedef for the type 
    "long_printer", to represent functions that return nothing (void), and take one long as 
    an argument. For example, the netrun builtin "void print_long(long number)" should be 
    assignable to your long_printer type. */

  // Your typedef here!
  typedef void (*long_printer)(long);
Part 3:
  //2023_CS301/HW5/3 Homework Instructions: Use the "Input" 
    //checkbox to provide input to this code so that the value array 
    //contains the string "bigmost". (This is a warm-up for the buffer 
    //overflow examples in the next few problems.)

  // No code, just change the input data
  char value[8];
  strcpy(value,"minimal");
  if (1!=scanf("%s",value)) return; 

  // Print the string as both chars and hex values:
  for (int i=0;i<8;i++)
  printf("value[%d]='%c'=0x%02X\n", i, value[i], (int)value[i]);
Part 4:
  // No code, just change the input data **Input is "bdbdbdbdbigmost"**
  // 2023_CS301/HW5/4 Homework Instructions: Again, use the "Input" checkbox to provide input to this code 
    // so that the value array contains the string "bigmost". Notice that the code never writes to 
    // "b.value", you'll need to overflow from b.name into b.value's bytes.
    
  struct buf {
  char name[8];
  char value[8];
  };
  buf b;
  strcpy(b.value,"minimal");

  if (1!=scanf("%s",b.name)) return; 

  // Print string as chars and hex values:
  for (int i=0;i<8;i++)
  printf("value[%d]='%c'=0x%02X\n", i, b.value[i], (int)b.value[i]);
Part 5:
  // No code, just change the input data **Input "201 202 301 302 9000"**
  // 2023_CS301/HW5/5 Homework Instructions: Use a buffer overflow on the input integer grades 
    // to set your awesomeness to 9000.
    
  struct student {
    long nclasses;
    long class_grades[4]; // (4 courses is surely enough for anyone)
    long awesomeness;
  };

  void student_create(student *s) {
    s->nclasses=0;
    s->awesomeness=0;
  }

  void student_read_grades(student *s) {
    while (std::cin) {
      long grade=0;
      std::cin>>grade;
      if (!std::cin) break;
      if (grade==0) break;
      s->class_grades[s->nclasses++]=grade;
    }
    std::cout<<"OK, read student"<<std::endl;
  }

  void student_print(student *s) {
    std::cout<<"Student has "<<s->awesomeness<<" awesomeness"<<std::endl;
  }

  long foo(void) {
    student s;
    student_create(&s);
    student_read_grades(&s);
    student_print(&s);
    return 0;
  }
Part 6:
  // No code, just change the input data **Input "201 202 301 302 4199705"**
  // 2023_CS301/HW5/6 Homework Instructions: Use a buffer overflow on the input integer 
    // grades to set the greeting function pointer to the prize function.
    
  // A "student_greeting_function" is a pointer to a function
  //   that prints a greeting for a student.
  typedef void (*student_greeting_function)(void);

  struct student {
    long nclasses;
    long class_grades[4]; // (4 courses should be enough for anyone)
    student_greeting_function greeting;
  };

  void win_the_prize(void) {
    printf("You win the prize!  Yay!\n");
    exit(1); //<- returning is often tricky, so just leave.
  }

  void greet_normal(void) {
    printf("Hey.\n");
  }

  void student_create(student *s) {
    s->nclasses=0;
    s->greeting=greet_normal;
  }

  void student_read_grades(student *s) {
    while (std::cin) {
      long grade=0;
      std::cin>>grade;
      if (!std::cin) break;
      if (grade==0) break;
      s->class_grades[s->nclasses++]=grade;
    }
    std::cout<<"OK, read student"<<std::endl;
  }

  void student_greet(student *s) {
    std::cout<<"Running greeting at "<<(long)(void *)s->greeting<<std::endl;
    s->greeting();
  }

  long foo(void) {
    std::cout<<"Address of the prize is: "<<(long)(void *)win_the_prize<<std::endl;
    student s;
    student_create(&s);
    student_read_grades(&s);
    student_greet(&s);
    return 0;
  }
