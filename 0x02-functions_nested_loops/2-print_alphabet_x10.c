#include "main.h"
/**
 * 2-print_alphabet_x10.c - prints 10 times the alphabet in lowercase
 *
 * Return: alyaws 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 1; i <= 10; i++)
{
for (j = 97; j <= 122; j++)
_putchar(j);
}
_putchar('\n');
}
