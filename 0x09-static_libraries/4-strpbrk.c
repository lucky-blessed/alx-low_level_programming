#include "main.h"
/**
 * _strpbrk - To seach a string for any of a set of bytes.
 * @s: Pointer to the string to search for bytes from accept string.
 * @accept: Pointer to the string containing the byte to search for.
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
