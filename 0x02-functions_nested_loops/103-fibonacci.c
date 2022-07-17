#include <stdio.h>

/**
 * main - Entring point
 * Description: computes and then prints all even numbers below
 * 4,000,000 starting by 1 and 2 the first 10 terms will be:
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
