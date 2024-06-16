#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @str: String to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char alphaROT[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int x = 0, y;

while (*(str + x) != '\0')
{
for (y = 0; y <= 51; y++)
{
if (*(str + x) == alphabet[y])
{
*(str + x) = alphaROT[y];
break;
}
}
x++;
}
return (str);
}
