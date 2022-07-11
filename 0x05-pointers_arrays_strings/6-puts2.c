#include "holberton.h"
/**
 * puts2 - is a function that prints every other character from a given
 * string starting from the first character, followed by new line.
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i<= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
