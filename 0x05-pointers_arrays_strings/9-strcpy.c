#include "holberton.h"
/**
 * _strcpy -a function that copies the string pointed by src,
 * including the terminating null byte (\0), to the buffer
 * pointed by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *mas = dest;

	while (*src)
		*dest++ = *src++;
	return (mas);
}
