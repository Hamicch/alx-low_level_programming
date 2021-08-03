#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t
 * @n: The element of the node to be added
 * @head: The head/first node of the list
 * Return: The address of the new element, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head;
	listint_t *last_node;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->n = n;
	new_head->next = NULL;

	if (*head == NULL)
	{
		*head = new_head;
		return (new_head);
	}

	else
	{
		last_node = *head;

		while (last_node->next)
			lastnode = lastnode->next;
		lastnode->next = new_head;

	return (new_head);
}
