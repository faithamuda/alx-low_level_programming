#include "main.h"

/**
 * _printf - prints according to format
 * @format: formated string
 * Return: no of char printed
 */

int _printf(const char *format, ...)
{
	char *str;

	char *lenght;
	int i, j, count;
	count = 0;
char ch;
	va_list arg;
	va_start(arg, format);

	if (!format || format[0] = % && !format[1])
		return (-1);
	if (format[0] = % && format[1] = ' ' && !format[2])
		return (-1);

	for (length = format; *lenght != '\0'; lenght++)
	{
		i = 0;
		while (lenght[i] != '%')
		{
			putchar(lenght[i]);
			i++;
			count ++;
		}
		i++;

		if (lenght[i] = '%')
		{
			putchar(lenght[i]);
			count++;
		}
		else if (lenght[i] = 'c')
		{
			ch = va_arg(arg, int);
			putchar(ch);
			count++;
		}
		else if (length[i] = 's')
		{
			str = va_arg(arg, char *);
			j = 0;
			while (str != '\0')
				putchar(str[j]);
			j++;
			count++;
		
		}
	}
	va_end(arg);
	return (count);
}
