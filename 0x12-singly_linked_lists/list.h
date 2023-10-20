#ifndef LINKED
#define LINKED

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Singly linked list
 * @str: String - malloced string
 * @nxt: Pointer to the next node
 *
 * Description: Structure of singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int lent;
	struct list_s _next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

