#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - Write a program that copies the
* content of a file to another file.
* @argc: arguments
* @gv: array to store arguments
* Return: 0 if works
*/

int main(int argc, char *gv[])
{
	int file_from, file_to, numRead, numWrite, closed;
	char *buff[1024];

	numRead = 1024;
	numWrite = 0;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(gv[1], O_RDONLY, 0600);

	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", gv[1]), exit(98);
	file_to = open(gv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);

	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", gv[2]), exit(99);
	while (numRead == 1024)
	{
		numRead = read(file_from, buff, 1024);
		if (numRead == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", gv[1]), exit(98);

		numWrite = write(file_to, buff, numRead);
		if (numWrite == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", gv[2]), exit(99);
	}
	closed = close(file_from);
	if (closed == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	closed = close(file_to);
	if (closed == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
