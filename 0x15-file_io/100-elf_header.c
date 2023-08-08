#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
void validate_elf(unsigned char *e_ident);
void print_magic_numbers(unsigned char *e_ident);
/* Define other function prototypes here */

/**
 * validate_elf - Validates if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file, exit with code 98.
 */
void validate_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/* Implement other functions here */

/**
 * main - Displays the information contained in the ELF header
 *        at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or the function fails,
 *              exit with code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int file_descriptor, bytes_read;

	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close(file_descriptor);
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(98);
	}

	bytes_read = read(file_descriptor, header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
	{
		free(header);
		close(file_descriptor);
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}

	validate_elf(header->e_ident);

	printf("ELF Header:\n");
	print_magic_numbers(header->e_ident);

	/* Call other print functions here... */

	free(header);
	close(file_descriptor);

	return (0);
}

