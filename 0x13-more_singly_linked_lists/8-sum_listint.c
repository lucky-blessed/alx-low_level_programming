#include "lists.h"

/**
<<<<<<< HEAD
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

=======
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
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
	return (sum);
}
