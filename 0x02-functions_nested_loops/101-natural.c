#include <stdio.h>

/**
  * main - entry point
  *
  * Return: always zero
  */
int main(void)
{
	int i, three, five;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		three = i % 3;
		five = i % 5;
		if ((three == 0) || (five == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
