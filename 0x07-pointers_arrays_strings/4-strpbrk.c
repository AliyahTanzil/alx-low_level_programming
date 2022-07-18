#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - is a function that searches for any set of bytes in a string.
 * @s: input string
 * @accept: input character with location to string s
 * Return: a pointer to the byte in s that matches one bytes in
 * accept or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
