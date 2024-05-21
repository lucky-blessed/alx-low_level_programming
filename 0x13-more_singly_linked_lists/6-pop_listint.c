#include "lists.h"

/**
<<<<<<< HEAD
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
=======
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
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
