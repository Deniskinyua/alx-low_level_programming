# 0x07.c -EVEN MORE POINTERS, ARRAYS AND STRINGS

## LEARNING OBJECTIBES

### General:
* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings

## REQUIREMENTS
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty style`. It will be checked using `betty-style.pl` and `betty-doc.pl`
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
* You are allowed to use `_putchar`
* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
* In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
* Don’t forget to push your header file

## TASKS

|Task|Task Description|
|---------------|-------------------|
|Task 0: 0-memset.c|Write a function that fills memory with a constant byte; Prototype: `char *_memset(char *s, char b, unsigned int n);`The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`; Returns a pointer to the memory area `s`|
|Task 1: `memcpy.c`|Write a function that copies memory data (Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`; Returns a pointer to `dest`; `FYI`: The standard library provides a similar function: `memcpy`. Run man `memcpy` to learn more.)|
|Task 2: `2-strchr.c`|Write a function that locates a character in a string.(Prototype: `char *_strchr(char *s, char c);`Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found; `FYI`: The standard library provides a similar function: `strchr`. Run `man strchr` to learn more.)|
|Task 3: `3-strspn.c`|Write a function that gets the length of a prefix substring: (`Prototype: unsigned int _strspn(char *s, char *accept);`; Returns the number of bytes in the initial segment of `s` which consist only of bytes from accept; `FYI`: The standard library provides a similar function: `strspn`. Run `man strspn` to learn more.)|
