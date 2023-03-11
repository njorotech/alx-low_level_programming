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
	int coins;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents;

	printf("%d\n", coins);
	return (0);
}
