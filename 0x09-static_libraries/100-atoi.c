#include "main.h"
/**
 * _atoi - Changes a string to integer
 * @s: Points to the changing string
 *
 * Return: returns the changed string
 */
int _atoi(char *s)
{
	int i, j, n, lent, k, d,  num;

	i = 0;
	j = 0;
	n = 0;
	lent = 0;
	num = 0;

	while (s[lent] != '\0')
		lent++;
	while (i < lent && k == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (d % 2)
				num = -num;
			n = n * 10 + num;
				k = 1;
				if (s[i + 1] < '0' || s[i + 1] > '9')
					break;
				k = 0;

		}
		i++;
	}
	if (k == 0)
		return (0);
}
