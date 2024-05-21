#include "main.h"
<<<<<<< HEAD

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

=======
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
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
	return (1);
}
