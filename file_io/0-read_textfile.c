#include "main.h"
/**
*
*
*
*
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int count = 0;

	if (!*filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (!buf)
	{
		return (0);
	}
	read(fd, buf, letters);
	write(STDOUT_FILENO, buf, letters);

	while (buf[count])
		count++;
	close(fd);
	return (count);
}
