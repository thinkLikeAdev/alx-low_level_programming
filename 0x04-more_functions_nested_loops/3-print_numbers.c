#include "main.h"

/**
 * print_numbers - print numbers 0 - 9, followed by new line
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char digit;

	for (digit = 0; digit <= 9; digit++)
		_putchar(digit);
		_putchar('\n');
}
