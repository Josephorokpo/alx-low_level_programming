#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * display_elf_header - Displays the information contained in the ELF header
 * at the start of an ELF file.
 * @filename: The name of the ELF file to analyze.
 */
void display_elf_header(const char *filename);

/**
 * main - Display the information contained in the
 * ELF header at the start of the ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 * the function fails - exit code 98.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	display_elf_header(argv[1]);

	return (0);
}

/**
 * display_elf_header - Displays the information contained in the ELF header.
 * @filename: The name of the ELF file to analyze.
 */
void display_elf_header(const char *filename)
{
	int fd;
	Elf32_Ehdr header;
	int i; /* Declare 'i' here to comply with C90 standard */

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file '%s'\n", filename);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error: Cannot read ELF header from file '%s'\n", filename);
		close(fd);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: File '%s' is not an ELF file\n", filename);
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("	Magic:	");
	for (i = 0; i < EI_NIDENT; i++) /* Use 'i' declared earlier */
		printf("%02x ", header.e_ident[i]);
	printf("\n");

	printf("	Class:				");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}

	printf("	Data:				");
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}

	printf("	Version:			%d (current)\n", header.e_ident[EI_VERSION]);

	printf("	OS/ABI:				");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
			break;
	}

	printf("	ABI Version:		%d\n", header.e_ident[EI_ABIVERSION]);

	printf("	Type:				");
	switch (header.e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_type);
			break;
	}

	printf("	Entry point address:	0x%x\n", header.e_entry);

	close(fd);
}
