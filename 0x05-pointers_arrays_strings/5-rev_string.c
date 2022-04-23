#include "main.h"

/**
 * rev_string - function that reverses string
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int I, i;
	char c;

	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;
	/*swap the string by looping to half the string*/
	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - i - 2]; /*-1 because the array starts from 0*/
		s[l - i - 1] = ch;
	}

}