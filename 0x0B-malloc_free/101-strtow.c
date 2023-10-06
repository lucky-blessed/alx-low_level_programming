#include <stdlib.h>
#include "main.h"

int is_separator(char c);
int count_words(char *str);
void free_words(char **words, int count);

/**
 * is_separator - Checks if a character is a saparator (space)
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (is_separator(*str))
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * free_words - Frees memory allocated for an array of words.
 * @words: The array of words.
 * @count: Number of words in the array.
 */
void free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		free(words[i]);
	}
	free(words);
}

/**
 * strtow - Splits a string into words,.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings or NULL otherwise.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k;
	int in_word = 0;
	int word_length = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, k = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			if (in_word)
			{
				words[k] = malloc(sizeof(char) * (word_length + 1));
				if (words[k] == NULL)
				{
					free_words(words, k);
					return (NULL);
				}
				for (j = 0; j < word_length; j++)
					words[k][j] = str[i - word_length + j];
				words[k][j] = '\0';
				k++;
				in_word = 0;
				word_length = 0;
			}
		}
		else
		{
			if (!in_word)
				in_word = 1;
			word_length++;
		}
	}
	if (in_word)
	{
		words[k] = malloc(sizeof(char) * (word_length + 1));
		if (words[k] == NULL)
		{
			free_words(words, k);
			return (NULL);
		}
		for (j = 0; j < word_length; j++)
			words[k][j] = str[i - word_length + j];
		words[k][j] = '\0';
		k++;
	}
	words[k] = NULL;
	return (words);
}
