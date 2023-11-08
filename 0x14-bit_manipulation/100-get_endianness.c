#include "main.h"
/**
 * get_endianness - Checks endianess
 *
 * Return: 0 if big-endian and 1 if little-endian
 */
int get_endianness(void)
{
	unsigned int number = 1;
	char *P = (char *)&number;

	return (*P);
}
