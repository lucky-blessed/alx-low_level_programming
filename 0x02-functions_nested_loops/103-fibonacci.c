#include "main.h"
#include <stdio.h>
/**
 * Main - Prints the sum of even-valued fibonacci terms below 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	long int prev = 1, curr = 2, next;
	long int sum = 0;

	while (curr <= 4000000)
	{
		if (curr % 2 == 0)
		{
			sum += curr;
		}
		next = prev + curr;
		prev = curr;
		curr = next;
	}
	printf("%ld\n", sum);
	return (0);
}
