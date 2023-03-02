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
	int i = 0;
	int j = n - 1;

	while (i < n && j >= 0)
	{
		a[i] = a[j];
		i++;
		j--;
	}
}
