#include "main.h"
/**
 * _strlen - Count and returns the lenght of a string
 * @s: the string to count its lenght
 *
 * Return: The lenght of a string
 */
int _strlen(char *s)
{
	int str_lenght = 0;

	while (*s != '\0')
	{
		str_lenght++;
		s++;
	}
	return (str_lenght);
}
