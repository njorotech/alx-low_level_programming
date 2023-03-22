#include "3-calc.h"

/**
  * get_op_func - selects the correct function to perform
  * the operation asked by the user
  * @s: the operator passed as argument to the program
  *
  * Return: pointer to the correct function to peform the operation
  */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}

	if (!((s == "+") || (s == "-") || (s == "*") || (s == "/") || (s == "%")))
	{
		return (NULL);
	}
}
