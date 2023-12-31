/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest.
 * @dest: pointer param 1.
 * @src: pointer param 2.
 * Return: string.
 */

char *_strcpy(char *dest, char *src)
{
	char *_depart = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (_depart);
}
