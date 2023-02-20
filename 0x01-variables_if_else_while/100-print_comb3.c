#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == j) || (i > j))
			{

			}
			else
			{
				putchar('0' + i);
				putchar('0' + j);
				if (!((i == 8) && (j == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
