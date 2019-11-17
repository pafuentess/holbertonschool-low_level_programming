#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

int _path(char **env)
{
        char *key = "PATH";
        char *st;
        int i = 1;

        st = _getenv(key, env);
        while (st[i])
        {
                if (st[i] == '/')
                {
                        printf("\n");
                        i++;
                }
                else
                {
                        printf("%c", st[i]);
                        i++;
                }
        }

        return (0);
}
