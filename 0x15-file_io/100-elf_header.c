#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - Prints an error message to stderr and exits with status code 98.
 * @message: The error message to display.
 */
void print_error(const char *message)
{
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(98);
}

/**
 * print_elf_header - Prints the information from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
    int i;

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header->e_ident[i]);
    printf("\n");
    printf("  Class:                             %s\n",
           header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
           header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
           "Invalid class");
    printf("  Data:                              %s\n",
           header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
           header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
           "Invalid data encoding");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n",
           header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
           header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX" :
           header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "NetBSD" :
           header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "Linux" :
           "Invalid OS/ABI");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n",
           header->e_type == ET_NONE ? "NONE (No file type)" :
           header->e_type == ET_REL ? "REL (Relocatable file)" :
           header->e_type == ET_EXEC ? "EXEC (Executable file)" :
           header->e_type == ET_DYN ? "DYN (Shared object file)" :
           header->e_type == ET_CORE ? "CORE (Core file)" :
           "Invalid type");
    printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, or the corresponding error code.
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
        print_error("Usage: elf_header elf_filename");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        print_error("Error: Cannot open file");

    if (read(fd, &header, sizeof(header)) != sizeof(header))
        print_error("Error: Cannot read ELF header");

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
        print_error("Error: Not an ELF file");

    lseek(fd, 0, SEEK_SET);

    printf("ELF Header:\n");
    print_elf_header(&header);

    close(fd);
    return 0;
}
