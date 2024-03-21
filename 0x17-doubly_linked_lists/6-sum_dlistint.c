#include "lists.h"

/**
 * sum_dlistint - Sum of all the data (n)
 * of a dlistint_t list
 *
 * @head: List's head
 * Return: sum;
 */
int sum_dlistint(dlistint_t *head)
{
	int datasum;

	datasum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			datasum += head->n;
			head = head->next;
		}
	}

	return (datasum);
}
