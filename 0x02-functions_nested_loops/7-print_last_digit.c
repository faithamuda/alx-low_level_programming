#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to take
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;

		if (n < 0)
			ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}
