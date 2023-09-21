#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer parameter
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char tp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		tp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tp;
	}
}

/**
 * infinite_add - Function to add two numbers.
 * @n1: First number.
 * @n2: Second number.
 * @r: Buffer to store the result.
 * @size_r: Size of buffer.
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, digit = 0, flow = 0;
	int v1 = 0, v2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || flow == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		temp = v1 + v2 + flow;
		if (temp >= 10)
			flow = 1;
		else
			flow = 0;
		if (digit >= (size_r - 1))
			return (0);
		*(r + digit) = (temp % 10) + '0';
		digit++;
		j--;
		i--;
	}
	if (digit == size_r)
		return (0);
	*(r + digit) = '\0';
	rev_string(r);
	return (r);
}
