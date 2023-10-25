#include "lists.h"
/**
 * find_listint_loop - Finds the start of the loop in a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: The adddress of the node where the loop begings or NULL otherwise.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
