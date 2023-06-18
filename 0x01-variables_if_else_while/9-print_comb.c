#include <stdio.h>
/**
 * main - Entry piont
 * Description: "prints all possible combinations of single-digit numbers"
 * Return: always 0 (Success)
 */
int main(void)
{
int i;
putchar('0');
for (i = 1; i <= 9; i++)
{
putchar(',');
putchar(' ');
putchar(i + '0');
}
putchar('\n');
return (0);
}
