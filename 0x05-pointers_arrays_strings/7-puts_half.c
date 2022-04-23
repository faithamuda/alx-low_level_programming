#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: pointer to string
 * if numbers of characters is odd,
 * print the last n characters
 * where n = (length_of_the_string - 1) / 2
 *
 * Return: Nothing 
*/

void puts_half(char *str)
{
	int len, mid, n;

	len = 0;
	/*find length pf array to null character */
	while (str[len] != '\0')
	{
		len++;
	}
	/* check if number of character is even or odd */
	if (len % 2 == 0)
	{
		mid = len / 2;
		for (n = mid; n < len; str[n] != '\0'; n++)
			_putchar(str[n]);
	}
	else
	{
		mid = (len - 1) / 2;
		for (n = mid + 1; n < len; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
