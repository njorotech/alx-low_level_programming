#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (((i == j) && (i == k)) || ((i >= j) || (j >= k)))
				{

				}
				else
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if ((i == 7) && (j == 8) && (k == 9))
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

