#include "main.h"
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
}
