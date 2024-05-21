#include "main.h"
<<<<<<< HEAD

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
=======
/**
 * flip_bits - Returns the number of bits you will need to
 * flip to get from one number to another.
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: Returns bit counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_outcome = n ^ m;
	unsigned int counter = 0;

	while (xor_outcome != 0)
	{
		counter += xor_outcome & 1;
		xor_outcome >>= 1;
	}
	return (counter);
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
