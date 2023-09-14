#include "main.h"
/**
 * _print_last_digit - Prints the last digit of a number
 * @n: number whose last digit is to be calculated
 * Return: Returns the last digit of n
 */
int _print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}
	last_digit =  n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
