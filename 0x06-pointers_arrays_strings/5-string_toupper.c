#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s : string
 * Return: string changed to upper case
 */

char *string_toupper(char *s)
{
int start = 0;
int chk = 'a' - 'A';

for (start = 0; s[start] != '\0'; start++)
{
if (s[start] >= 'a' && s[start] <= 'z')
{
s[start] = s[start] - chk;
}
}
return (s);
}
