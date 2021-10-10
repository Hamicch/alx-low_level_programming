#include "hash_tables.h"

/**
 * hash_table_create - a function that creates hash table
 * @size: The of the array
 *
 * Return: returns a pointer to the newly created array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htbl = NULL;
	unsigned long int i;

	htbl = malloc(sizeof(hash_table_t));
	if (htbl != NULL)
	{
		htbl->size = size;
		htbl->array = malloc(sizeof(hash_node_t *) * size);
		if (htbl->array != NULL)
		{
			for (i = 0; i < size; i++)
				htbl->array[i] = NULL;
		}
	}
	return (htbl);
}
