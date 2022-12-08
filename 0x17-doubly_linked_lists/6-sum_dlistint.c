#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 *	(n) of a dlistint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h;

	for (h = head; h != NULL; h = h->next)
		sum += h->n;

	return (sum);
}
