/**
 * _strlen_recursion - function that returns
 * the length of a string.
 * @s: string param (pointer).
 * Return: str length (integer).
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * check_if_is_palindrome - function that checks if the given string
 * is a palindrome.
 * @s: string param 1 (pointer).
 * @start: first index (integer).
 * @end: last index (integer).
 * Return: 1 on success
 * Otherwise 0.
 */

int check_if_is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	return (check_if_is_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: string param (pointer).
 * Return: 1 case of success
 * Otherwise returns 0.
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (check_if_is_palindrome(s, 0, len - 1));
}
