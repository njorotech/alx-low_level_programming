#include "main.h"

/**
  * append_text_to_file - Appends text at the end of a file
  * @filename: name of the file
  * @text_content: string to be added to the file
  *
  * Return: 1 on success, -1 on failure,
  * -1 if filename is NULL, -1 if file does not exist
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrbyte, len = 0, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND);

	if (fd == -1)
	{
		return (-1);
	} else { 
	if (text_content != NULL)
	{
		while (text_content[i])
		{
			len++;
			i++;
		}

		wrbyte = write(fd, text_content, len);

		if (wrbyte == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);}
	return (-1);
}
