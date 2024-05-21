#include "lists.h"
<<<<<<< HEAD

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hptr);
	return (nnodes);
=======
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - Prints a listint list.
 * @head: Pointer to the head of the list
 * Return: Number of nudes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *small = head, *big = head;
	size_t counter = 0;

	while (small != NULL && big != NULL && big->next != NULL)
	{
		printf("[%p] %d\n", (void *)small, small->n);
		small = small->next;
		big = big->next->next;
		counter++;
		if (small == big)
		{
			printf("[%p] %d\n", (void *)small, small->n);
			printf("-> [%p] %d\n", (void *)big->next, big->next->n);
			exit(98);
		}
	}
	return (counter);
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
