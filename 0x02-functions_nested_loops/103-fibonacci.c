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
	int i;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if ((fibonacci[i] % 2) == 0 && fibonacci[i] < 4000000)
			sum += fibonacci[i];
	}
	printf("%ld\n", sum);

	return (0);
}
