#include "main.h"

/**
  * create_file - creates a file
  * @filename: name of the file to be created
  * @text_content: string to write on the file
  *
  * Return: 1 on success, -1 on failure,
  * -1 if filename is NULL
  */
int create_file(const char *filename, char *text_content)
{
	int fd, written, len = 0, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	while (text_content[i])
	{
		len++;
		i++;
	}
	written = write(fd, text_content, len);
	if (written == -1)
	{
		return (-1);
	}

	return (1);

}
