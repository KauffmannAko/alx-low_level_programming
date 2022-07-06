#include <stdio.h>

/**
 * main - Print the digits from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, num;
		c = 0;
		num = 0;
		for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
		for (num = 97; num <= 102; num++)
		{
			putchar(num);
		}
	putchar('\n');
	return (0);
}
