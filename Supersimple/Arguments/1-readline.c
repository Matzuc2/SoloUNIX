#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *buffer;
	size_t bufsize = 65;
	size_t characters;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("$");

	characters = getline(&buffer,&bufsize,stdin);
	printf("%zu characters were read.\n",characters);
	printf("%s", buffer);
	return (0);
}
