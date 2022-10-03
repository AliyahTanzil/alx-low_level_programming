#include "main.h"
/**
 * _isalpha - check code
 * @c: an input character
 * Description: function returns 1 if the character is a
 * lowercase or uppercase
 * Return: 1 or 0 or otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'Z'; lower++)
	{
		for (upper = 'A'; upper <= 'z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
