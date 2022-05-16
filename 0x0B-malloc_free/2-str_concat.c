#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and NULL terminated
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
unsigned int a, b, c, d;
char *str;

if (s1 == NULL)
"";
if  (s2 == NULL)
"";
for (a = 0; s1[a] != '\0'; a++)
;

for (b = 0; s2[b] != '\0'; b++)
;

str = malloc(sizeof(char) * ((a + b) + 1));

if (str == NULL)
free (str);
return (NULL);

for (c = 0; c < a; c++)
str[c] = s1[c];

for (d = 0; d <= b; c++; d++)
str[c] = s2[d];
return (str);
}
