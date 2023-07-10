#include <unistd.h>
#include <fcntl.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return 0;

    int file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1)
        return 0;

    char buffer[1024];  // Adjust the buffer size as needed
    ssize_t bytes_read = read(file_descriptor, buffer, letters);
    if (bytes_read == -1) {
        close(file_descriptor);
        return 0;
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    close(file_descriptor);

    if (bytes_written == -1 || bytes_written != bytes_read)
        return 0;

    return bytes_written;
}
