#include "main.h"

/**
 * _isalpha - checks if char is uppercase, lowercase, or none
 * @c: this is the char to be checked
 *
 * Return: 1 if char is uppercase or lowercase alphabet, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= "a" && c <= "z") || (c >= "A" && c <= "Z"))
		return (1);
	else
		return (0);
}
