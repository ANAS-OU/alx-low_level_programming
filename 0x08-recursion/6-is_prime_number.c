/**
 * check_number - function that check if the given number is
 * a prime number.
 * @n: number to check param 1 (integer).
 * @div: param 2 (integer).
 * Return: 1 if the number is prime
 * Otherwise returns 0.
 */
int check_number(int n, int div)
{
	if (n == div)
		return (1);
	else if (!(n % div))
		return (0);
	return (check_number(n, div + 1));
}

/**
 * is_prime_number - function that returns 1 if n
 * is a prime number, otherwise 0.
 * @n: func param (integer).
 * Return: 1 case of success
 * otherwise returns 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_number(n, 2));
}
