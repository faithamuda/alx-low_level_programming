#include "main.h"

/**
 * print_alphabet_x10 - prints 10*alphabets in lowercase
 * followed by newline
 * @void: no argument
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char alpha;
	int j = 0;

	while (j < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		j++;
		_putchar('\n');
	}
}
