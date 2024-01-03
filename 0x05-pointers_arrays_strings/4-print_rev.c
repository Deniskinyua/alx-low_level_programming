#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int counter = 0;
	int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		counter++;
	}

	for (n = (counter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
