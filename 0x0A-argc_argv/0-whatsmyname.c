#include <stdio.h>
/**
 * main - print the name of progam follow by a new line.
 * @argc: number of command line arguments
 * @argv: array that contains the command line arguments
 * Return: Alawys 0 (Success)
 */
int main(int argc  __attribute__((unused)), char  *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
