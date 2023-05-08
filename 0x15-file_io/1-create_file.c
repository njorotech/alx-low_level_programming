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

	if ((filename == NULL) || (text_content == NULL))
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	length = strlen(text_content);
	write(fd, text_content, length);

	return (1);
}
