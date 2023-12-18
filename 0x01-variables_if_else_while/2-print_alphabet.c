#include <stdio.h>

/**
 * main - will print the alphabet in lowercase,
 * the output will be followed by a new line
 * Return - Always 0 (Success)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
