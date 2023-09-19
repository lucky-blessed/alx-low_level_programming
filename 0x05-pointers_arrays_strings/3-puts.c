#include "main.h"
/**
 * _puts(char *str)
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_pitchar(*str);
		str++;
	}
	_putchar('\n');
}
