#include "main.h"
#include <stdio.h>
/**
 * main - Print the first 50 fibonacci numbers
 *
 * Return: 0 Always
 */
int main(void)
{
	long int prev = 1, curr = 2, next;
	int count;

	printf("%ld, %ld", prev, curr);
	for (count = 3; count <= 50; count++);
	{
		prev = curr;
		curr = next;
	}
	printf("\n");
	return (0);
}
