#include "main.h"
/**
 * _strncat - function that concateate two strings with n byte
 * @dest: destination to be concatenated to.
 * @src: strings to be concatenated to dest.
 * @n: number of byte from src.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
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
