#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node at index of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 on success or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return  (1);
	}
	while (temp != NULL && counter != index)
	{
		prev = temp;
		temp = temp->next;
		counter++;
	}
	if (temp == NULL)
		return (-1);
			prev->next = temp->next;
	free(temp);
	return (1);
}
