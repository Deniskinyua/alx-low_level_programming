			0x0f.c -FUNCTION POINTERS


		LEARNING OBJECTIVES

    (i) What are function pointers and how to use them
    (ii) What does a function pointer exactly hold
    (iii) Where does a function pointer point to in the virtual memory

		REQUIREMENTS

    (i) Allowed editors: vi, vim, emacs
    (ii) All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    (iii) All your files should end with a new line
    (iv) A README.md file, at the root of the folder of the project is mandatory
    (v) Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    (vi) You are not allowed to use global variables
    (vii) No more than 5 functions per file
    (viii) The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
    (ix) You are allowed to use _putchar
    (x) You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
    (xi) In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    (xii) The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
    (xiii) Don’t forget to push your header file
    (xiv) All your header files should be include guarded


		MANDATORY TASKS

TASK 0: " What's my name "

Write a function that prints a name.

    (i) Prototype: void print_name(char *name, void (*f)(char *));

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0F-function_pointers
    File: 0-print_name.c


TASK 1"If you spend too much time thinking about a thing, you'll never get it done"

Write a function that executes a function given as a parameter on each element of an array.

    (i) Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
    (ii) where size is the size of the array
    (iii) and action is a pointer to the function you need to use

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0F-function_pointers
    File: 1-array_iterator.c


TASK 2: "To hell with circumstances; I create opportunities "

Write a function that searches for an integer.

    (i) Prototype: int int_index(int *array, int size, int (*cmp)(int));
    (ii) where size is the number of elements in the array array
    (iii) cmp is a pointer to the function to be used to compare values
    (iv) int_index returns the index of the first element for which the cmp function does not return 0
    (v) If no element matches, return -1
    (vi) If size <= 0, return -1

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0F-function_pointers
    File: 2-int_index.c


TASK 3" A goal is not always meant to be reached, it often serves simply as something to aim at "

Write a program that performs simple operations.

    (i) You are allowed to use the standard library
    (ii) Usage: calc num1 operator num2
    (iii) You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
    (iv) operator is one of the following:
        +: addition
        -: subtraction
        *: multiplication
        /: division
        %: modulo
    (v) The program prints the result of the operation, followed by a new line
    (vi) You can assume that the result of all operations can be stored in an int
    (vii) if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
    (viii) if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
    (ix) if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
    (x) This task requires that you create four different files.
3-calc.h

This file should contain all the function prototypes and data structures used by the program. You can use this structure:
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;


3-op_functions.c

This file should contain the 5 following functions (not more):

    (i) op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
    (ii) op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
    (iii) op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
    (iv) op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
    (v) op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

3-get_op_func.c

This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

    (i) Prototype: int (*get_op_func(char *s))(int, int);
    (ii) where s is the operator passed as argument to the program
    (iii) This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add
    (iv) You are not allowed to use switch statements
    (v) You are not allowed to use for or do ... while loops
    (vi) You are not allowed to use goto
    (vii) You are not allowed to use else
    (viii) You are not allowed to use more than one if statement in your code
    (ix) You are not allowed to use more than one while loop in your code
    (x) If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL
    (xi) You are only allowed to declare these two variables in this function:
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

3-main.c

This file should contain your main function only.

    (i) You are not allowed to code any other function than main in this file
    (ii) You are not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function
    (iii) You have to use atoi to convert arguments to int
    (iv) You are not allowed to use any kind of loop
    (v) You are allowed to use a maximum of 3 if statements


Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0F-function_pointers
    File: 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h


			ADVANCED TASKS
TASK 4: "Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker"

Write a program that prints the opcodes of its own main function.

    (i) Usage: ./main number_of_bytes
    (ii) Output format:
        the opcodes should be printed in hexadecimal, lowercase
        each opcode is two char long
        listing ends with a new line
        see example
    (iii) You are allowed to use printf and atoi
    (iv) You have to use atoi to convert the argument to an int
    (v) If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
    (vi) If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
    (vii) You do not have to compile with any flags

Note: if you want to translate your opcodes to assembly instructions, you can use, for instance udcli.


    (i) Note 0: je is equivalent to jz
    (ii) Note 1: depending on how you write your main function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0F-function_pointers
    File: 100-main_opcodes.c

.................THE END...................



