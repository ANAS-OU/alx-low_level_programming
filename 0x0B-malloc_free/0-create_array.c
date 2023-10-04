#include <stdlib.h>

/**
 * create_array - function that create an array of chars
 * and initializes it with a given char.
 * @size: the size of the array.
 * @c: a char that the array fills with.
 * return: Pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
