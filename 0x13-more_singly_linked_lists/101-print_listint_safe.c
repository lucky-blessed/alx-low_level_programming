#include "lists.h"
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
}
