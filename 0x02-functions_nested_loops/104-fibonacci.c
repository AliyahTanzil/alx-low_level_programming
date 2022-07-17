#include <stdio.h>

/**
 * main - Entring point
 * Descrition: Prints the first 98 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%ld\n", next);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
