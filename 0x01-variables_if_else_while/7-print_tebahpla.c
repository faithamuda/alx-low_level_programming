#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphaR;

	for (alphaR = 'z'; alphaR >= 'a'; alphaR--)
	{
		putchar(alphaR);
	}
	putchar('\n');

	return (0);
}
