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

	j = n;
	/* check if number is -ve */
	if (n < 0)
	{
		_putchar(45);
		j = -n;
	}
	/* print digits one by one using recursion */
	if (j / 10)
	{/* recursive call🤷‍♀️ */
		print_number(j / 10); 
	}
	_putchar('0' + (j % 10));
}
