#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: number to be printed in binary
  *
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	 unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}
