#include "main.h"
/**
 * _strcat - Function that concatenates two strings
 * @dest: Strings to be be concatenated to.
 * @src: Strings to be concatenated to dest strings
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int i = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
