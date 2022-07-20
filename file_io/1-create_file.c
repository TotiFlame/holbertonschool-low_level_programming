#include "main.h"
#include <string.h>
/**
* create_file - creates a file
* @filename: name of the file to create
* @text_content: is a string
* Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = strlen(text_content);

	if (!*filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fd == -1)
		return (0);
	if (text_content)
		write(fd, text_content, count);
	close(fd);
	return (1);
}
