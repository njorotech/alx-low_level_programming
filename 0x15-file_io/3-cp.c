#include "main.h"

/**
  * main - Entry point
  * @argc: count for arguments passed
  * @argv: An array of arguments passed to the program
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int fd1, fd2, close1, close2;
	char buff[BUFFER_SIZE];
	ssize_t readbytes/*, writtenbytes*/;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);


	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((readbytes = read(fd1, buff, BUFFER_SIZE)) > 0)
	{
		/*writtenbytes = */write(fd2, buff, readbytes);
	}
	close1 = close(fd1);
	close2 = close(fd2);

	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
