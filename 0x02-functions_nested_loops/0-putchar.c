#include "main.h"

/**
 * main - Entry point
 * @void: no argument
 *
 * Return: Always 0 (Successs)
 */

int main(void)
{
	int j = 0;
	char nife[] = "_putchar";

	while (j < 8)
	{
		_putchar(nife[j]);
		j++;
	}
	_putchar('\n');
	return (0);
}
