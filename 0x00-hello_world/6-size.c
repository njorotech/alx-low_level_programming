#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0
  */
int main(void)
{
	char c = sizeof(c);
	int a = sizeof(a);
	float f;
	long int li;
	long long int lli;
	int Lo = sizeof(li);
	int LoLo = sizeof(lli);
	int flt = sizeof(f);

	printf("Size of a char: %d byte(s)\n", c);
	printf("Size of an int: %d byte(s)\n", a);
	printf("Size of a long int: %d byte(s)\n", Lo);
	printf("Size of a long long int: %d byte(s)\n", LoLo);
	printf("Size of a float: %d byte(s)\n", flt);
	return (0);

}
