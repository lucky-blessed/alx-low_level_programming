#include "main.h"
/**
 * puts2 - prints letters of a string starting with the first.
 * @str: letters to be printed
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
