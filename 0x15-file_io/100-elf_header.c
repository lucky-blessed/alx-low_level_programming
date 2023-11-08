#include "main.h"
void display_elf_header_info(const Elf64_Ehdr *elf_header);
/**
 * main - Entery Point
 * @argc: Argumment count.
 * @argv: Argument vector.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int d_file;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_flename\n", argv[0]);
		exit(98);
	}
	d_file = open(argv[1], O_RDONLY);
	if (d_file == -1)
	{
		perror("Error");
		exit(98);
	}
	if (read(d_file, &elf_header, sizeof(Elf64_header)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: Cannot read Elf header\n");
		close(d_file);
		exit(98);
	}
	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(d_file);
		exit(98);
	}
	display_elf_header_info(&elf_header);
	close(d_file);
	return (0);
}

/**
 * display_elf_header_info - Display
 * @elf_header: Pointer
 */
void display_elf_header_info(const Elf64_Ehdr *elf_header)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_header->e_ident[i]);
		if (i < EI_NIDENT - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	printf("Class: %d-bit\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("Data: %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header->e_entry);
}
