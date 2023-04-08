#include "main.h"

/**
  * read_textfile - reads a text file and prints to POSIX
  * @filename: file to be read
  * @letters: number of letters it should read and print
  *
  * Return: The actual number of letters it could read and print
  * Return 0 if the file cannot be opened or read
  * Return 0 if filename is NULL
  * Return 0 if write fails or does not write the expected amount of bytes.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t printedLetters;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);

	printedLetters = read(fd, buff, letters);
	printf("%s\n", buff);
	close(fd);
	if ((int)printedLetters == -1)
	{
		return (0);
	}
	return (printedLetters);
}
