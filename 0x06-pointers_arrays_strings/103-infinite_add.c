#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer that the function will use to store result
 * @size_r: Buffer size
 * Return: If result cannot be stored in r, return 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int x = 0, y = 0, m, n, o, p, q = 0;

while (*(n1 + x) != '\0')
{
x++;
}
while (*(n2 + y) != '\0')
{
y++;
}
if (x >= y)
{
n = x;
}
else
{
n = y;
}
if (size_r <= n + 1)
{
return (0);
}
r[n + 1] = '\0';
x--, y--, size_r--;
o = *(n1 + x)-48, p = *(n2 + y)-48;
while (n >= 0)
{
m = o + p + q;
if (m >= 10)
{
q = m / 10;
}
else
{
q = 0;
}
if (m > 0)
{
*(r + n) = (m % 10) + 48;
}
else
{
*(r + n) = '0';
}
if (x > 0)
{
x--, o = *(n1 + x)-48;
}
else
{
o = 0;
}
if (y > 0)
{
y--, p = *(n2 + y)-48;
}
else
{
p = 0;
}
n--, size_r--;
}
if (*(r) == '0')
{
return (r + 1);
}
else
{
return (r);
}
}
