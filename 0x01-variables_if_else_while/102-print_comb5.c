#include <stdio.h>

/**
 * main - Print the digits from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, c1;
		c = 0;
		c1 = 0;
		for (c = 0; c <= 98; c++)
		{
			for (c1 = c + 1; c1 <= 99; c1++)
			{
				if (c1 != c)
				{
					putchar((c / 10) + '0');
					putchar((c % 10) + '0');
					putchar(32);
					putchar((c1 / 10) + '0');
					putchar((c1 % 10) + '0');
					if (c == 98 && c1 == 99)
					{
					continue;
					}
					putchar(44);
					putchar(32);
			}
		}
	}
		putchar('\n');
		return (0);
}
