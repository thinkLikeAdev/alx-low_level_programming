#include "main.h"

/**
 * _isalpha - checks if character is uppercase, lowercase, or none
 * @c: this is the character to be checked
 * Return: 1 if char is uppercase or lowercase alphabet, otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= "a" && c <= "z") || (c >= "A" && c <= "Z"))
		return (1);
	else
		return (0);
}
