#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Concatenae all arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: Pointer to the new string or NULL otherwise.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int total_lent = 0;
	char *contd;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_lent++;
		total_lent++;
	}
	contd = malloc(sizeof(char) * (total_lent + 1));
	if (contd == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			contd[k] = av[i][j];
			k++;
		}
		contd[k] = '\0';
		k++;
	}
	contd[k] = '\0';
	return (contd);
}
