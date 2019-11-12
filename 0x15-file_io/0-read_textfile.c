#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* read_textfile - eads a text file and prints it to
* the POSIX standard output.
* @filename: file to read
* @letters: numbers of letters to read
* Return: the text inside the file
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t st, str;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	st = read(fd, buff, letters);
	close(fd);

	if (st == -1)
	{
		free(buff);
		return (0);
	}

	str = write(STDOUT_FILENO, buff, st);
	free(buff);

	return (str);
}

