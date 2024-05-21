#include "lists.h"

/**
<<<<<<< HEAD
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
=======
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

>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
<<<<<<< HEAD
		temp->next = new;
	}

	return (*head);
=======
		temp->next = new_node;
	}
	return (new_node);
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
