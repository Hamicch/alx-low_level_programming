#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the begining of a listint_t list
 * @n: Nodes in the @listint_t
 * Return: The address of a new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));

	if (new_head != NULL)
		new_head->n = n;
		new_head->next = *head;
		*head = new_head;
		return (new_head);

	return (NULL);
}
