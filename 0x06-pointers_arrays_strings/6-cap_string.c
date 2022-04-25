#include "main.h"

/**
 * cap_string - function that capitalizes all words in a string
 * @src: pointer to string
 *
 * Return: value of src
*/

char *cap_string(char *src)
{
	int count;

	count = 0;
	while (src[count] != '\0')
	{/* if next character after count is a char , capitalise it */
		if (src[0] >= 97 && src[0] <= 122)
		{
			src[0] = src[0] - 32;
		}
		if (src[count] == ' ' || src[count] == '\t' || src[count] == '\n'
		    || src[count] == ',' || src[count] == ';' || src[count] == '.'
		    || src[count] == '.' || src[count] == '!' || src[count] == '?'
		    || src[count] == '"' || src[count] == '(' || src[count] == ')'
		    || src[count] == '{' || src[count] == '}')
		{
			if (src[count + 1] >= 97 && src[count + 1] <= 122)
			{
				src[count + 1] = src[count + 1] - 32;
			}
		}
		count++;
	}
	return (src);
}
