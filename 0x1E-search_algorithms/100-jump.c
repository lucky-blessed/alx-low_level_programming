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
	size_t step, prev, curr, i, end;

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
	end = (curr < size) ? curr : size - 1;
	for (i = prev; i <= end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
