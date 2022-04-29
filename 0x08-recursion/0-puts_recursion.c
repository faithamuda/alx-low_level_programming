#include "main.h"

/**
* _puts_recursion - function that prints a string  
* Followed by new line
* @s: pointer to string
*
* Return: s
*/

void _puts_recursion(char *s)
{
int i = 0
if(s[i] == '\0')
{
_putchar('\n');
}
else
{
_putchar(s[i]);
_puts_recursion(s[i + 1]);
}
return (s);
}
