#include <stdio.h>

/**
 * main - prints it's name, followed by new line
 * @argc: argument count
 * @argv: array of pointers which contains the programs
 * command line arguments
 *
 * return: always 0 (Success)
 */
 
int main(int argc __attribute__ ((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
