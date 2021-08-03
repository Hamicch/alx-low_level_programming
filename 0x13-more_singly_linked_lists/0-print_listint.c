#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements in the listint_t list
 * @h: A node in list_t
 * Return: The number of nodes
 */

size_t print_listint(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		if (h->n == NULL)
			printf(0);
		else
			printf("%i\n", h->n);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
