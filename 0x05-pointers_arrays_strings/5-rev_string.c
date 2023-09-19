#include "main.h"
/**
 * rev_string - Function which reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int start, stop;
	char hold;

	while (s[len] != '\0')
	{
		len++;
	}
	start = 0;
	stop = len - 1;
	while (start < stop)
	{
		hold = s[start];
		s[start] = s[stop];
		s[stop] = hold;
		start++;
		stop--;
	}
}
