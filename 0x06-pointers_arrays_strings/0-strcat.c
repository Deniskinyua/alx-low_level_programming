#include "main.h"
/**
 * _strcat - Concatenate two strings
 * @dest: String to be appended to
 * @src: String to be appended
 * Return: pointer to the resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
int x = 0, y = 0;

while (*(dest + x) != '\0')
{
x++;
}
while (*(src + y) != '\0' && x < 97)
{
*(dest + x) = *(src + y);
x++;
y++;
}
*(dest + x) = '\0';
return (dest);
}
