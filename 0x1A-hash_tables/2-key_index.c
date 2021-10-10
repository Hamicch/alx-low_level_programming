#include "hash_tables.h"
#include "1-djb2.c"

/**
 * key_index - gives the index of a key
 * @key: The key of the index
 * @size: The size of the array
 *
 * Return: The index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
