#include "holberton.h"
/**
 * swap_int - is a function which swaps the value of two integers.
 * @a: inout interger pointer
 * @b: input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int mas;

	mas = *a;
	*a = *b;
	*b = mas;
}
