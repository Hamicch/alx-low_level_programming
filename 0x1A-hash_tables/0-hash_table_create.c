#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The number of top-level items in the hash table.
 *
 * Return: A pointer to the created hash table, otherwise NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl = NULL;
	unsigned long int i;

	tbl = malloc(sizeof(hash_table_t));
	if (tbl != NULL)
	{
		tbl->size = size;
		tbl->array = malloc(sizeof(hash_node_t *) * size);
		if (tbl->array != NULL)
		{
			for (i = 0; i < size; i++)
				tbl->array[i] = NULL;
		}
	}
	return (tbl);
}
