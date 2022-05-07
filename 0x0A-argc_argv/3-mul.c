#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication of
 * two numbers, followed by a new line
 * @argc: argument count
 * @argv: array of strings which contains
 * the program's command line arguments
 * @mul: multiplication result
 *
 * Return: 0 if two arguments or 1 if not
 */

int main(int argc, char *argv[])
{
	int mul = atoi(argv[1]) * atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", mul);
		return (0);
	}
	else if	(argc != 3)
	{
		printf("Error\n");
		return (1);
	}
}
