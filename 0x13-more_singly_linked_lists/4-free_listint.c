#include "lists.h"
<<<<<<< HEAD

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
=======
/**
 * free_listint - frees a listint_t list
 * @head: Pointer to the head of the list.
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

<<<<<<< HEAD
	while ((temp = head) != NULL)
	{
=======
	while (head != NULL)
	{
		temp = head;
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
		head = head->next;
		free(temp);
	}
}
