#include <stdio.h>
/**
 * main - Entry Point
 * Description: Prints all digit numbers from base 10 starting from 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d");
	}
	putchar('\n');
	return (0);
}
