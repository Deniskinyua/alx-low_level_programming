			0x0E.C-STRUCTURES, typedef

		LEARNING OBJECTIVES

    (i) What are structures, when, why and how to use them
    (ii) How to use typedef

		REQUIREMENTS

    (i) Allowed editors: vi, vim, emacs
    (ii) All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    (iii) All your files should end with a new line
    (iv) A README.md file, at the root of the folder of the project is mandatory
    (v) Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    (vi) You are not allowed to use global variables
    (vii) No more than 5 functions per file
    (viii) The only C standard library functions allowed are printf, malloc, free and exit.
    (ix) In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    (x) Don’t forget to push your header file
    (xi) All your header files should be include guarded


TASK 0: "Poppy"

Define a new type struct dog with the following elements:

    (i) name, type = char *
    (ii) age, type = float
    (iii) owner, type = char *

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0E-structures_typedef
    File: dog.h


TASK 1: "A dog is the only thing on earth that loves you more than you love yourself"

Write a function that initialize a variable of type struct dog

    (i) Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0E-structures_typedef
    File: 1-init_dog.c


TASK 2: "A dog will teach you unconditional love. If you can have that in your life, things won't be too bad"

Write a function that prints a struct dog

    (i) Prototype: void print_dog(struct dog *d);
    (ii) Format: see example bellow
    (iii) You are allowed to use the standard library
    (iv) If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
    (v) If d is NULL print nothing.

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0E-structures_typedef
    File: 2-print_dog.c


TASK 3: "Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read"

Define a new type dog_t as a new name for the type struct dog.


Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0E-structures_typedef
    File: dog.h


TASK 4: "A door is what a dog is perpetually on the wrong side of "

Write a function that creates a new dog.

    (i) Prototype: dog_t *new_dog(char *name, float age, char *owner);
    (ii) You have to store a copy of name and owner
    (iii) Return NULL if the function fails

Repo:

    (i) GitHub repository: alx-low_level_programming
    (ii) Directory: 0x0E-structures_typedef
    (iii) File: 4-new_dog.c



TASK 5: "How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg"

Write a function that frees dogs.

    (i) Prototype: void free_dog(dog_t *d);

Repo:

    (i) GitHub repository: alx-low_level_programming
    (ii) Directory: 0x0E-structures_typedef
    (iii) File: 5-free_dog.c

..............THE END .............................
