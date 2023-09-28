#include "main.h"
/**
 * sqrt_calculator -  Determine the sqrt of a number recursively.
 * @n: The number to calculate its sqrt.
 * @test: Speciment for test
 *
 * Return: The sqrt of n or -1 if it does not exist.
 */
int sqrt_calculator(int n, int test)
{
	int sqr;

	sqr = test * test;
	if (sqr > n)
	{
		return (-1);
	}
	else if (sqr == n)
	{
		return (test);
	}
	else
	{
		return (sqrt_calculator(n, test + 1));
	}
}

/**
 * _sqrt_recursion - Returns the sqrt of natural number.
 * @n: The number to determine its sqrt
 *
 * Return: The natural sqrt of n or -1 if it does not exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (sqrt_calculator(n, 2));
	}
}
