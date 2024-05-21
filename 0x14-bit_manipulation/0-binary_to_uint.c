#include "main.h"
<<<<<<< HEAD

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
=======
#include <stddef.h>
/**
 * binary_to_uint - converts binary number to an unsigned int.
 * @b: Pointer to the string  to be converted
 * Return: Converted number or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
		int i = 0;

		if (b == NULL)
			return (0);
		while (b[i] != '\0')
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			result = result * 2 + (b[i] - '0');
					i++;
		}
		return (result);
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
