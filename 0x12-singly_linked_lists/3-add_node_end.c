#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the first node of the list_t list.
 * @str: String to be duplicated and added not the new node.
 * Return: Address of the element or NULL otherwise.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	char *str_dup;
	unsigned int len = 0;

	while (str[len])
		len++;

	str_dup = strdup(str);
	if (str_dup == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(str_dup);
		return (NULL);
	}
	newNode->str = str_dup;
	newNode->len = len;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
