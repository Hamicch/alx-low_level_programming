#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints to standard output
 * @list: List to print
 * @h: A node in list_t
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
        int num_of_ele = 0;

        while (h)
        {
                if (h->str)
                        printf("[0] (nil)\n");
                else
                        printf("[%i] %s\n", h->len, h->next);
                h = h->next;
                num_of_ele++;
        }
        return (num_of_ele);
}
