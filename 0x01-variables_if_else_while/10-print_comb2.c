#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a = '0';
int b = '0';

while (a <= '9')
{
b = '0';
while (b <= '9')
{
putchar(a);
putchar(b);
if (b == '9' && a == '9')
{
}
else
{
putchar(',');
putchar(' ');
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
