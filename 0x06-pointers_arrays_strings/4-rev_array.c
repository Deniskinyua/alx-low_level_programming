#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: integer
 * @n : Number of elements of the array
 * Return :  reversed contents
 */

void reverse_array(int *a, int n)
{
int x, y = n - 1;

for (x = 0; x < n / 2; x++)
{
int strt, end;

strt = a[x];
end = a[y];
a[x] = end;
a[y] = strt;
y--;
}
}
