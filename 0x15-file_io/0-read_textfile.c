#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the <POSIX> stdout.
 * @filename: pointer to streamed file.
 * @letters: number of bytes to read and print.
 *
 * Return: bytes printed, 0 when failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t readed_bytes, printed_bytes;
	int fd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	readed_bytes = read(fd, buffer, letters);
	printed_bytes = write(STDOUT_FILENO, buffer, readed_bytes);
	
	if (readed_bytes != printed_bytes)
		return (0);

	close(fd);
	free(buffer);
	return (printed_bytes);
}
