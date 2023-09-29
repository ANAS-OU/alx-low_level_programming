/**
 * _find_root - function the help us find
 * the natural square root of a number.
 * @n: number param 1 (integer).
 * @root: param 2 (integer).
 * Return: root of the number.
 */
int _find_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	else if (root * root == n)
		return (root);
	return (_find_root(n, root + 1));
}

/**
 * _sqrt_recursion - function that compute and returns
 * the natural square root of a given number.
 * @n: func param (integer).
 * Return: natural square (integer).
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_find_root(n, 0));
}
