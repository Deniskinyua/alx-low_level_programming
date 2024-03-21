#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: List's head
 * @idx: Neww node's index
 * @n: New node's value
 * Return: New node's address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *listhead;
	unsigned int x;

	newnode = NULL;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		listhead = *h;
		x = 1;
		if (listhead != NULL)
			while (listhead->prev != NULL)
				listhead = listhead->prev;
		while (listhead != NULL)
		{
			if (x == idx)
			{
				if (listhead->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->next = listhead->next;
						newnode->prev = listhead;
						listhead->next->prev = newnode;
						listhead->next = newnode;
					}
				}
				break;
			}
			listhead = listhead->next;
			i++;
		}
	}

	return (newnode);
}
