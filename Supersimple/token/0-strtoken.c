#include <stdio.h>
#include <string.h>

void strtoken(char *str)
{

	const char *delimiter =  " ";
	char *token;

	token = strtok(str, delimiter);


	while (token != NULL)
	{
		printf("'%s'\n", token);
		token = strtok(NULL, delimiter);
	}
}
int main(void)
{
	char str[] = "Hello world this is a test";
	strtoken(str);
	return (0);
}
