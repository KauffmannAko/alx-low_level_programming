#include "main.h"
/**
 * print_most_numbers - print most  numbers
 * Description: prints number from 0 to 9 except 2 and 4
 * Return: 0.
 */
void print_most_numbers(void)
{
	int digit;
	    digit = 0;
	for (digit = 0; digit <= 9; digit++)
	{
		if (digit == 2 || digit == 4)
			continue;
		_putchar(digit + '0');
	}
	_putchar('\n');
}
