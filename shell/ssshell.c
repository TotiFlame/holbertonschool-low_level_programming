#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *buffer;
	size_t buffsize = 0;
	int characters;
	char *argv[] = {"", NULL};

	buffer = malloc(buffsize);
	if (!buffer)
	{
		return (0);
	}
	printf("#cisfun$ ");
	characters = getline(&buffer, &buffsize, stdin);
	strtok(buffer, "\n");
	printf("%s\n", buffer);
	argv[0] = buffer;
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
		return (0);
	}
	return (0);
}
