0x0b.c-malloc, free, \n In this project we learn about the use of malloc () and free (), functions in dynamic allocation of memory in C. The intent is to (i) Lear the difference between Automatc and Dynamic Allocation of memory, (ii) What malloc () and free () are and how to use them, (iii) Why and when to use malloc (), and (iv) How to use valgrind to check memory leak.

                                                                             MANDATORY TASKS


Task 0: "Float Like a Buterfly, Sting Like A Bee"

Write a function that creates an array of chars, and initializes it with a specific char.

    Prototype: char *create_array(unsigned int size, char c);
    Returns NULL if size = 0
    Returns a pointer to the array, or NULL if it fails \n

Task 1: "The Woman Who Has No Imagination Has No Wings"

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

    (i) Prototype: char *_strdup(char *str);
    (ii) The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
    (iii) Returns NULL if str = NULL
    (iv) On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

Task 2: "He Who is Not Courageous Enough to Take Risks Will Accomplish Nothing in Life"

Write a function that concatenates two strings.

    (i) Prototype: char *str_concat(char *s1, char *s2);
    (ii) The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
    (iii) if NULL is passed, treat it as an empty string
    (iv) The function should return NULL on failure

Task 3: "If You Even Drem of Beating Me You'dBetter Wake Up and Apoligize"

Write a function that returns a pointer to a 2 dimensional array of integers.

    (i) Prototype: int **alloc_grid(int width, int height);
    (ii) Each element of the grid should be initialized to 0
    (iii) The function should return NULL on failure
    (iv) If width or height is 0 or negative, return NULL

Task 4: "It's Not Bragging If You Can Back It Up"

Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

    (i) Prototype: void free_grid(int **grid, int height);
    (ii) Note that we will compile with your alloc_grid.c file. Make sure it compiles.

                                                                                 
										 ADVANCED TASKS

TASK 5: "It Isn't the Mountains Aheadto Climb that Wear You Out; It's the Pebble in your Shoe"

Write a function that concatenates all the arguments of your program.

    (i) Prototype: char *argstostr(int ac, char **av);
    (ii) Returns NULL if ac == 0 or av == NULL
    (iii) Returns a pointer to a new string, or NULL if it fails
    (iv) Each argument should be followed by a \n in the new string

TASK 6: "I Will Show You How Great I Am"

Write a function that splits a string into words.

    (i) Prototype: char **strtow(char *str);
    (ii) The function returns a pointer to an array of strings (words)
    (iii) Each element of this array should contain a single word, null-terminated
    (iv) The last element of the returned array should be NULL
    (v) Words are separated by spaces
    (vi) Returns NULL if str == NULL or str == ""
    (vii) If your function fails, it should return NULL

