#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer a
 * @b: pointer b
 * Return: no return since function is void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
