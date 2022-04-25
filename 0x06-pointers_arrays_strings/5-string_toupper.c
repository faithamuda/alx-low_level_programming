#include "main.h"

/**
 * string_toupper - Function that changes lowercase to uppercase
 * @s: pointer toinput char
 *
 * Return: s
*/

char *string_toupper(char *s)
{
	int j = 0;

	while (s[j] != '\0';)
	{
		if ((j >= 97) && (j <= 122))
		{
			s[j] = (j - 32);
			j++;
		}
	}
	return (s);
}
