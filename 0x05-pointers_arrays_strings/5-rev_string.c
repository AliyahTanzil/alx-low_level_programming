#include "holberton.h"
/**
 * rev_string - this function reverse a string followed by
 * a new line.
 * @s: is an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char mas;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		mas = s[i];
		s[i++] = s[len];
		s[len] = mas;
	}
}
