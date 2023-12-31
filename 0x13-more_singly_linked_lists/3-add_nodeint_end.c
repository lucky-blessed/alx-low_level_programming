#include "lists.h"

/**
 * add_nodeint_end - Add a new node to the end of a listint_t list.
 * @head: Poointer to a pointer to the head of the list.
 * @n: Integer to be stored in the new node.
 * Return: Address of the new element or Null otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
