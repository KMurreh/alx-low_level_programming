#include "main.h"

/**
 * create_file - creates a file with given text content
 * @filename: name of the file to create
 * @text_content: text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, len = 0, written = 0;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content)
{
while (text_content[len])
len++;

written = write(fd, text_content, len);
if (written == -1 || written != len)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
