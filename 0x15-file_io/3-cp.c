#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that copies the content of a file to another file.
 * @argc: Filename
 * @argv: Text to add to the file.
 *
 * Return: 1 - Success or -1 - Failure.
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_dest, status;

	if (argc != 3 || argv == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	status = cpy_file(fd_src, fd_dest, argv[1], argv[2]);

	return (status);
}

/**
 * cpy_file - function that copies the content of a file to another file.
 * @fd_src: File descriptor source file
 * @fd_dest: File descriptor destination file
 * @name_source: Source file
 * @name_dest: Destination file
 *
 * Return: 1 - Success or -1 - Failure.
 */
int cpy_file(int fd_src, int fd_dest, char *name_source, char *name_dest)
{
	int bytes_read, bytes_wrote, close_fd_src, close_fd_dest;
	char buff[1024];

	do {
		bytes_read = read(fd_src, buff, 1024);

		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name_source);
			exit(98);
		}

		bytes_wrote = write(fd_dest, buff, bytes_read);

		if (bytes_wrote == -1 || bytes_read != bytes_wrote)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name_dest);
			exit(99);
		}

	} while (bytes_read == 1024);

	close_fd_src = close(fd_src);

	if (close_fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}

	close_fd_dest = close(fd_dest);

	if (close_fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}

	return (0);
}
