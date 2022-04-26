#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * Letters a & A replaced by 4
 * Letters e & E replaced by 3
 * Letters o & O replaced by 0
 * Letters t & T replaced by 7
 * Letters l & L replaced by 1
 * @str: pointer to string
 *
 * Return: encoded string
*/

char *leet(char *str)
{
	int y, x = 0;
	char subs[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char src[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L',};

	/* check through str starting from first character */
	while (str[x])
	{/* count through src and subs using y */
		for (y = 0; y < 10; y++)
		{/* check if str char corresponds to src char and substitute */
			if (str[x] == src[y])
				str[x] = subs[y];
		} /* move to next str char */
		x++;
	}
	return (str);
}
