#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the <POSIX> stdout.
 * @filename: pointer to streamed file.
 * @letters: number of bytes to read and print.
 *
 * Return: bytes printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[BUFSIZE];
	ssize_t readed_bytes, printed_bytes;
	int fd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	readed_bytes = read(fd, buffer, letters);
	printed_bytes = write(STDOUT_FILENO, buffer, readed_bytes);
	
	close(fd);
	if (readed_bytes != printed_bytes)
		return (0);

	return (printed_bytes);
}
