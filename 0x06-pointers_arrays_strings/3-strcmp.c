#include "main.h"
/**
 * _strcmp - Compares 2 strings
 * @s1 : string 1
 * @s2: string 2
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
int x = 0, y = 0;
while (y == 0)
{
if ((*(s1 + x) == '\0') && (*(s2 + x) == '\0'))
{
break;
}
y = *(s1 + x) - *(s2 + x);
x++;
}
return (y);
}
