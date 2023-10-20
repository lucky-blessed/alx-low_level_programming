#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the list_t list.
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
