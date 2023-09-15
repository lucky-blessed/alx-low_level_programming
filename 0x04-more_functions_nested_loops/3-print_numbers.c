#include "main.h"
/**
 * print_numbers - Print 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar(digit + '0');
	}
	_putchar('\n');
}
