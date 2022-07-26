#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -creates an array of chars
 * @size: The size of the array
 * @c: A specific char to initialize the araay
 * Return: size == 0 or the function fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
