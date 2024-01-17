#include "main.h"
/**
 * _strchar - program rntry point
 * @s: input value
 * @accept: input value
 * Return: Always 0 (Success)
 */
char *_strchar(char *s, char *accept)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == accept)
			return (&s[accept]);
	}
	return (0);
}
