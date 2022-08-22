#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - function that creates a file.
 * @filename: Filename
 * @text_content: Text to add to the file.
 *
 * Return: 1 - Success or -1 - Failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_wrote, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{

		for (len = 0; text_content[len] != '\0'; len++)
			;

		bytes_wrote = write(fd, text_content, len);

		if (bytes_wrote == -1)
		{
			write(STDOUT_FILENO, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
