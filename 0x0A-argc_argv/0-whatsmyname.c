#include <stdlib.h>
#include <stdio.h>
/**
 * main - a function that print it's name.
 * @argc: number of param pass in the terminal
 * @argv: an array of items pass in the terminal
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
