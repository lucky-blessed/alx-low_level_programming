#include "main.h"
/**
 * _memset - Function to fill memory with constant byte
 * @s: Pointer to the memory area
 * @b: The constant byte to fill the memory with
 * @n: Number of bytes to be filled.
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
