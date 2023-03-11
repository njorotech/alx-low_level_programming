#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

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
	char *ptr;

	if (argv[1] == NULL)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		while (*ptr != '\0')
		{
			if(!isdigit(*ptr))
			{
				printf("Error\n");
				return 1;
			}
			ptr++;
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
