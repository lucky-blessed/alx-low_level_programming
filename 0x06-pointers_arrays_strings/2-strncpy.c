#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: Destination to copy string to
 * @src: source of strings to copy
 * @n: Available bytes in dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len_dest = 0;
	int i = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
