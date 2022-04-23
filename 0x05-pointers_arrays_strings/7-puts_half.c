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
	int len, j, k;

	len = 0;

	/*find length pf array to null character */
	while (str[len] != '\0')
	{
		len++;
	}
	/* check if number of character is even or odd */
	if (len % 2 == 0)
	{
		/** 
 		 * if lenght is even
		 * k is half of total lenght
 		*/
		for (k = len / 2; str[k] != '\0'; k++)
			_putchar(str[k]);
	}
	else
	{
		/**
		 * if lenght is odd
 		 * j is half of length - 1
 		*/
		for (j = (len - 1) / 2; j < len; j++)
			_putchar(str[1 + j]);
	}
	_putchar('\n');
}
