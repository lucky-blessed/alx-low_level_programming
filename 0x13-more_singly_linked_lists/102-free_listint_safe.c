#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listist_t list safely
 * @h: Pointer to a pointer to the head of the list.
 * Return: The size of the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp = NULL;
	size_t nodes_counter = 0;

	while (current != NULL)
	{
		nodes_counter++;
		if (current->next >= current)
		{
			temp = current->next;
			*h = NULL;
			return (nodes_counter);
		}
		temp = current->next;
		free(current);
		current = temp;
	}
	*h = NULL;
	return (nodes_counter);
}
