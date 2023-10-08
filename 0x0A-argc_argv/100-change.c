#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 * @argc: Number of command line argumens.
 * @argv: Array containing the command line arguments
 * Return: 0 (Success)  or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, cent, coin;
	int denom[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	coin = 0;
	for (i = 0; i < 5; i++)
	{
		coin += cent / denom[i];
		cent %= denom[i];
	}
	printf("%d\n", coin);
	return (0);
}
