#include "lists.h"
<<<<<<< HEAD

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

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
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
=======
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listist_t list safely
 * @h: Pointer to a pointer to the head of the list.
 * Return: The size of the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp = NULL;
	size_t nodes_counter = 0;

	while (current != NULL)
	{
		nodes_counter++;
		if (current->next >= current)
		{
			temp = current->next;
			*h = NULL;
			return (nodes_counter);
		}
		temp = current->next;
		free(current);
		current = temp;
	}
	*h = NULL;
	return (nodes_counter);
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
