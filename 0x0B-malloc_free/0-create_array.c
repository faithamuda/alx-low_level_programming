#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: array size
 * @c: char to initialize array with
 * @a: array name
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);
	
	for (j = 0; j < size; j++)
		a[j] = c;
	return (a);
}
