#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates array of character and initializes it with char
 * @size: Size of the array
 * @c: Char to initialize the array
 *
 * Return: A pointer to the array created or NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
