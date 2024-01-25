			0x10.C-VARIADIC FUNCTIONS


		LEARNING OBJECTIVES

    (i) What are variadic functions
    (ii) How to use va_start, va_arg and va_end macros
    (iii) Why and how to use the const type qualifier

		REQUIREMENTS

    (i) Allowed editors: vi, vim, emacs
    (ii) All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    (iii) All your files should end with a new line
    (iv) A README.md file, at the root of the folder of the project is mandatory
    (v) Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    (vi) You are not allowed to use global variables
    (vii) No more than 5 functions per file
    (viii) The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
    (ix) You are allowed to use the following macros: va_start, va_arg and va_end
    (x) You are allowed to use _putchar
    (xi) You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
    (xii) In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    (xiii) The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called variadic_functions.h
    (xiv) Don’t forget to push your header file
    (xv) All your header files should be include guarded.


		TASKS
TASK 0: "Beauty is variable, ugliness is constant"

Write a function that returns the sum of all its parameters.

    (i) Prototype: int sum_them_all(const unsigned int n, ...);
    (ii) If n == 0, return 0

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x10-variadic_functions
    File: 0-sum_them_all.c


TASK 1: "To be is to be the value of a variable"

Write a function that prints numbers, followed by a new line.

    (i) Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
    (ii) where separator is the string to be printed between numbers
    (iii) and n is the number of integers passed to the function
    (iv) You are allowed to use printf
    (v) If separator is NULL, don’t print it
    (vi) Print a new line at the end of your function

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x10-variadic_functions
    File: 1-print_numbers.c


TASK 2: "One woman's constant is another woman's variable"

Write a function that prints strings, followed by a new line.

    (i) Prototype: void print_strings(const char *separator, const unsigned int n, ...);
    (ii) where separator is the string to be printed between the strings
    (iii) and n is the number of strings passed to the function
    (iv) You are allowed to use printf
    (v) If separator is NULL, don’t print it
    (vi) If one of the string is NULL, print (nil) instead
    (vii) Print a new line at the end of your function

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x10-variadic_functions
    File: 2-print_strings.c


TASK 3:"o be is a to be the value of a variable"

Write a function that prints anything.

    (i) Prototype: void print_all(const char * const format, ...);
    (ii) where format is a list of types of arguments passed to the function
        c: char
        i: integer
        f: float
        s: char * (if the string is NULL, print (nil) instead
        any other char should be ignored
        see example
    (iii) You are not allowed to use for, goto, ternary operator, else, do ... while
    (iv) You can use a maximum of
        2 while loops
        2 if
    (v) You can declare a maximum of 9 variables
    (vi) You are allowed to use printf
    (vii) Print a new line at the end of your function

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x10-variadic_functions
    File: 3-print_all.c

..................THE END................................................

