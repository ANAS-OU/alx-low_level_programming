/**
 * _islower - Function that checks if a character is lowercase or not.
 * @c: Function param
 *
 * Return: 1 if c is lowercase
 * otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
