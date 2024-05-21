#include "lists.h"
<<<<<<< HEAD

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
=======
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
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
