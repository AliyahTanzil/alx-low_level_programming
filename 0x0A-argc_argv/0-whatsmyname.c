#include  <stdio.h>

/**
 * main - function that prints it name
 * @argc: argc parameter
 * @argv: An array of a command
 * Return: Alwaya 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
