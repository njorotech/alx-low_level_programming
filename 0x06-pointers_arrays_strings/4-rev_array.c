#include "main.h"

/**
  * reverse_array - reverse array
  * @a: first parameter
  * @n: second parameter
  *
  * return: nothing
  */
void reverse_array(int *a, int n)
{
	int i;
	int rev[n];
	int j = n - 1;
	int k = 0;

	for (i = 0; i < n; i++)
	{
		rev[i] = a[i];
	}

	while (k < n)
	{
		a[k] = rev[j];
		k++;
		j--;
	}
}
