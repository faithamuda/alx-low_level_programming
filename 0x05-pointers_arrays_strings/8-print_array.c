#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array of integers 
 *@a: pointer to the array
 *@n: number of elements in the array
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else (i != (n - 1))
			printf("%d", a[i]);
			printf(", ");
	}
	printf("\n");
}
