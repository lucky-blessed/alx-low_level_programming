#include "main.h"
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
}
