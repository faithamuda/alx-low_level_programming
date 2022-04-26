#include  "main.h"

/**
 * print_number - prints an integers
 * @n: integer to print
 *
 * Return: void (Success)
*/

void print_number(int n)
{
	unsigned int j;

	if (n < 0)
	{
		j = -n;
		_putchar(45);
	]
	else
		j = n;
		
	if (j / 10)
	{
		_putchar('0' + (j / 10));
		_putchar( '0' + (j % 10));
	}
]
