#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point.
 * @argc: Number of command line argument.
 * @argv: Array containing the command line argument.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}

