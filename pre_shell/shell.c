#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[], char *env[])
{
	pid_t child;
	char *token[1024], *check, *buffer = NULL;
	size_t i, n;
	int status, count = 0;
	char msn[] = "#cisfun$ ";

	while (msn[count])
		count++;
	while (1)
	{
		write(STDOUT_FILENO, msn, count);
		if (getline(&buffer, &n, stdin) == -1)
			return (-1);
		check = strtok(buffer, " \t\n\r");
		for (i = 0; i < 1024 && check != NULL; i++)
		{
			token[i] = check;
			check = strtok(NULL, " \t\n\r");
		}
		token[i] = NULL;
		child = fork();
		if (child == 0)
		{
			if (execve(token[0], token, env) == -1)
			{
				perror("Error");
				return (-1);
			}
		}
		if (child > 0)
			wait(&status);
	}
	write(1, "\n", 1);
	free(buffer);
	exit(status);
}
