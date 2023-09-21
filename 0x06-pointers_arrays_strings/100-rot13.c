/**
 * rot13 - function that encodes a string
 * using rot13.
 * @str: pointer param.
 * Return: encoded string.
 */

char *rot13(char *str)
{
	int i, j;
	char *alpha1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *alpha2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha1[j] != '\0'; j++)
		{
			if (str[i] == alpha1[j])
			{
				str[i] = alpha2[j];
				break;
			}
		}
	}
	return (str);
}
