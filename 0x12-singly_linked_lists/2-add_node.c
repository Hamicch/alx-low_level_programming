#include "lists.h"
#include <stddef.h>

/**
 * add_node - Adds a new node at the beginning of list_t list
 * @head: Address of node
 * @str: New node to add
 * Return: Address of new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	int len = _strlen(str);


	new_head = malloc(sizeof(list_t));

	if (new_head != NULL)
	{
		new_head->str = strdup(str);
		new_head->len = len;
		new_head->next = *head;
		*head = new_head;
		return (new_head);
	}
	else
	{
		return (NULL)
	}
}
