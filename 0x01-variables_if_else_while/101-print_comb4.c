#include <stdio.h>

/**
 * main - Print the digits from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, c1, c2;
		c = 0;
		c1 = 0;
		c2 = 0;
		for (c = 0; c < 9; c++)
	{
		for (c1 = c + 1; c1 <= 9; c1++)
		{
			for (c2 = c1 + 1; c2 <= 9; c2++)
			{
				if ((c1 != c) != c2)
				{
					putchar(c + '0');
					putchar(c1 + '0');
					putchar(c2 + '0');
					if (c == 7 && c1 == 8)
					{
						continue;
					}
					putchar(44);
					putchar(32);
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
