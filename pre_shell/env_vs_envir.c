#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[],  char **env)
{
	char **ep;
	for (ep = env ; *ep != NULL ; ep++)
	{
		printf("%s\n", *ep);
	}
        printf("environ: %p\n", (void *)environ);
	printf("env: %p\n", (void *)env);
        return (0);
}

