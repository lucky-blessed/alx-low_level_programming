#include "main.h"
/**
 * clear_bit - Stes the value of a bit to 0 at a given index
 * @n: Unsigned long integer.
 * @index: index startng from zero
 * Return: 1 success or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
