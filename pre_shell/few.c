#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#include <unistd.h>
#include <stdio.h>
#include <stdio.h>
​
#include <sys/types.h>
#include <sys/wait.h>
​
int main (void)
{
	pid_t child_pid;
	int i = 0, status;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
​
	while (i < 5)
	{
		printf("Before fork\n");
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			printf("Son: %u  -  Father: %u\n", getpid(), getppid());
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error:");
		}
		else
		{
			wait(&status);
			printf("My pid is: %d\n\n", getpid());
		}
		i++;
	}
	return (0);
}
