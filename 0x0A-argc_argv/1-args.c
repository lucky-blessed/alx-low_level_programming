#include "main.h"
/**
 * main - Entry point.
 * @argc: The number of command lines.
 * @argv: An array containing the comman line.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc - 1);
	for (i = 1; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	return (0);
}
