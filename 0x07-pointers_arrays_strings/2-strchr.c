#include "main.h"
/**
 * _strchr - Function to locate a character in a string
 * @s: A pointer to the string in which to locate the character, c.
 * @c: The character to be located.
 * Return: 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i;
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
