#include "main.h"
#include <stdio.h>
/**
 * rot13 - To encode a string using rot13
 * @str: String to be encoded
 *
 * Return: str
 */
char *rot13(char *str)
{
	int i, j;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == d1[j])
			{
				str[i] = drot[j];
				break;
			}
		}
	}
	return (str);
}
