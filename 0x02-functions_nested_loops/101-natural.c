#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entring point
 * Description: computes and prints all the sum of multiples of 3 or 5
 * below 1024 excluding 3 and 5, follwed by a new line
 * Return: 0.
 */
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}

		c++;
	}
	printf("%i\n", sum);
	return (0);
}
