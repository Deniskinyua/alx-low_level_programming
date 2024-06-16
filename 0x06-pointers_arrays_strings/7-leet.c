#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @s: string
 * Return: encoded string
 */
char *leet(char *s)
{
int cnt = 0, x;
int lowercase[] = {97, 101, 111, 116, 108};
int uppercase[] = {65, 69, 79, 84, 76};
int nums[] = {52, 51, 48, 55, 49};

while (*(s + cnt) != '\0')
{
for (x = 0; x < 5; ++x)
{
if (*(s + cnt) == lowercase[x] || *(s + cnt) == uppercase[x])
{
*(s + cnt) = nums[x];
break;
}
}
cnt++;
}
return (s);
}
