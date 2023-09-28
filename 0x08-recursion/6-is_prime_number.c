#include "main.h"
/**
 * is_divisible - Checks if n is divisibe by any int from 2 to sqrt(n)
 * @n: No. to be checked.
 * @divisor: The divisor under check.
 * Return: Return 1 if  n is prime or 0 otherwise
 */
int is_divisible(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor <= 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - Returns 1 if n is prime, 0 otherwise.
 * @n: The number to be checked.
 * Return: Returns 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_divisible(n, n - 1));
}
