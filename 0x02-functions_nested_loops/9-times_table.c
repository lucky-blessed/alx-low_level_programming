#include "main.h"
/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row, col, product, ten, one;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;
			ten = product / 10;
			one = product % 10;
			if (col == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(one + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ten + '0');
				_putchar(one + '0');
			}
		}
		_putchar('\n');
	}
}
