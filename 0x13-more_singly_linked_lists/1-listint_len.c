#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked listint_t list
 * @listint_t: holds elements
 * @h: pointer to the header file
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
