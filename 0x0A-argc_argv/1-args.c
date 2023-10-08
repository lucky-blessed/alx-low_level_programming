#include "main.h"
#include <stdio.h>
/**
 * main - Entry point.
 * @argc: The number of command lines.
 * @argv: An array containing the comman line.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
