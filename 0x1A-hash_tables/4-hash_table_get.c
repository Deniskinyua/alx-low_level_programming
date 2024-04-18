#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieved a value associated with a key
 * @key: key
 * @ht: hash table
 *
 * Return: Value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *box;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
	{
		return (NULL);
	}
	box = ht->array[idx];
	while (box && strcmp(box->key, key) != 0)
	{
		box = box->next;
	}
	return ((box == NULL) ? NULL : box->value);
}
