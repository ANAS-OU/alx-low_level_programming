#include "main.h"

/**
 * main - program that copies content from one file
 * to another.
 * @argc: number of argments owr program got.
 * @argv: a list of argments.
 *
 * Return: 0 on success, on error exit with status.
 */
int main(int argc, char **argv)
{
	int fd1, fd2;
	char *buffer;
	int readed_bytes, writed_bytes;
	mode_t old_mask = umask(0);

	if (argc != 3)
		error_handler(NULL, 97);

	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
		error_handler(argv[1], 98);

	if (fd2 == -1)
		error_handler(argv[2], 99);

	buffer = malloc(sizeof(char) * BUFSIZE);
	if (!buffer)
		return (0);

	readed_bytes = read(fd1, buffer, BUFSIZE);
	writed_bytes = write(fd2, buffer, readed_bytes);
	if (readed_bytes != writed_bytes)
		error_handler(argv[2], 99);

	if (close(fd1) == -1 || close(fd2) == -1)
		error_handler(NULL, 100);

	/* Restore the old umask value */
	umask(old_mask);
	free(buffer);
	return (0);
}

/**
 * error_handler - function that handles some
 * of our program error.
 * @filename: pointer to a string contains the filename.
 * @status: exit status.
 *
 * Return: nothing;
 */
void error_handler(char *filename, int status)
{
	switch (status)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1);
	}

	exit(status);
}
