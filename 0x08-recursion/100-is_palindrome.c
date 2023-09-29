#include "main.h"
#include <string.h>
/**
 * is_palin - Assist to check if a string is palindrome recursively.
 * @s: The string under check.
 * @first: The first index.
 * @last: The last index.
 * Return: Returns 1 if string is palindrome, 0 therwise.
 */
int is_palin(char *s, int first, int last)
{
	if (first >= last)
	{
		return (1);
	}
	if (s[first] != s[last])
	{
		return (0);
	}
	return (is_palin(s, first + 1, last - 1));
}

/**
 * is_palindrome - Returns 1 if string is palindrome, 0 otherwise.
 * @s: The string under check.
 * Return: 1 if string is palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int lenght;

	lenght = strlen(s);
	if (lenght <= 1)
	{
		return (1);
	}
	return (is_palin(s, 0, lenght - 1));
}
