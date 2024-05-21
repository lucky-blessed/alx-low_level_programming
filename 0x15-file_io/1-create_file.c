#include "main.h"
<<<<<<< HEAD

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);

=======
/**
 * create_file - Creates a file and writes text content to it.
 * @filename: Name of file to be created.
 * @text_content: String terminated by NULL to be written to the file.
 * Return: 1 (Success) or 0 (Otherwise)
 */
int create_file(const char *filename, char *text_content)
{
	int d_file, w_bytes, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[lent])
			lent++;
	}
	d_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (d_file == -1)
		return (-1);

	if (lent > 0)
	{
		w_bytes = write(d_file, text_content, lent);
		if (w_bytes == -1 || w_bytes != lent)
		{
			close(d_file);
			return (-1);
		}
	}
	close(d_file);
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
	return (1);
}
