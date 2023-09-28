/**
 * factorial - function that computes
 * the factorial of a given number.
 * @n: number param (integer).
 * Return: factorial (integer).
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
