#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: integer argument
 *
 * Return: absolute value of integer
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (0 - c);
}
