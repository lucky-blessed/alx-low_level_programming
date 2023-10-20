#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the fisrt node of the list.
 */
void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold->str);
		free(hold);
	}
}
