include <stdlib.h>
#inclue "lists.h"

/**
 * list_len - Calulates the number of elements in a list_t
 * @h: Pointer to the head node of the list_t
 * Return: size_t, the number of nodes in a list_t
 */

size_t list_len(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		num_of_nodes++;
		h = h->next;
	}

	return (num_of_nodes);
}
