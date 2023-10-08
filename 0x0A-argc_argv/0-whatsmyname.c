#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of commandline arguments
 * @argv: An array containing the command line argument.
 * Return: 0 (Success)
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	(void) argv;
	printf("%s\n", *argv);
	return (0);
}
