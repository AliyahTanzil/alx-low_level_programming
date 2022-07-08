#include "holberton.h"
/**
 * _isupper - sis a funtion that checks for uppercase character.
 * c is an input character as a test case
 * return 1 if c is an uppercase or otherwise 0
 */
int _isupper(int c)
{
	char uppercase ='A';
	int isupper = 0;


	for (; uppercase <= 'Z' uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
