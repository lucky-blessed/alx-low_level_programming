#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabelts in lower case
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
