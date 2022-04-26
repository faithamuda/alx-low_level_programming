#include "main.h"
/**
 * rot13 - function that encodes a string into using rot13.
 * @str: pointer to string to be encoded.
 *
 * You can only use if statement once and only use two loops in your code.
 * You are not allowed to use switch.
 *
 * Return: the encoded string.
*/

char *rot13(char *str)
{
	int x = 0, y;
	char Alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[x] != '\0')
	{
		for (y = 0; y <= 52; y++)
		{
			if (str[x] == Alpha[y])
			{
				str[x] = rot13[y];
				break;
			}
		}
		x++;
	}
	return (str);
}
