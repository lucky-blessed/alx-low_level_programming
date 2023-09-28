#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string.
 * @s: The string whose length is to be calculated.
 * Return: Length of string s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
