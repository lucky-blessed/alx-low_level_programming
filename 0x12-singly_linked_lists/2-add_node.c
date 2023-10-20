#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the first node of the list.
 * @str: String to be dup and added as new node
 * Return: Address of new element or otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
