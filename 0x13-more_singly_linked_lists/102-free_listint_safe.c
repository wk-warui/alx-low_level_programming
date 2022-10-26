#include "lists.h"

/**
 * looped_listint_count - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped  0
 * Otherwise, the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *abc, *xyz;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	abc = head->next;
	xyz = (head->next)->next;

	while (xyz)
	{
		if (abc == xyz)
		{
			abc = head;
			while (abc != xyz)
			{
				nodes++;
				abc = abc->next;
				xyz = xyz->next;
			}

			abc = abc->next;
			while (abc != xyz)
			{
				nodes++;
				abc = abc->next;
			}

			return (nodes);
		}

		abc = abc->next;
		xyz = (xyz->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address of
 * the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
