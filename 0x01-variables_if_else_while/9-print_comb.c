#include <stdio.h>
/**
 * main - Entry piont
 * Description: "prints all possible combinations of single-digit numbers"
 * Return: always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
