#include <stdio.>
/**
 * main - prints all argumrnts it receive
 * @argc: number of comman line argument
 * @argv: array that contains tje program command line arguments
 * return: (0) when succssful
 */
int main(int argc, cahr *argv[])
{ 
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

