#include "main.h"
/**
 * rot13 - To encode a string using rot13
 * @str: String to be encoded
 *
 * Return: str
 */
char *rot13(char *str)
{
	int i;
	char character;
	char base;

	for (i = 0; str[i] != '\0'; i++)
	{
		character = str[i];
		if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
		{
			base = (character >= 'a' && character <= 'z') ? 'a' : 'A';
			str[i] = ((character - base + 13) % 26) + base;
		}
	}
	return (str);
}
