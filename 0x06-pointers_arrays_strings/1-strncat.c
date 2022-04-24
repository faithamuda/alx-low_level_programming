#include  "main.h"

/**
 * _strncat - function that appends n bytes of strings
 * from *src to *dest
 * @dest: destination for appended n strings
 * @src: source of strings to be appended
 * @n: max number of characters to be appended
 *
 * Return: pointer to string dest
*/
 
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j <= n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
