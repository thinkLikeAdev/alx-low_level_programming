#include "main.h"

/**
 * _isdigit - check for a digit 0 - 9
 * @c: the number to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}
