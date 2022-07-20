#include "main.h"
/**
 * factorial - a function that find the factorial of a @n.
 * @n: The number
 * Return: The factorial of @n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
