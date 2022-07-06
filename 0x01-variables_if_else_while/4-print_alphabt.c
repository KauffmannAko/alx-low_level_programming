#include <stdio.h>

/**
 * main - Print the letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
		c = 0;
		for (c = 97; c <= 122; c++)
	{
		if (c == 101)
		{
			continue;
		}
		else if (c == 113)
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
