#include "main.h"

/**
* print_numbers - print numbers from 0 to 9
* Return: numbers from 0 to 9
*/

void print_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
	_putchar(z + '0');
	}
	_putchar('\n');
}
