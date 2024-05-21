#include "main.h"
#include <stdio.h>
<<<<<<< HEAD

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
=======
/**
 * error_file - checks possibilities of oppening files
 * @file_from: frile from
 * @file_to: File to
 * @argv: Argument vector
 * Return: void
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
<<<<<<< HEAD
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
=======
		dprintf(STDERR_FILENO, "Error: Can't read fom file %s\n", argv[1]);
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
<<<<<<< HEAD
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwr;
=======
 * main - chacks the code for Holberton School students.
 * @argc: Number of arguments
 * @argv: Argument vector
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t n_chars, n_wr;
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
<<<<<<< HEAD

=======
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

<<<<<<< HEAD
	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
=======
	n_chars = 1024;
	while (n_chars == 1024)
	{
		n_chars = read(file_from, buf, 1024);
		if (n_chars == -1)
			error_file(-1, 0, argv);
		n_wr = write(file_to, buf, n_chars);
		if (n_wr == -1)
			error_file(0, -1, argv);
	}
	close_err = close(file_from);
	if (close_err == -1)
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
<<<<<<< HEAD

	err_close = close(file_to);
	if (err_close == -1)
=======
	close_err = close(file_to);
	if (close_err == -1)
>>>>>>> ffb52031b1a96645b315343a368b8bdaf9619a89
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
