#include "main.h"
#include <stdio.h>
/**
 * wildcmp - is a function that compares two strings
 * @s: first input
 * @s1: second input
 * Return: 1 if strings identical and 0 in otherwise
 */
int wildcmp(char *s, char *s1)
{
	if (!*s  && !*s1)
		return (1);
	if (*s == *s1)
		return (wildcmp(s + 1, s1 + 1));
	if (*s1 == '*' && (wildcmp(s, s1 + 1) || wildcmp(s + 1, s1)))
		return (1);
	if (*s1 == '*' && *(s + 1) && *s1)
		return (0);
	return (0);
}
