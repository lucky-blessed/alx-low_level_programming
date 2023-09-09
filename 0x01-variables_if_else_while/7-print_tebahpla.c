#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints letters in reverse order
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
