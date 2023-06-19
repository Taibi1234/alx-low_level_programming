#include <stdio.h>
/**
 * main - Entry point
 * Description: "prints all possible combinations of two two-digit numbers"
 * Return: always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
int digit1_first = i / 10;
int digit1_second = i % 10;
int digit2_first = j / 10;
int digit2_second = j % 10;
if (digit1_first == digit2_first && digit1_second == digit2_second)
{
continue;
}
putchar('0' + digit1_first);
putchar('0' + digit1_second);
putchar(' ');
putchar('0' + digit2_first);
putchar('0' + digit2_second);
if (i != 98 || j != 99)
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
