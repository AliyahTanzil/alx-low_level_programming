#include "main.h"
#include <stdio.h>

/**
 * wildcmp - check the code wild charcater
 * @s: string
 * @s1: string
 * Return: Always 0.
 */

int wildcmp(char *s, char *s1)
{
	return (checker(s, s1, 0, 0, -1));
}

/**
 * checkLast - check for the last char of the string
 * @s: string
 * @i: int
 * Return: 0 or 1
 */
int checkLast(char *s, int i)
{
	if (s[i] == '*')
		return (checkLast(s, i + 1));
	else if (s[i] == '\0')
		return (1);

	return (0);
}
/**
 * checker - helper
 * @s: string
 * @s1: string
 * @a: int
 * @b: int
 * @wildUsed: int
 * Return: Always 0.
 */
int checker(char *s, char *s1, int a, int b, int wildUsed)
{
	if (s[a] != '\0')
	{
		if (s1[b] == '\0')
			return (0);
		else if (s1[b] == '*')
		{
			if (s1[b + 1] == '*')
				return (checker(s, s1, a, b + 1, b));
			else if (s1[b + 1] == s[a])
				return (checker(s, s1, a, b + 1, b));
			else if (s[a + 1] != s1[b + 1])
				return (checker(s, s1, a + 1, b, b));
			else if (s[a + 1] == s1[b + 1])
				return (checker(s, s1, a + 1, b + 1, b));
		}
		else if ((s[a] == s1[b]) || (s1[b] == '*' && s1[b + 1] == s[a + 1]))
			return (checker(s, s1, a + 1, b + 1, wildUsed));

		if (wildUsed == -1)
			return (0);

		return (checker(s, s1, a, wildUsed, wildUsed));
	}
	if (s1[b] != '\0')
		return (checkLast(s1, b));

	return (1);
}
