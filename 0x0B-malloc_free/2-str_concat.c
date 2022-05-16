Write a function that concatenates two strings.

Prototype: char *(char *s1, char *s2);
The returned pointer should point to a newly
allocated space in memory which contains the contents of s1,
followed by the contents of s2, and null terminated
if NULL is passed, treat it as an empty string
The function should return NULL on failure

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
free str
return NULL





}
