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
	unsigned int len, dup;
	char *s;

	/* calculate the length of str */

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	s = (char *)malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (dup = 0; dup <= len; dup++)
		s[dup] = str[dup];

	return (s);
}
