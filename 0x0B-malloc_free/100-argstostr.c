 function that concatenates all the arguments of your program.



 Prototype: char *argstostr(int ac, char **av);

eturns NULL if ac == 0 or av == NULL

 Returns a pointer to a new string, or NULL if it fails

 Each argument should be followed by a \n in the new string

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all argument of the program
 * @ac: argument count
 * @av: array of pointers which contain
 *	 the programs command line arguments
 *
 * Return: pointer to new string or NULL
 */

char *argstostr(int ac, char **av)
{
