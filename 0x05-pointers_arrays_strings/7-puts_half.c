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
	int i, j, k;

	/* find length pf array to null character */
	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}
	/* check if number of character is even or odd */
	if (i % 2 == 0)
	{
		/** 
 		 * if lenght is even
		 * j is half of total lenght
 		*/
		j = i / 2;
		for (k = j; k < i; k++)
			_putchar(str[k]);
	}
	else
	{
		/**
		 * if lenght is odd
 		 * j is half of length - 1
 		*/
		j = (i - 1) / 2;
		for (k = j; k < i; k++)
			_putchar(str[k]);
	}
	_putchar('\n');
}
