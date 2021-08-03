#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements in the listint_t list
 * @h: A node in list_t
 * Return: The number of nodes
 */

size_t print_listint(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
