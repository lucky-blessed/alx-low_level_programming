#include "main.h"
/**
 * _strspn - A function to get the length of a prefix substring.
 * @s: Pointer to the string to calculate length of its prefix substring
 * @accept: Pointer to string's character to accept in the prefix substring.
 * Return: 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int seen = 1;
	int i;

	while (*s != '\0')
	{
		seen = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				seen = 1;
				break;
			}
		}
		if (seen)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
