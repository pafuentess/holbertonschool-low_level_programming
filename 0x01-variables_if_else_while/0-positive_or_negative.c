#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */

if (n > 0)
printf("Last digit of %i is positive \n", n);
else if (n == 0)
printf("Last digit of %i is zero\n", n);
else if (n < 0)
printf("Last digit of %i is negative\n", n);

return (0);
}
