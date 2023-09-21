/**
 * leet - function that encodes a string into 1337.
 * @str: pointer param.
 * Return: string in 1337.
 */

char *leet(char *str)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; numbers[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (str);
}
