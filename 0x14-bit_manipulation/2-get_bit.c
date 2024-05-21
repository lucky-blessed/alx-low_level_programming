#include "main.h"
<<<<<<< HEAD

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
=======
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: unsigned long integer
 * @index: index starting from zero
 * Return: bit value at index or -1 at failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit_value = (n >> index) & 1;
	return (bit_value);
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
