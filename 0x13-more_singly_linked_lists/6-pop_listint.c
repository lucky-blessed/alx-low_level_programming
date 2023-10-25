#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to a poiinter to the  head of the list.
 * Return: The head node data or 0 for empty list.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
