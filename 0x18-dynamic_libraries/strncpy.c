#include "main.h"

/**
 * _strncpy - is a function that copys the strings.
 * @dest: an input strings
 * @src: input strings
 * @n: input integer
 * Return: A pointer that resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
