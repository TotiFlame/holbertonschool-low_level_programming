#include "main.h"
#include <string.h>
/**
* append_text_to_file - creates a file
* @filename: name of the file to create
* @text_content: is a string
* Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;

	if (!*filename)
		return (-1);
	fd = open(filename, O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, strlen(text_content));

	return (1);
}
