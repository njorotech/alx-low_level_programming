#include "main.h"

/**
  * create_file - creates a file
  * @filename: The name of the file to be created
  * @text_content: string to write to the file
  *
  * Return: 1 on success, or -1 on failure,
  * -1 if filename is NULL
  */
int create_file(const char *filename, char *text_content)
{
	int fd, length;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	length = strlen(text_content);
	if (text_content != NULL)
	{
		write(fd, text_content, length);
	}
	close(fd);

	return (1);
}
