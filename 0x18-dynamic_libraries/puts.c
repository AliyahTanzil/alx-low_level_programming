#include "main.h"
/**
 * _puts - it's write a function that prints a string, followed
 * a new line, to the standard out put stdout
 * @str: is an input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
