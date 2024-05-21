#include "lists.h"

/**
<<<<<<< HEAD
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
=======
 * free_listint2 - Frees a listint_t list and set the head to null.
 * @head: Pointer to a pointer to the head of the list.
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
<<<<<<< HEAD
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
=======

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
