#include "lists.h"

/**
<<<<<<< HEAD
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
=======
 * get_nodeint_at_index - Prints the nth node of a listint_t list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting from 0.
 * Return: Pointer to the nth node of null if otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int counter = 0;

	while (current != NULL)
	{
		if (counter == index)
			return (current);
		counter++;
		current = current->next;
	}
	return (NULL);
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
