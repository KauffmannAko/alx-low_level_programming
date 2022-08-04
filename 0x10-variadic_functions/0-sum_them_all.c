#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * a parameter on each element of an array.
 * @n: starting arguments
 * @...: infinite number of areguments.
 * Return: The sum of all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;
	    sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
