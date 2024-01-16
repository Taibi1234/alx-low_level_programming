#include "main.h"
/**
 * _strchar - program rntry point
 * @s: input value
 * @c: input value
 * Return: Always 0 (Success)
 */
char *_strchar(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[c]);
	}
	return (0);
}
