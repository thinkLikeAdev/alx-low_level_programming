#include "main.h"

/**
 * print_numbers - print numbers 0 - 9, followed by new line
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
