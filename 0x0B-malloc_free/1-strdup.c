#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * memory containing copy of string given as a parameter
 * @str: string to copy
 *
 * Return: NULL or pointer to copied string
 */

char *_strdup(char *str)
{
	int dup = 0, len = 0;
	char *s;

	/* calculate the length of str */
	if (str[len] != '\0')
		len++;
	else if (str == NULK)
		return (NULL);

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	while (s != '\0')
	{
		s[dup] = str[dup];
		dup++;
	}
	return (s);
}
