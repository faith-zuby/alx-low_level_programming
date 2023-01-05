#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the of y
 * @x: the number to the raised
 * @y: the power
 * Return: the  value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
		return (1);
}

