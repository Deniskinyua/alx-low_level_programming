#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @size : Size of the array
 * @key: key
 * Description: Uses the djb2 algorithm
 *
 * Return: index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
