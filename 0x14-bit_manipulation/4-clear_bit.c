#include "main.h"
<<<<<<< HEAD

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

=======
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
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
	return (1);
}
