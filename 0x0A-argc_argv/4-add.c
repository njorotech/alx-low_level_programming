#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - prints the number of arguments passed into it
  * @argc: first parameter
  * @argv: second parameter
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argv[1] == NULL)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
