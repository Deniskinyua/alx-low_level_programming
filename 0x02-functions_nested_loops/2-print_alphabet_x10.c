#include "main.h"
/**
 * print_alphabet_x10 - a function printing 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int m, n;

	n = 0;

	while (n < 10)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		n++;
		_putchar('\n');
	}
}
