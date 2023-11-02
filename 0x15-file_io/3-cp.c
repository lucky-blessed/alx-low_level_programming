#include "main.h"
#define BUFFER_SIZE 1024
/**
 * nain - coppies content of a file to another file
 * @argc: Argument count.
 * @argv: Passed argument
 * Return: Returns 1 on success or exit otherwise.
 */
int main(int argc, char *argv[])
{
	int d_file_from, d_file_to;
	ssize_t r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	d_file_from = open(argv[1], O_RDONLY);
	if (d_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	d_file_to = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (d_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(d_file_from);
		exit(99);
	}
	while ((r_bytes = read(d_file_from, buffer, BUFFER_SIZE)) > 0)
	{
		w_bytes = write(d_file_to, buffer, r_bytes);
		if (w_bytes != r_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(d_file_from);
			close(d_file_to);
			exit(99);
		}
	}
	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(d_file_from);
		close(d_file_to);
		exit(98);
	}
	if (close(d_file_from) == -1 || close(d_file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Con't close f_file\n");
		exit(100);
	}
	return (0);
}
