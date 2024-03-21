#include "lists.h"

/**
 * dlistint_len - returns no of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	if (h == NULL)
		return (x);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
