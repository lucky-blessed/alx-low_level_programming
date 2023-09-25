#include "main.h"
/**
 * _strchr - A function that locates a character in a string.
 * @s: A pointer to the string to locate character c.
 * @c: The character to be located.
 * Return: s or null.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
