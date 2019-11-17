#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *strk(char *buffer)
{
	const char s[2] = " ";
	char *token;

	token = strtok(buffer, s);

	return (token);
}

int main () 
{
    	char *buffer;
    	size_t bufsize = 1024;
	const char s[2] = " ";
	char *token;


    	buffer = (char *)malloc(bufsize * sizeof(char));
    	if(buffer == NULL)
        	return (-1);

    	printf("$ ");
    	getline(&buffer, &bufsize, stdin);
/*    	printf("%s",buffer); */

	token = strk(buffer);
	while(token != NULL)
	{
		printf(" %s\n", token);
		token = strtok(NULL, s);
	}

        free(buffer);
    	return(0);
}
