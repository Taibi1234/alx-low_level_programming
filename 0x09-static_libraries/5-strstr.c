#include "main.h"
/**
 * _strstr - program to entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *s, char *c)
{
	for (; *s != '\0'; s++)
	{
		char *a = s;
		char *b = c;

		while (*a = *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*a == '\0')
			return (s);
	}
	return (0);
}
