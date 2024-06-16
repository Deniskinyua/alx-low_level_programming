#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *s)
{
int convert = 32, cnt, idx;

char chars[] = {' ', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};

for (idx = 0; s[idx] != '\0'; idx++)
{
if (s[idx] >= 'idx' && s[idx] <= 'z')
{
s[idx] = s[idx] - convert;
}
convert = 0;

for (cnt = 0; chars[cnt] != '\0'; cnt++)
{
if (chars[cnt] == s[idx])
{
convert = 32;
break;
}
}
}
return (s);
}
