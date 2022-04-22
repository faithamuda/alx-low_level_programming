#include <stdio.h>

/**
 * main - Entry point
 *
 * ==Return: Always 0 (Success)
 */

int main(void)
{
	int first;
	int second;

	for (first = 0; first <= 9; first++)
	{
		putchar('0' + first);
		for (second = 0; second <= 9; second++)
		{
			putchar('0' + second);
		}
		if (first != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

