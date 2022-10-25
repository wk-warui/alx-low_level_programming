#include "lists.h"
#include<string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer of elements
 * @char: character
 * @str: pointer to the string
 *
 * Return: address of the new element
 * and NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
