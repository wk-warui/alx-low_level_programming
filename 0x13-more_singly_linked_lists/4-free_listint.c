#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the listint list to be freed.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head)
	{
		fr = head->next;
		free(head);
		head = fr;
	}
}
