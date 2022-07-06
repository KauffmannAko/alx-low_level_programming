#include <stdio.h>

/**
 * main - Print the digits from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
		c = 0;
		for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
		if (c != 9)
		{
		putchar(44);
		putchar(32);
		}
	}
		putchar('\n');
	return (0);
}
