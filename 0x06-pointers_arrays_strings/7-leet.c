#include "main.h"
/**
 * leet - Encode string
 * @str: String to be encoded
 * Return: str
 */
char *leet(char *str)
{
	char *replacement = "AEOTL";
	char *replace_with = "43071";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; replacement[j] != '\0'; j++)
		{
			if (str[i] == replacement[j] || str[i] == replacement[j] + 32)
			{
				str[i] = replace_with[j];
				break;
			}
		}
	}
	return (str);
}
