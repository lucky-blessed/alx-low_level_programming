#include "main.h"
/**
 * _memcpy - Function that copies memory area.
 * @dest: Pointer to the destination memory area
 * @src: Pointer to source memory area
 * @n: Number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
