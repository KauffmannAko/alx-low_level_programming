#include <stdio.h>

/**
 * main - Print the values n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
		c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
