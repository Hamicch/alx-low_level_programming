#include "lists.h"

/**
 * free_listint - Frees a list_t list
 * @head: Pointer to the head/first node of list_t
 */

void free_listint(listint_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
