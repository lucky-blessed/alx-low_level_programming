#include "lists.h"
<<<<<<< HEAD

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
=======
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the start of a listint_t list
 * @head: Pointer to the head of the list
 * @n: Integer to be stored in the new node.
 * Return: Address of the new element or null otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
