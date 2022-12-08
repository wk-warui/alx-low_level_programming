#include "lists.h"

/**
 * dlistint_len - prints the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the list
 *
 * Return: Number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
