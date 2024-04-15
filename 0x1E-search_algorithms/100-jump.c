#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value inn a sorted array
 * of ingegers using jumb search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value location or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, curr, i;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;
	curr = step;

	while (array[curr] < value && curr < size)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
	for (i = prev; i <= curr && i < size; i++)
	{
		printf("Value<F8> checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
