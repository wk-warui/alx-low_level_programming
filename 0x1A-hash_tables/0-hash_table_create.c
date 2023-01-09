#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: Apointer to the newly created hash table,
 * otherwise NULL if sth went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htbl;
	unsigned long int l;

	htbl = malloc(sizeof(hash_table_t));
	if (htbl == NULL)
		return (NULL);

	htbl->size = size;
	htbl->array = malloc(sizeof(hash_node_t *) * size);
	if (htbl->array == NULL)
		return (NULL);
	for (l = 0; l < size; l++)
		htbl->array[l] = NULL;

	return (htbl);
}
