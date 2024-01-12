#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @X: Value to raise
 * @Y: power
 * Return: result of the power
 */
int _pow_recursion(int X, int Y)
{
	if (Y < 0)
		return (-1);
	if (Y == 0)
		return (1);
	return (X * _pow_recursion(X, Y - 1));
}
