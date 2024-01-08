#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function searches set of bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: should return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
