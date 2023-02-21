#include "main.h"

/**
  * _isalpha - check for alphabetic character
  * @c: character to be checked
  *
  * Return: 1 if a letter is an alphabet
  * 0 if otherwise
  */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
