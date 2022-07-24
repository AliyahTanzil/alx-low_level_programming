#include "holberton.h"

/**
 * _strcat - is a function that concatenates two strings.
 * @dest: input string
 * @src: input string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len] = src[index];
	
	return (dest);
}
