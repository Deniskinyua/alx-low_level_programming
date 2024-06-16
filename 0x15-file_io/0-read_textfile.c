#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints to POSIX std out
 * @filename: the file
 * @letters: the letters
 * Return: if file cannot be read or is NULL  or
 * write fails or does not write the expected amount of bytes-> 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int x;
ssize_t y, z;
char *buffer;

if (!filename)
{
return (0);
}
x = open(filename, O_RDONLY);

if (x == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);

if (!buffer)
{
return (0);
}
y = read(x, buffer, letters);
z = write(STDOUT_FILENO, buffer, y);
close(x);
free(buffer);
return (z);
}
