#include "holberton.h"

/**
 * _strncat - it is a function that concatenate two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to resultinh string
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}
