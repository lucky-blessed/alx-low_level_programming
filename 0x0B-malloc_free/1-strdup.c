#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Use malloc to duplicate a string.
 * @str: The string to be duplicated.
 *
 * Re`turn: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int lent = 0;
	unsigned int i;

	if (str == NULL)
	return (NULL);
	while (str[lent] != '\0')
		lent++;
	dup = malloc(sizeof(char) * (lent + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= lent; i++)
		dup[i] = str[i];
	return (dup);
}
