<<<<<<< HEAD
#include "main.h"
=======
>>>>>>> 66668efb56b3d74b53610f3bebcb5d8ae4dbdb40
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);
	if (m == 0)
		exit(98);

	return (m);
}
