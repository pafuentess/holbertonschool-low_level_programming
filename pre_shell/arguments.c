#include <stdio.h>

int main(int ac, char **av)
{
	int i = 1;

	while (av[i])
	{
		printf("av[%d] = %s\n", i, av[i]);
		i++;
	}
	return(0);
}
