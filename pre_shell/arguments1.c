#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *buffer;
    size_t bufsize = 1024;

    buffer = (char *)malloc(bufsize * sizeof(char));
    if(buffer == NULL)
	return (-1);

    printf("$ ");
    getline(&buffer, &bufsize, stdin);
    printf("%s",buffer);

	free(buffer);
    return(0);
}
