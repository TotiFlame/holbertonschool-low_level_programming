#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
int main(void)
{
	size_t buffsize = 32;
	int ver, exist, characters = 0;
	char *buffer, *path, *pathdup, *fullpath;
	char **arg;
	buffer = malloc(buffsize);
	if (!buffer)
	{
		return (0);
	}
	printf("$ ");
	characters = getline(&buffer, &buffsize, stdin);
	
	strtok(buffer, "\n");
	printf("%s\n", buffer);
	path = getenv("PATH");
	pathdup = strdup(path);
	pathdup = strtok(pathdup, ":");
	while (pathdup)
	{
		printf("entro al while\n");
		fullpath = malloc(strlen(pathdup) + strlen(buffer) + 2);
		if (!fullpath)
			return (0);
		strcat(fullpath, pathdup);
		strcat(fullpath, "/");
		strcat(fullpath, buffer);
		ver = open(fullpath, O_RDONLY);
		if (ver != 3)
			free(fullpath);
		else
		{
			arg = malloc(2 * sizeof(char*));
			if (!arg)
				return (0);
			arg = {fullpath, NULL};
			if (execve(arg[0], arg, NULL) == -1)
			{
				printf("error");
				return (0);
			}
			printf("%s\n", fullpath);
		}
		pathdup = strtok(NULL,":");
	}
	free(buffer);
	return (0);
}
