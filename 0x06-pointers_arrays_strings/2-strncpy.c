#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: max no of string to copy
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
  
	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}

	j = i;

	for (; n > j; j++)
		dest[j] = '\0';
	return (dest);
}
