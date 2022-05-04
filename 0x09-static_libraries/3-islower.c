#include "main.h"

/**
 * _islower - checks for lowercase alphabets
 * @c: the character to check
 *
 * Return: 1 if lowercase or 0 if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
