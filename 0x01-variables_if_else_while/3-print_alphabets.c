#include <stdio.h>
/**
 * main - Entery point
 * Description: Prints alphabet letters in lowal case and then in upper case
 * Return: Aways 0 (Success)
 */
int main(void)
{
	char lowercase, uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
