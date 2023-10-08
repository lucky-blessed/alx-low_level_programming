#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of commandline arguments
 * @argv: An array containing the command line argument.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
