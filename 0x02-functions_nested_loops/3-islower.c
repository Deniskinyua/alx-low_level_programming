#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: passed character of the alphabet
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
int i;

for (i = 'a'; i <= 'z'; ++i)
{
if (c == i)
{
return (1);
}
}
return (0);
}

