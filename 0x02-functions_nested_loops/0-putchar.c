#include <unistd.h>
#include "holberton.h"

/**
 * main - check description
 * Description: it prints the word _putchar, followed by new line.
 * Return: 0.
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
