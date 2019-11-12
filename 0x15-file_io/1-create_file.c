#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* create_file - creates a file.
* @filename: file's name to create
* @text_content: content to fill the new file
* Return: (1) if works
*/

int create_file(const char *filename, char *text_content)
{
	int fd, fs, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	i = 0;
	while (text_content[i])
		i++;

	fs = write(fd, text_content, i);
	if (fs == -1)
		return (-1);

	return (1);
}

