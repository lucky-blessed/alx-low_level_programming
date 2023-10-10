#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _putchar - Writes a char to stdout.
 * @c: Character
 * Return: 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _isdigit - Checks if a string contains only digits.
 * @str: Pointer
 * Return: 0 (Success)
 */

int _isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		return (0);
		str++;
	}
	return (1);
}

/**
 * str_len - Computes the length of a string.
 * @str: Pointer
 * Return: String length
 */
int str_len(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * multiply - Multiplies two positive number.
 * @num1: First number to be multiplied
 * @num2: Second number
 *
 * Return: Product of num1 and num2.
 */
void multiply(char *num1, char *num2)
{
	int len1 = str_len(num1);
	int len2 = str_len(num2);
	int *result, i, j, carry, temp, digit;

	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
	{
		printf("Erro");
		exit(98);
	}
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		digit = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			temp = digit * (num2[j] - '0') + carry + result[i + j + 1];
			carry = temp / 10;
			result[i + j + 1] = temp % 10;
		}
		result[i + j + 1] carry;
	}
	if (result[0] == 0)
		i = 1;
	else
		i = 0;
	for (; i < len1 + len2; i++)
		_putchar(result[i] + '0');
	_putchar('\n');
	free(result);
}
