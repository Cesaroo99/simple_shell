#include <stdio.h>
#include <stdlib.h>

/**
 * main - prototype
 * @av: arg2
 * Return: 0
 */
int main(char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
