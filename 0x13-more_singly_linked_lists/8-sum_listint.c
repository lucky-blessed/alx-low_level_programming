#include "lists.h"

/**
 * sum_listint - Prints the sum of all n data of a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all data or 0 otherwise.
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
