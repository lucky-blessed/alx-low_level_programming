#include "main.h"
#include <string.h>
/**
 * string_nconcat - Concatenates two strinngs.
 * @s1: The first string.
 * @s2: The second string
 * @n: The max number of bytes from s2 to concatenate.
 *
 * Return: Pointer of the allocated memory with concatenated string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lent1, lent2, i, j;
	char *contd;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lent1 = strlen(s1);
	lent2 = strlen(s2);
	if (n >= lent2)
		n = lent2;
	contd = malloc(sizeof(char) * (lent1 + n + 1));
	if (contd == NULL)
		return (NULL);
	for (i = 0; i < lent1; i++)
		contd[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		contd[i] = s2[j];
	contd[i] = '\0';
	return (contd);
}
