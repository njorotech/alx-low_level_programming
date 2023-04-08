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
	size_t printedLetters, readLetters;
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
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	readLetters = read(fd, buff, letters);
	close(fd);
	printedLetters = write(1, buff, readLetters);
	if ((int)readLetters == -1)
	{
		return (0);
	}
	return (printedLetters);
}
