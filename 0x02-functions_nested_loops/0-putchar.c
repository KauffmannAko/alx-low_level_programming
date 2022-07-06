#include <unistd.h>
#include "main.h"
/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */

int main(void)
{

	char ch[] = "_putchar";
	int i;
	    i = 0;
	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
