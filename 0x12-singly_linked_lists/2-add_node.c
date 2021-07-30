#include "lists.h"

/**
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t new_head;

	new_str = strup(str);

	while (new_str)
	{
		new_head->str = new_data;

		new_head->next = (*head);

		(*head) = new_head;

		if (new_head->str)
			return (&new_head);
		else
			return (NULL);
	}

	return (0);
}
