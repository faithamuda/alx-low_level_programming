#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int d;
	long long int e;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned)sizeof(d));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned)sizeof(f));
	
	return (0);
}

