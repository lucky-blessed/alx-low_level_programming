#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers, form 0 to 14.
 */
void more_numbers(void)
{
	int outer, inner;

	for (outer = 0;  outer <= 10; outer++)
	{
		for (inner = 0; inner <= 14; inner++)
		{
			if (inner > 9)
			{
				_putchar(inner / 10 + '0');
			}
			_putchar(inner % 10 + '0');
		}
		_putchar('\n');
	}
}
