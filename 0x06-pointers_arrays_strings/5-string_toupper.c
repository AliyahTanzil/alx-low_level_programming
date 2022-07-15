#include "holberton.h"

/**
 * string_toupper - is a function that changes all lowcase letters of a
 * string to upper case
 * @s: input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
