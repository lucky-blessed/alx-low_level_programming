#include "lists.h"

/**
 * listint_len - Prints the number of elements in a list_t list.
 * @h: Pointer to the head of the list
 * Return: Number of eleents in the list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_counter = 0;

	while (current != NULL)
	{
		current = current->next;
		node_counter++;
	}
	return (node_counter);
}
