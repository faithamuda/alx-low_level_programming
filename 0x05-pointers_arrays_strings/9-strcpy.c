#include "main.h"

/*
 * _strcpy - copies string pointed by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: valued pointed to dest
 */

/* _strcpy - function that copies */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{opines 
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
