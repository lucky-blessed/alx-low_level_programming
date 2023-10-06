#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Function to concatenate two strings.
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated.
 *
 * Return: Pointer to newly allocated concatenated string or NULL otherwise.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	unsigned int length1 = 0, length2 = 0;
	char *contd;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	contd = malloc(sizeof(char) * (length1 + length2 + 1));
	if (contd == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		contd[i] = s1[i];
	for (j = 0; j <  length2; j++)
		contd[i + j] = s2[j];
	contd[i + j] = '\0';
	return (contd);
}
