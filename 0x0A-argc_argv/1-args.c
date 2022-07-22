#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that print it's number of arg pass to it.
 * @argc: number of param pass in the terminal
 * @argv: an array of items pass in the terminal
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
