#include "main.h"
<<<<<<< HEAD

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
=======
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to be read.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed, or 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int d_file, r_bytes, w_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	d_file = open(filename, O_RDONLY);
	if (d_file == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(d_file);
		return (0);
	}
	r_bytes = read(d_file, buffer, letters);
	if (r_bytes == -1)
	{
		free(buffer);
		close(d_file);
		return (0);
	}
	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	free(buffer);
	close(d_file);
	if (w_bytes != r_bytes)
		return (0);
	return (w_bytes);
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
}
