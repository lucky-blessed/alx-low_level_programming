#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Inserts a new node at a specific point in a list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index of the position for the new node.
 * @n: Value to be stored in the new node.
 * Return: Pointer to the new node or 0 otherise.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int counter = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (temp != NULL  && counter < idx - 1)
	{
		temp = temp->next;
		counter++;
	}
	if (temp == NULL || counter < idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
