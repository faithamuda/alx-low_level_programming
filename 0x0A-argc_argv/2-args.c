#include <stdio.h>

/**
 * main - prints all arguments passed into it
 * each on a newline
 * @argc: argument count
 * @argv: array of strings which contains
 * the program's command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int count;

for (count = 0; count < argc; count++)
printf("%s\n", argv[count]);
return (0);
}
