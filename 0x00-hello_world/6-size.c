#include <stdio.h>
/*
 * main-Entry piont
 * Return 0 Alway (success)
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longType;
	long long int longlongType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a Long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
	printF("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
