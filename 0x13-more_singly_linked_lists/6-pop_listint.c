#include "lists.h"
#include <stdio.h>
#include <stdlib>

/**
 * pop_listint - Deletes the node of a listint_t list
 * and return the head node's data (n)
 * @n: The head node data to return
 * Return: The head node data @n, 0 if empty
 */

int pop_listint(listint_t **head)
{
	int *placeholder;

	if (head)
	{
		while (*head)
		{
			placeholder = *head;
			*head = placeholder->next;
			placeholder->next = n;
			free(placeholder);

			return (n);
		}

	}
	else
	{
		return (0);
	}

}
