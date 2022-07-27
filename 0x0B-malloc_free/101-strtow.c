#include "main.h"
#include <stdlib.h>

int world_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index of  the first word
 * @str: The string
 * Return: index
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - Count the number of owrds within a string
 * @str: The string to be counted
 * Return: The number of words
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: The string to be split.
 * Return: if str = NULL, str = "", or the function fails
 */
char **strtow(char *str)
{
	char **strings;

	int index = 0, words, w, characters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		characters = word_len(str + index);
		strings[w] = malloc(sizeof(char) * (characters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}

		for (l = 0; l < characters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';

	}
	strings[w] = NULL;
	return (strings);

}
