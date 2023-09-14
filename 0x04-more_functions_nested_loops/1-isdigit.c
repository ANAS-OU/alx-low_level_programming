/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: func param.
 * Return: 1 if it is a digit
 * otherwise will return 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
