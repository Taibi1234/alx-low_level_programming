#include "main.h"
/**
 * _strpbrk - program entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *c)
{
	int b;

	while (*s)
	{
		for (b = 0; c[b]; b++)
		{
			if (*s == c[b])
			return (s);
		}
	s++;
	}

	return ('\0');
}
