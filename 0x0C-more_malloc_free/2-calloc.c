#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory to an array using malloc and initialize to 0
 * @nmemb: Number of elements in the array.
 * @size: Size of each elements in bytes.
 *
 * Return: Pointer to the allocated memmory or NULL if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
