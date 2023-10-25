#include "lists.h"

/**
 * get_nodeint_at_index - Prints the nth node of a listint_t list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting from 0.
 * Return: Pointer to the nth node of null if otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int counter = 0;

	while (current != NULL)
	{
		if (counter == index)
			return (current);
		counter++;
		current = current->next;
	}
	return (NULL);
}
