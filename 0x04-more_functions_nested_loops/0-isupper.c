/**
 * _isupper - function that checks if a letter is uppercase.
 * @c: func param.
 * Return: 1 if the letter uppercase
 * otherwise will return 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
