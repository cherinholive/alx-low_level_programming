#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename pointer.
 * @text_content: text to write in the file.
 *
 * Return: 1 success, then -1 fails.
 */

int create_file(const char *filename, char *text_content)
{
	int open_rt, w_result, n_letters;

	if (!filename)
		return (-1);

	open_rt = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (open_rt == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

	w_result = write(open_rt, text_content, n_letters);

	if (w_result == -1)
		return (-1);

	close(open_rt);

	return (1);
}
