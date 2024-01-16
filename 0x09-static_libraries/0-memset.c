#include "main.h"
/**
 * _memset - program fille a block of memory with specifie value
 * @s: starting address pf memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: change array with value for a bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0;  n > a; a++)
	{
		s[a] = b;
	}
	return (s);
}
