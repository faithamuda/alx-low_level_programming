#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: input string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i, j, temp;

	i = 0;

	while (s[i] != "\0")
	{
		i++;
	}

	temp = i;

	for (j = temp - i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
