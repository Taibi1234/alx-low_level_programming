#include <stdio.h>
/**
 * main - Entry point
 * Description: "print alphabet lowercase and upercase"
 * Return: always 0 (Success)
 */
int main(void)
{
char c;
char d;
c = 'a';
d = 'A';
while
(c <= 'z') {
putchar(c);
c++;
}
while
(d <= 'Z') {
putchar(d);
d++;
}
putchar('\n');
return (0);
}
