#include <stdio.h>
/**
 * main - check the code
 * @argc: parameter
 * @argv: an array of a command
 * Return: Alwayas 0
 */
int main(int argc, char *argv[])
{
	int  i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",  argv[i]);
	}
	return (0);
}
