#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all element of list_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_counter = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_counter++;
	}
	return (node_counter);
}
