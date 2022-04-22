			0x12.C-SINGLY LINKED LISTS


		LEARNING OBJECTIVES

(i) When and why using linked lists versus arrays
(ii) How to build and use linked lists. 


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
    (xii) The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
    (xiii) Don’t forget to push your header file
    (xiv) All your header files should be include guarded

		MORE INFO: 

	Please use this data structure for this project:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


		MANDATORY TASKS
TASK 0: PRINT LIST

Write a function that prints all the elements of a list_t list.

    Prototype: size_t print_list(const list_t *h);
    Return: the number of nodes
    Format: see example
    If str is NULL, print [0] (nil)
    You are allowed to use printf

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 0-print_list.c

TASK 1: LIST LENGTH

Write a function that returns the number of elements in a linked list_t list.

    (i) Prototype: size_t list_len(const list_t *h);

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 1-list_len.c

TASK 2: ADD NODE

Write a function that adds a new node at the beginning of a list_t list.

    (i) Prototype: list_t *add_node(list_t **head, const char *str);
    (ii) Return: the address of the new element, or NULL if it failed
    (iii) str needs to be duplicated
    (iv) You are allowed to use strdup

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 2-add_node.c

TASK 3: ADD NODE AT THE END

Write a function that adds a new node at the end of a list_t list.

    (i) Prototype: list_t *add_node_end(list_t **head, const char *str);
    (ii) Return: the address of the new element, or NULL if it failed
    (iii) str needs to be duplicated
    (iv) You are allowed to use strdup


Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 3-add_node_end.c

TASK 4: FREE LIST

Write a function that frees a list_t list.

    (i) Prototype: void free_list(list_t *head);

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 4-free_list.c


		ADVANCED TASKS
