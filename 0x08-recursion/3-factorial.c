#include "main.h"

/**
 * factorial - This is a function that returns the factorial of a given number.
 * @n: the number the factorial will be calculated
 *
 * Return: integer value
 */

int factorial(int n)

{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
