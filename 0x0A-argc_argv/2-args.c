#include <stdio.h>
#include "main.h"
/**
 * main - Print all received arguments.
 * @argc: Number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 (succes)
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
