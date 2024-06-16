#include "main.h"
/**
 * print_number - Prints an integer
 * @n: The integer
 * Return: integer
 */
void print_number(int n)
{
unsigned int x, y, cnt;

if (n < 0)
{
_putchar(45);
x = n * -1;
}
else
{
x = n;
}
y = x;
cnt = 1;

while (y > 9)
{
y /= 10;
cnt *= 10;
}
for (; cnt >= 1; cnt /= 10)
{
_putchar(((x / cnt) % 10) + 48);
}
}
