#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
char d;
for (c = 0 ; c <= 9 ; ++c)
putchar(c + '0');
for (d = 'a' ; d <= 'f' ; ++d)
putchar(d);
putchar('\n');
return (0);

}
