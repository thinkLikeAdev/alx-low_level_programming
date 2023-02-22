#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the last digit to be printed
 *
 * Return: the value of the last digit n
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');

	return (lastDigit);
}

