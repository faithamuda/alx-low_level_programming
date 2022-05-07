#include <stdio.h>

/**
 * main - prints the number of arguments
 * passed into it, followed by new line
 * @argc: argument count
 * @argv: array of pointers which contains
 * the programs command line arguments
 *
 * return: always 0 (Success)

int main(int argc, char *argv[] __attribute__ ((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
