#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **env)
{
	char **ep;

        ep = env;
        
	lpath(ep);
        printf("funciono\n");
        return (0);
}
