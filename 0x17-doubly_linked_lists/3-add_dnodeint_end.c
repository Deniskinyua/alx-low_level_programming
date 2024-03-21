#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of dlistint_t list
 *
 * @head: list's head
 * @n: Element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *head;
	dlistint_t *newelem;

	new = malloc(sizeof(dlistint_t));
	if (newelem == NULL)
		return (NULL);

	newelem->n = n;
	newelem->next = NULL;

	lhead = *lhead;

	if (lhead != NULL)
	{
		while (lhead->next != NULL)
			lhead = head->next;
		lhead->next = newelem;
	}
	else
	{
		*head = newelem;
	}

	newelem->prev = lhead;

	return (newelem);
}
