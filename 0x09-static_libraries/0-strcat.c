#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: Pointer to string source
 * @dest: Pointer to string destination
 *
 * Return: pointer to resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i  = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
