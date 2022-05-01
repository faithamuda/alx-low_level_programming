#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * followed by a newline
 * @void: no argument
 *
 * Return:: Nothing 
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	-putchar('\n');
	return (0);
}
