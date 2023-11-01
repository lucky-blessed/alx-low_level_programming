#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d_file, lent = 0, w_bytes;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[lent])
		lent++;

	d_file = open(filename, O_WRONLY | O_APPEND);
	if (d_file == -1)
		return (-1);

	w_bytes = write(d_file, text_content, lent);
	close(d_file);

	if (w_bytes == -1 || w_bytes != lent)
		return (-1);

	return (1);
}
