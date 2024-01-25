               0x0C.C- MORE MALLOC, FREE (8th April 2021)

This project aims at teaching Automatic and Dynamic allocation, and free
Some of the functions used include:
(i) exit (3)
(ii) calloc
(iii) realloc

		GENERAL
(i) How to use the exit function
(ii) What are the functions calloc and realloc from the standard library and how to use them

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
    (xii) The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
    (xiii) Don’t forget to push your header file


		MANDATORY TASKS

TASK 0: "Trust No One"

Write a function that allocates memory using malloc.

(i) Prototype: void *malloc_checked(unsigned int b);
(ii) Returns a pointer to the allocated memory.
(iii) if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0C-more_malloc_free
    File: 0-malloc_checked.c

TASK 1: " string_nconcat"

Write a function that concatenates two strings.

    (i) Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
    (ii) The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
    (iii) If the function fails, it should return NULL
    (iv) If n is greater or equal to the length of s2 then use the entire string s2
    (v) if NULL is passed, treat it as an empty string

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0C-more_malloc_free
    File: 1-string_nconcat.c

TASK 2: "_calloc"

Write a function that allocates memory for an array, using malloc.

    (i) Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
    (ii) The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
    (iii) The memory is set to zero
    (iv) If nmemb or size is 0, then _calloc returns NULL
    (v) If malloc fails, then _calloc returns NULL

FYI: The standard library provides a different function: calloc. Run man calloc to learn more.

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0C-more_malloc_free
    File: 2-calloc.c


TASK 3: "array_range"

Write a function that creates an array of integers.

    (i) Prototype: int *array_range(int min, int max);
    (ii) The array created should contain all the values from min (included) to max (included), ordered from min to max
    (iii) Return: the pointer to the newly created array
    (iv) If min > max, return NULL
    (v) If malloc fails, return NULL

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0C-more_malloc_free
    File: 3-array_range.c

		ADVANCED TASKS

TASK 4: "_realloc"

Write a function that reallocates a memory block using malloc and free

    (i) Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
    (ii) where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
    (iii) old_size is the size, in bytes, of the allocated space for ptr
    (iv) and new_size is the new size, in bytes of the new memory block
    (v) The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
    (vi) If new_size > old_size, the “added” memory should not be initialized
    (vii) If new_size == old_size do not do anything and return ptr
    (viii) If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
    (ix) If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
    (x) Don’t forget to free ptr when it makes sense
FYI: The standard library provides a different function: realloc. Run man realloc to learn more.

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0C-more_malloc_free
    File: 100-realloc.c



TASK 5: "We Must Accept Finite Disappointment, but Never Lose Infinite Hope"

Write a program that multiplies two positive numbers.

    (i) Usage: mul num1 num2
    (ii) num1 and num2 will be passed in base 10
    (iii) Print the result, followed by a new line
    (iv) If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
    (v) num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
    (vi) You are allowed to use more than 5 functions in your file
You can use bc (man bc) to check your results.

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0C-more_malloc_free
    File: 101-mul.c

------------THE END------------------
