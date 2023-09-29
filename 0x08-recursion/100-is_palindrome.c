/**
 * check_if_is_palindrome - function that checks if the given string
 * is a palindrome.
 * @s1: param 1 (pointer).
 * @s2: param 2 (pointer).
 * Return: 1 on success
 * Otherwise 0.
 */

int check_if_is_palindrome(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	else if (s1 == s2 || s1 - 1 == s2)
		return (1);
	return (check_if_is_palindrome(++s1, --s2));
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
	char *p = s;

	while (*(s + 1))
		s++;
	return (check_if_is_palindrome(p, s));
}
