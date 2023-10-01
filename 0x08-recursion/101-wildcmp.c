/**
 * wildcmp - function that checks two strings
 * if considered identical.
 * @s1: first string (pointer).
 * @s2: second string (pointer).
 * Return: 1 in case of success
 * Otherwise returns 0.
 */

int wildcmp(char *s1, char *s2)
{
	/**
	 * Base case: If both strings are empty, they are considered identical
	 */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);

	/**
	 * If s2 contains '*', we have two possibilities:
	 * 1. '*' matches an empty string in s1, so we move to the next
	 *    character in s1.
	 * 2. '*' matches one or more characters in s1, so we move to the
	 *    next character in s2.
	 */
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
