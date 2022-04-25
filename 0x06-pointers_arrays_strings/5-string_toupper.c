#include "main.h"

/**
 * string_toupper - Function that changes lowercase to uppercase
 * @s: pointer toinput char
 *
 * Return: s
*/

char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (j > 96 && j < 123)
		{
			s[j] = j - 32;
		}
	}
	return (s);
}
