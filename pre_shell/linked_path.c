#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/*
char * _getenv(char *key, char **env)
{
        int i = 0, j = 0;

        if (key == NULL || env == NULL || *env == NULL)
                return (NULL);

        while (env[i] != NULL)
        {
                j = 0;
                while (env[i][j] == key[j])
                        j++;
                if(env[i][j] == '=')
                {
                        j++;
			return (&(env[i][j]));
                }
                i++;
        }
        return (NULL);
}

*/

int _lpath(char **env)
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

int main(int argc, char *argv[],  char **env)
{
        char **ep;

        ep = env;
        _lpath(ep);
        printf("\n");

        return (0);
}

