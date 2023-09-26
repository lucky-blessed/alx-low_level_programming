#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of diagonals of a square matrix of integers
 * @a: A pointer to the square matrix.
 * @size: Dimension of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int d1_sum = 0;
	int d2_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		d1_sum += *(a + i * size + i);
		d2_sum += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", d1_sum, d2_sum);
}
