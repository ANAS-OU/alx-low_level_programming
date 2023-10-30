#include "main.h"
#include "_strlen.c"

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
	ssize_t bytes;
	FILE *pf;

	if (!filename)
		return (0);
	pf = fopen(filename, "r");
	if (!pf)
		return (0);

	bytes = 0;
	fread(buffer, letters, 1, pf);
	bytes = write(STDOUT_FILENO, buffer, _strlen(buffer));

	fclose(pf);
	return (bytes);
}
