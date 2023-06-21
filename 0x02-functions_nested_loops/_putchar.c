#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to sdout
 * @c: The charcter to print
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and error is set apperpriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
