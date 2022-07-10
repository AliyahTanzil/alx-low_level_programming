#include <stdio.h>
/*
 * main-Entry piont
 * Return: 0 Alway (success)
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longType;
	long long int longlongType;

	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a Long int: %zu byte(s)\n", (unsigned long)sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(longlongType));
	printF("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(floatType));
	return (0);
}
