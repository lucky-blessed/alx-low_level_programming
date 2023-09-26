#include "main.h"
/**
 * _strstr - Function to locate substring.
 * @haystack: Pointer to the string to search its substring
 * @needle: Pointer to the substring to search for
 * Return: 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
