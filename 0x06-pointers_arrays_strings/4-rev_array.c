#include "main.h"
/**
 * reverse_array - Reverses the content of an array of inteegers
 * @a: The array of intergers to be reversed
 * @n: Number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int container, i;

	for (i = 0; i < n / 2; i++)
	{
		container = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = container;
	}
}
