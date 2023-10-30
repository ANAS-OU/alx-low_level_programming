#include "main.h"
#include "_strlen.c"

/**
 * create_file - function that creates a file
 * and writes some content on it.
 * @filename: pointer to a string contains the filename.
 * @text_content: pointer to a string contains the content
 * will gonna write on the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, check;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		check = write(fd, text_content, _strlen(text_content));
	if (check == -1)
		return (-1);

	close(fd);
	return (1);
}