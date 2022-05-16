#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, d;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if  (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	str = malloc(sizeof(char) * ((a + b) + 1));

	if (str == NULL)
	{
		free (str);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		str[c] = s1[c];

	for (d = 0; d <= b; d++)
		str[c] = s2[d];
                c++;

	return (str);
}
