#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Determine if a random number is positive, negative or zero
 * Return: 0 always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number %d is ", n);
	if (n > 0)
	{
		printf("positive");
	}
	else if (n == 0)
	{
		printf("Zero");
	}
	else
	{
		printf("negative");
	}
	printf("\n");
	return (0);
}
