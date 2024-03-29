#include "main.h"
/**
 * create_file - Creates a file.
 *
 * @filename: Name of the file to be created.
 * @text_content: Text to be written to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor, bytes_written, length = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
bytes_written = write(file_descriptor, text_content, length);
if (file_descriptor == -1 || bytes_written == -1)
return (-1);
close(file_descriptor);
return (1);
}
