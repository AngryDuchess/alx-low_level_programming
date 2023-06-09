#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: main value 
 * @y: exponential value
 * Return: Alwasy 0,
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else return (x * _pow_recursion(x, y - 1));
}
