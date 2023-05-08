#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of the file
  * @text_content: string to be appended
  *
  * Return: 1 on success, or -1 on failure,
  * or -1 if filename is NULL
  * or -1 if the file does not exist
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t bytesWritten = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		if (access(filename, F_OK | W_OK) == 0)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}

	fd = open(filename, O_APPEND | O_WRONLY);
	length = strlen(text_content);
	bytesWritten = write(fd, text_content, length);

	if (bytesWritten != (ssize_t) length)
	{
		return (-1);
		close(fd);
	}
	close(fd);
	return (1);

}
