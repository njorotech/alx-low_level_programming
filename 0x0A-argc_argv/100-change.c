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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	return (0);
}
