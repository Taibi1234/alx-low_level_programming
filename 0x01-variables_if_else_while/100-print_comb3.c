#include <stdio.h>
/**
 * main - Entry point
 * Description: "prints all possible different combinations of two digits"
 * Return: always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar('0' + i);
putchar('0' + j);
if ((i < 8) || (i == 8 && j < 9))
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
return (0);
}
}
}
return (0);
}
