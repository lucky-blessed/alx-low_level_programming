#include <stdio.h>
/**
 * main - Entry Point
 * Description: Prints all digit numbers from base 10 starting from 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
