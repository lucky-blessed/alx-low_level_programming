#include "main.h"
/**
 * print_sign - Prints if a number is positive or negative or zero
 * @n: given number
 * Return: 1 if n is positive, -1 if n is negative and 0 if n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
