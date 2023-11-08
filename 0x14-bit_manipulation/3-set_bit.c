#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to an unsigned long integer
 * @index: index starting from zero
 * Return: 1 on success or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
