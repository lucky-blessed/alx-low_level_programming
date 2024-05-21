#include "lists.h"

/**
<<<<<<< HEAD
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
=======
 * reverse_listint - Reverses a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: Pointer to first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
	return (*head);
}
