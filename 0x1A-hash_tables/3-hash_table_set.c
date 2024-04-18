#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @value : value associated with the key
 * @key: key & cannot be an empty string
 * @ht: hash table you want to add/update the key/value to
 *
 * Description: Uses the djb2 algorithm
 * value must be duplicated & can be an empty string
 * Incase of collion, add the new node at the begining of the list
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hsh;
	char *valcp;
	unsigned long int idx, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	valcp = strdup(value);
	if (valcp == NULL)
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	for (x = idx; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = valcp;
			return (1);
		}
	}
	hsh = malloc(sizeof(hash_node_t));
	if (hsh == NULL)
	{
		free(valcp);
		return (0);
	}
	hsh->value = valcp;
	hsh->next = ht->array[idx];
	ht->array[idx] = hsh;

	return (1);
}
