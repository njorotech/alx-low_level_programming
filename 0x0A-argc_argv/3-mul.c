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
	int multiple;

	(void)argc;
	if ((argv[1] == NULL) || (argv[2] == NULL))
	{
		printf("Error\n");
		return (1);
	}
	multiple = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiple);
	return (0);
}
