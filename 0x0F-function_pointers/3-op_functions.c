#include "3-calc.h"

/**
  * op_add - calculate sum of a and b
  * @a: first parameter
  * @b: second parameter
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
  * op_sub - returns difference of a and b
  * @a: first parameter
  * @b: second parameter
  *
  * Return: the difference of a and b
  */
int op_sub(int a, int b)
{
	int subtract = a - b;

	return (subtract);
}

/**
  * op_mul - product of a and b
  * @a: first parameter
  * @b: second parameter
  *
  * Return: the product of a and b
  */
int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

/**
  * op_div - division of a by b
  * @a: first parameter
  * @b: second parameter
  *
  * Return: the result of division of a by b
  */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

/**
  * op_mod - returns the remainder of the division of a by b
  * @a: first parameter
  * @b: second parameter
  *
  * Return: the remainder of the division of a by b
  */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
