#include "main.h"

/**
 * read_textfile - reads a text file and 
 * prints it to the POSIX standard output.
 * @filename: file pointer
 * @letter: number of letter to print.
 *
 * Return: number of letter read or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, num_letter_output;
	int open_rt;
	char *buf;

	if (!filename)
		return (0);

	open_rt = open(filename, O_RDONLY);

	if (open_rt == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);

	a = read(open_rt, buf, letters);
	num_letter_output = write(1, buf, letters);

	close(open_rt);

	free(buf);

	return (num_letter_output);	
}
