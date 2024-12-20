#include <stdio.h>

int main(int ac, char **av)
{

	int i;

	for (i = 0; av[i] != NULL; i++)
	{
		if (av[i + 1] == NULL)
		{
			printf("%s\n", av[i]);
		}
		else
		{
		printf("%s, ", av[i]);
		}
	}
	return (0);
}
