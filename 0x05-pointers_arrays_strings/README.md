This directory holds different answers to quizzes from the 0x05. C-Pointers, arrays and strings a project on 03/21/2022.

The requirements include;
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file

MANDATORY TASKS

TASK 0: Batter St.
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.(Required file: 0-rest_to_98.c,prototype: void reset_to_98(int *n);

TASK 1: Dont swap horses
Write a function that swaps the values of two integers
(Required: Prototype: void swap_int(int *a, int *b); 1-swap.c)

TASK 2: This Report
Write a function that returns the length of a string
(Required: int_strlen(char *s);  2-strlen.c  Betty style)

TASK 3:I do not Fear Computers
Write a function that prints a string, followed by a new line to stdout
(Required: prototype- void_puts(char *str); Betty style 3-puts.c)

TASK 4: I Can Only Go One Way
Write a function that prints a string, in reverse, folowed by a new line.
(Required: Prototype-void print_rev(char *s)  Betty Style File: 4-print_rev.c)

**TASK 5:A Good Engineer**
Write a function that reverses a string
(Required: Prototype- void rev_string(char *s); Betty Style file- 5-rev_string.c)

TASK 6: Half the lies they tell about me arent true
Write a function that pints every other character of a string, starting with the first character, followed by a new line
(Required: Betty Style, prototype- void puts2(char *str); File- 6-puts2.c)

TASK 7: Winning is only half of it. Having fun is the other half
Write a function that prints half of a string, followed by a new line
(Required: Prototype void puts_half (char *str); file 7-puts_half.c  Betty Style

The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2)

TASK 8: Arrays are Not Pointers
Write a function that prints n elements of an array of integers, folllowed by a new line
(Required:
    Prototype: void print_array(int *a, int n);
    where n is the number of elements of the array to be printed
    Numbers must be separated by comma, followed by a space
    The numbers should be displayed in the same order as they are stored in the array
    You are allowed to use printf
    file: 8-print_array.c)

TASK 9:Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
(Required; Prototype: char *_strcpy(char *dest, char *src); 
    Return value: the pointer to dest

FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
file: 9-strcpy.c)

OPTIONAL TASKS
