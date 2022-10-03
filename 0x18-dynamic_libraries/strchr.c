#include "main.h"
#include <stdio.h>

/**
 * _strchr - is a funtion that locates a charater in a string.
 * @s: an input string
 * @c: an input character to locate into string s
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{

		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
