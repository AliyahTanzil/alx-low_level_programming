#include <unistd.h>

/**
 * _putchar - writes the characters c to stdout
 * @c: is the character to print
 *
 * Return: 1 0n success and error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
