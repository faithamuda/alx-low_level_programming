#include "main.h"

/**
 * puts2 - print every other character of a string
 * starting with the first
 * *str: pointer to string
 * str: input string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
		else
		continue;
	}
	_putchar('\n');
}
