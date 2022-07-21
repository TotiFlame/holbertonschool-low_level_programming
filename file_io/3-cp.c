#include <stddef.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
/**
* main - copies a file
* @argc: amount of arguments
* @argv: arguments
* Return: int
*/
int main(int argc, char *argv[])
{
	int lenght, file_from, file_to;
	char bread[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	lenght = read(file_from, bread, 1024);
	while (lenght)
	{
		if (write(file_to, bread, lenght) != lenght)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
		lenght = read(file_from, bread, 1024);
		if (lenght == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	if (close(file_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
