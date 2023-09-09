#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabet letters except q and e
 * Return: Always o (success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
		}
	}
	putchar('\n');
	return (0);
}
