#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of the memory to be allocated.
 *
 * Return: Pointer to the allocated memory, or terminate with 98 as exit value.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
