#include "lists.h"

/**
<<<<<<< HEAD
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
=======
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
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
