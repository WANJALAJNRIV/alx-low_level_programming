#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the stdout.
 * @filename: Filename
 * @letters: Number of letters to be printed
 *
 * Return: Number of letters printed or 0 if error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_wrote;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	bytes_read = read(fd, buf, letters);

	if (bytes_read == -1)
	{
		free(buf);
		return (0);
	}

	bytes_wrote = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_read != bytes_wrote || bytes_wrote == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (bytes_wrote);

}
