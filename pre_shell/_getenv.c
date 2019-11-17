#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

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
