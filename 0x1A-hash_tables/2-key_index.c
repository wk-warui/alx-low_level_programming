#include "hash_tables.c"

/**
 * key_index - gives an index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: The index at which the key/value pair should
 *		ba stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
