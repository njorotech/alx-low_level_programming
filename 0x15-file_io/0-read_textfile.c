#include "main.h"

/**
  * read_textfile - reads a file and prints it to stdio
  * @letters: number of letters to read and print
  *
  * Return: The actual number of letters read and printed, or
  * 0 if the file cannot be opened or read, or
  * 0 if filename is NULL, or
  * 0 if write fails or does not write the expected amount of bytes
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readBytes, writtenBytes;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	readBytes = read(fd, buf, letters);
	close(fd);
	if (readBytes == -1)
	{
		return (0);
	}

	writtenBytes = write(STDOUT_FILENO, buf, readBytes);

	if (writtenBytes == -1)
	{
		return (0);
	}

	return (writtenBytes);
}

