#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocate a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: size of the allocated ptr space.
 * @new_size: New memory block size.
 *
 * Return: Pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);
	free(ptr);
	return (new_ptr);
}
