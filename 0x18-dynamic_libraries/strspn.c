#include "main.h"

/**
 * _strspn - is a function that gets the length of a prefix substring.
 * @s: input string
 * @accept: input character with a location to string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
