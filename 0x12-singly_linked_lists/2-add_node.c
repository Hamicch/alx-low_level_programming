#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *  * _strlen - Returns the length of a string
 *   * @s: The character containing the string
 *    * Return: The length of the character
 *     */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;						               
		s++;								        }

	return (len);
}

/**
 * add_node - Adds a new node at the beginning of list_t list
 * @head: Address of node
 * @str: New node to add
 * Return: Address of new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	int length = _strlen(str);


	new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);

		new_head->str = strdup(str);
		new_head->len = length;
		new_head->next = *head;
		*head = new_head;
		return (new_head);
}
