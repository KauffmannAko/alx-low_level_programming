#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - a program that print it's number of arg pass to it.
 * @argc: number of param pass in the terminal
 * @argv: an array of items pass in the terminal
 * Return: an integer
 */
int main(int argc, char **argv)
{
	int num, result = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
