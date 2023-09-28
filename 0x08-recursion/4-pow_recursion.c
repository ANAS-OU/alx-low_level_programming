/**
 * _pow_recursion - function that compute and returns
 * the value of x raised to the power of y.
 * @x: param 1 (base).
 * @y: param 2 (power).
 * Return: x power y (integer).
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
