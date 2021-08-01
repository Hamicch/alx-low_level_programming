#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include "strlen.c"

/**
 * add_node - Adds a new node at the beginning of list_t list
 * @new_head: Address of node
 * @str: New node to add
 * Return: Address of new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node_ptr = malloc(sizeof(list_t));

	if (!new_node_ptr)
		return (NULL);

	new_node_ptr->str = strdup(str);

	if (!(new_node_ptr->str))
	{
		free(new_node_ptr);
		return (NULL);
	}

	new_node_ptr->len = _strLen(new_node_ptr->str);
	new_node_ptr->next = *head;

	*head = new_node_ptr;

	return (*head);
}
