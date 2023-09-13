/**
 * _isalpha - Function that checks a character if is a letter.
 * @c: Function param.
 *
 * Return: 1 if the character is lowercase or uppercase.
 * otherwise return 0.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
