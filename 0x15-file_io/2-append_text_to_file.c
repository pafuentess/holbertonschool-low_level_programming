#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: file's to append text
* @text_content: content to fill the new file
* Return: (1) if works
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fs, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
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

