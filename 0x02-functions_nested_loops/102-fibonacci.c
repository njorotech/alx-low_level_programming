#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: always zero
  */
int main(void)
{
	unsigned long int before = 1;
	unsigned long int actual = 2;
	unsigned long int next = 3;
	int n;

	printf("%d, %d, ", 1, 2);
	for (n = 3; n <= 50; n++)
	{
		printf("%lu", next);
		if (n == 50)
			continue;
		printf(", ");
		before = actual + next;
		actual = next;
		next = before;
	}
	return (0);
}
