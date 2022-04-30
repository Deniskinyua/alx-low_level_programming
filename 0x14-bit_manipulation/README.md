			0x14.C-BIT MANIPULATION

		LEARNING OBJECTIVES
	(i) Look for the right source of information without too much help
	(ii) How to manipulate bits and use bitwise operators

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
\	(xi) In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
	(xii) The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
	(xiii) Don’t forget to push your header file
	(xiv) All your header files should be include guarded


-------------------------------------------------------------------------------- MANDATORY TASKS ---------------------------------------------------------------------------



TASK 0
Write a function that converts a binary number to an unsigned int.

	(i) Prototype: unsigned int binary_to_uint(const char *b);
	(ii) where b is pointing to a string of 0 and 1 chars
	(iii) Return: the converted number, or 0 if:
		--there is one or more chars in the string b that is not 0 or 1
		--b is NULL

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x14-bit_manipulation
File: 0-binary_to_uint.c


TASK 1:

Write a function that prints the binary representation of a number.

	(i) Prototype: void print_binary(unsigned long int n);
	(ii) Format: see example
	(iii) You are not allowed to use arrays
	(iv) You are not allowed to use malloc
	(v) You are not allowed to use the % or / operators

--Example--
julien@ubuntu:~/0x14. Binary$ cat 1-main.c 
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/0x14. Binary$ ./b 
0
1
1100010
10000000000
10000000001
julien@ubuntu:~/0x14. Binary$ 

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x14-bit_manipulation
File: 1-print_binary.c


TASK 2

Write a function that returns the value of a bit at a given index.

	(i) Prototype: int get_bit(unsigned long int n, unsigned int index);
	(ii) where index is the index, starting from 0 of the bit you want to get
	(iii) Returns: the value of the bit at index index or -1 if an error occured

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x14-bit_manipulation
File: 2-get_bit.c


TASK 3

Write a function that sets the value of a bit to 1 at a given index.

	(i) Prototype: int set_bit(unsigned long int *n, unsigned int index);
	(ii) where index is the index, starting from 0 of the bit you want to set
	(iii) Returns: 1 if it worked, or -1 if an error occurred

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x14-bit_manipulation
File: 3-set_bit.c


TASK 4

Write a function that sets the value of a bit to 0 at a given index.

	(i) Prototype: int clear_bit(unsigned long int *n, unsigned int index);
	(ii) where index is the index, starting from 0 of the bit you want to set
	(iii) Returns: 1 if it worked, or -1 if an error occurred

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x14-bit_manipulation
File: 4-clear_bit.c


TASK 5

Write a function that returns the number of bits you would need to flip to get from one number to another.

	(i) Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
	(ii) You are not allowed to use the % or / operators

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x14-bit_manipulation
File: 5-flip_bits.c




