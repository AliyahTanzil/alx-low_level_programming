#include "holberton.h"
/**
 * _islower - check String
 * @c: input character
 * Description: function uses _putchar function to print
 * aplhabet in lowercase 10 times
 * Return: in lowercase or 0 if is uppeercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;


	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
