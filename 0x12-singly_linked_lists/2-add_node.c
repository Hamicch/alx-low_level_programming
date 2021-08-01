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
	list_t *new;
	int length = _strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
