#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always  (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q')
		continue;

		else if (alpha == 'e')
		continue;

		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
