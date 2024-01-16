#include "main.h"
/**
 * _atoi - to convert a string into an integer
 * @s: the string to use in program
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int unsigned_value = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		unsigned_value = (unsigned_value * 10) + (s[i] - '0');
		i++;
	}
	unsigned_value *= sign;
	return (unsigned_value);
}

