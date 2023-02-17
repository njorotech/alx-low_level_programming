#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	char a;
	char B;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (B = 'A'; B <= 'Z'; B++)
	{
		putchar(B);
	}
	putchar('\n');
	return (0);
}
