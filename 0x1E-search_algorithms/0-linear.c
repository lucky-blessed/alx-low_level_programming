#include "search_algos.h"
<<<<<<< HEAD

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
=======
#include <stdio.h>
/**
 * linear_search - searches for value in array of integers using linear search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of the element in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
			return (i);
	}
	return (-1);
}
