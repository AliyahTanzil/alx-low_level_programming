#include <stdio.h>
/*
 * main-Entry piont
 * Return 0 Alway (success)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a Long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printF("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
