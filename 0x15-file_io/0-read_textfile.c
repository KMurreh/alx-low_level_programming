#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, num_read;
char *buf;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buf);
return (0);
}

num_read = read(fd, buf, letters);
if (num_read == -1)
{
free(buf);
close(fd);
return (0);
}

if (write(STDOUT_FILENO, buf, num_read) != num_read)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (num_read);
}
