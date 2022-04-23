#include "main.h"

/* 
 * copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed toby dest
 * @dest: pointer to destination 
 * @src: pointer to source 
 *
 * Return: valued pointed to dest
 */
 
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0'
	{
		len++}
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
Return (dest);
}
