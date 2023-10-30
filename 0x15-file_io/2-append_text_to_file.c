#include "main.h"
#include "_strlen.c"

/**
 * append_text_to_file - function that appends text
 * at the end of a file.
 * @filename: pointer to a string contains the filename.
 * @text_content: pointer to the content to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, checker;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
		checker = write(fd, text_content, _strlen(text_content));
	if (checker == -1)
		return (-1);

	close(fd);
	return (1);
}
