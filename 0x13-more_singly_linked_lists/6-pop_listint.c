#include "lists.h"
#include <stdlib>

/**
 * pop_listint - Deletes the node of a listint_t list
 * and return the head node's data @n
 * @head: Double pointer the head node
 * Return: The head node data n, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *placeholder;
	int next_node;


	if (!(*head))
		return (0);

	placeholder = *head;
	next_node = placeholder->n;
	*head = placeholder->next;

	free(placeholder);
	return (next_node);


}
