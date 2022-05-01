#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * @void: no argument
 *
 * Return: Nothing
 */

void times_table(int n)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			_putchar(j * k +'0');
			if (k < 9)
				_putchar(', ');
			_putchar('\n');
		}
	}
}
