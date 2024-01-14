#include <stdio.h>

/**
 * main - prints the number of the arguments passed into program
 * @argc: number of command line argument
 * @argv: array that contains the program comand line argument
 * Return: (0) when succssful
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
