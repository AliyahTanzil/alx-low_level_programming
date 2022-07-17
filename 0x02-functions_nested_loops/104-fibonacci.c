#include <stdio.h>
#define BIGEST 10000000000
/**
 * main - entring point
 * Description: print the first 98 fibonacci numbers starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
	unsigned long int r = 0, k = 1, r1 = 0, k1 = 2;
	unsigned long int h, h1, h2;
	int c;

	printf("%lu, %lu, ", k, k1);
	for (c = 2; c < 98; c++)
	{
		if (k + k1 > BIGEST || r1 > 0 || r > 0)
		{
			h = (k + k1) / BIGEST;
			h1 = (k + k1) % BIGEST;
			h2 = r + r1 + h;
			r = r1, r1 = h2;
			k = k1, k1 = h1;
			printf("%lu%010lu", r1, k1);
		}
		else
		{
			h1 = k + k1;
			k = k1, k1 = h1;
			printf("%lu", k1);
		}
		if (c != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
