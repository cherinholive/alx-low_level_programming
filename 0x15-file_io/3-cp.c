#include "main.h"

/**
 * error_handle - handle error and return error msg.
 * @file_code: copying file
 * @eror co: copy to file
 *
 * Return: none
 */

void error_handl( int error_code, char *argv[], int fd)
{

	switch (error_code)
	{
		case 97:
		{
			dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
			exit(error_code);
		}
		case 98:
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(error_code);
		}
		case 99:
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(error_code);
		}
		case 100:
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error_code);
		}
	}
}

/**
 * main - cp file
 * @argc: num of argument
 * @argv: argument
 *
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t num_char_r, num_char_w;
	char buf[1024];

	if (argc != 3)
		error_handle(97, argv, 0);

	file_from = open(argv[1], O_RDONLY);
	error_handle(98, argv, 0);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handle(99, argv, 0);

	num_char_r = 1024;
	while (num_char_r == 1024)
	{
		num_char_r = read(file_from, buf, 1024);
		if (num_char_r == -1)
			error_handle(98, argv, 0);
		num_char_w = write(file_to, buf, num_char_r);
		if (num_char_w == -1)
			error_handle(99, argv, 0);
	}

	err_c = close(file_from);
	if (err_c == -1)
		error_handle(100, argv, file_from);

	err_c = close(file_to);
	if (err_c == -1)
		error_handle(100, argv, file_from);

	return (0);
}
